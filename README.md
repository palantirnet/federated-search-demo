# Federated Search Demo

This is the development repository for Federated Search Demo environment. It contains the codebase and an environment to run the site for development and demo purposes.

## Table of Contents

* [Development Environment](#development-environment)
* [Development Environment Components](#development-environment-components)
* [Getting Started](#getting-started)
* [How do I work on this?](#how-do-i-work-on-this)
* [Working with content](#working-with-content)
* [Sample searches](#sample-searches)
* [Reading the SOLR index](#reading-the-solr-index)
* [Drupal Development](#drupal-development)
* [Deployment](#Deployment)
* [Styleguide Development](#styleguide-development)
* [Additional Documentation](#additional-documentation)

## Development Environment

The development environment is based on [palantirnet/the-vagrant](https://github.com/palantirnet/the-vagrant). To run the environment, you will need:

* Mac OS X >= 10.10. _This stack may run under other host operating systems, but is not regularly tested. For details on installing these dependencies on your Mac, see our [Mac setup doc [internal]](https://github.com/palantirnet/documentation/wiki/Mac-Setup)._
* [Composer](https://getcomposer.org)
* [virtualBox](https://www.virtualbox.org/wiki/Downloads) >= 5.0
* [ansible](https://github.com/ansible/ansible) >= 2.8 `brew install ansible`
* [vagrant](https://www.vagrantup.com/) >= 2.2
* Vagrant plugins:
  * [vagrant-hostmanager](https://github.com/smdahlen/vagrant-hostmanager) `vagrant plugin install vagrant-hostmanager`
  * [vagrant-auto_network](https://github.com/oscar-stack/vagrant-auto_network) `vagrant plugin install vagrant-auto_network`

If you update Vagrant, you may need to update your vagrant plugins with `vagrant plugin update`.

## Development Environment Components

The development environment inside the virtual machine will be automatically configured by Vagrant.

You may be interested in creating your own development environment and comparing it against the tested version.

* Operating System: Ubuntu 64bit version 16.04.4 LTS
* Web Host: Apache HTTP version 2.x
* Database: MySQL version 5.7.21
* PHP version 7.3.9
* Search Server: Apache Solr version 4.5.1
* Web Application: Drupal versions 7.69 and 8.8.1

## Getting Started

1. Clone the project from github: `git clone git@github.com:palantirnet/federated-search-demo.git`
2. From inside the project root, run:

  ```
    vagrant up
  ```
3. You will be prompted for the administration password on your host machine
4. Log in to the virtual machine (the VM): `vagrant ssh`
5. Build, install, and enable demo content: `phing install-all`
  * When prompted, you may choose to empty the current SOLR index. This action is recommended when re-installing all sites, but not one site.
6. Visit your D8 (standalone) site at [http://d8.fs-demo.local](http://d8.fs-demo.local)
7. Visit your D8 (domain access) site at:
   - [http://fs-demo.d8-1.local](http://d8-1.fs-demo.local)
   - [http://d8-2.fs-demo.local](http://d8-2.fs-demo.local)
   - [http://d8-3.fs-demo.local](http://d8-3.fs-demo.local)
   - These sites are for future use, as Domain support has not yet been ported to D8.
8. Visit your D7 site at [http://d7.fs-demo.local](http://d7.fs-demo.local)
9. View the Solr index at [http://federated-search-demo.local:8983/solr/#/drupal8/query](http://federated-search-demo.local:8983/solr/#/drupal8/query).

You can log in to any of the Drupal sites at `/user` with `admin/admin`.

## How do I work on this?

You can edit code, update documentation, and run git commands by opening files directly from your host machine.

To run project-related commands other than `vagrant up` and `vagrant ssh`:

* SSH into the VM with `vagrant ssh`
* You'll be in your project root, at the path `/var/www/federated-search-demo.local/`
* You can run `composer`, `drush`, and `phing` commands from here
* Go to the path `/var/www/federated-search-demo.local/web/*` to add new modules to each site.
* Use drush on the D8 sites - try `drush site:alias` or `drush @d8 status`
* Use drush on the D7 site by navigating into the d7 directory:

   ```
   cd web/d7/
   drush site-alias
   drush @d7 status
   ```

## Working with content

This version of the demo site is all about dogs. We use simple core content types (basic page and article) supplemented by taxonomy terms. The content titles are meaningful (they are all dog breeds). Content body is lorem ipsum text.

We create three vocabularies in Drupal 7: 

* Age
* Color
* Traits

In Drupal 8, the Color vocabulary is not present.

Each content page is assigned to the available vocabularies. This setup allows our search index to provide filters by each term.

Note that term mapping in Federated Search lets you alias terms. In the Drupal 7 version, the Color `Gold` is aliased to `Yellow` in the search index, so both terms appear as filters. Likewise, the Drupal 7 term `Affectionate` is mapped to `Loyal`, matching the term from Drupal 8, so only `Loyal` appears in the filter. These configurations show how disparate taxonomies can be merged in the search index.

### Images

Some of the dogs -- but not all -- have images. These show how the index handles image display. The following dogs should have images: `Irish Terrier, English Terrier, Newfoundland, Pointer, Greyhound, Dachshund, Maltese, Cumberland Sheepdog`.

Note that sometimes the image cache must be primed, so if you see a broken image on first page load, reload the page. If an image has the url `default`, it means the index has not been built properly. Run `phing solr-reindex` to correct the issue.

Images are [public domain](https://freevintageillustrations.com/faq/) and sourced from [Free Vintage Illustration](https://freevintageillustrations.com/vintage-dog-illustrations-public-domain/). They are intended for demonstration purposes only.

## Sample searches

By default, the sites will show all content when no search keywords are entered. There should be 26 items in the default result set.

A good sample search is for `terrier`, which should return 5 results:

* English Terrier (D7)
* Jack Russell Terrier (D8)
* Irish Terrier (D7)
* Boston Terrier (D8)
* Norfolk Terrier (Domain 1)

These three search results should be identical:

* http://d8.fs-demo.local/search-app?search=terrier
* http://d7.fs-demo.local/search-app?search=terrier
* http://d8-1.fs-demo.local/search-app?search=terrier

### Note on Domain Access

The domain access indexing is not currently working for Drupal 8. All content is being assigned to `Domain 1`, which is incorrect.

## Reading the SOLR index

With the VM running, you can visit the SOLR index at http://federated-search-demo.local:8983/solr/#/drupal8/query to see indexed data. When looking at an item indexed by federated search, compare it to this sample:

```
        "id": "dqiuue-federated_search-1",
        "index_id": "federated_search",
        "item_id": "1",
        "hash": "dqiuue",
        "site": "http://d7.fs-demo.local/",
        "ds_federated_date": "2020-01-21T02:00:53Z",
        "ss_federated_image": "http://d7.fs-demo.local/sites/default/files/styles/search_api_federated_solr_image/public/field/image/vintage-irish-terrier-illustration-public-domain.jpg?itok=voT10QLK",
        "sm_federated_terms": [
          "Age>Mature",
          "Color>Gold",
          "Color>Yellow",
          "Traits>Loyal"
        ],
        "ss_federated_title": "Irish Terrier",
        "ss_federated_type": "Article",
        "tm_rendered_item": [
          "Irish Terrier",
          "Submitted by admin on Tue, 01/21/2020 - 02:00 An illustration of an Irish terrier Ball down roll over bell sit pretty dog toy dog bone. Milk bone k9 dog toy tail release dog. Squirrel release collar lab sit dog toy dog house. Puppy bring it, peanut butter leash milk bone dog bowl catch chew toy. Leave it stand k9, catch roll over jump shake stand. come tug come puppies squeak toy speak, peanut butter squirrel k9 speak. Squirrel shake bring it peanut butter squirrel dog toy, spin stand. Dog bone dog chew toy fetch tug. Come roll over bang, down roll over collar great dance great dance lap dog leave it stand. Mature Affectionate Gold"
        ],
        "spell": [
          "Irish Terrier",
          "Submitted by admin on Tue, 01/21/2020 - 02:00 An illustration of an Irish terrier Ball down roll over bell sit pretty dog toy dog bone. Milk bone k9 dog toy tail release dog. Squirrel release collar lab sit dog toy dog house. Puppy bring it, peanut butter leash milk bone dog bowl catch chew toy. Leave it stand k9, catch roll over jump shake stand. come tug come puppies squeak toy speak, peanut butter squirrel k9 speak. Squirrel shake bring it peanut butter squirrel dog toy, spin stand. Dog bone dog chew toy fetch tug. Come roll over bang, down roll over collar great dance great dance lap dog leave it stand. Mature Affectionate Gold",
          "Irish Terrier Submitted by admin on Tue, 01/21/2020 - 02:00 An illustration of an Irish terrier Ball down roll over bell sit pretty dog toy dog bone. Milk bone k9 dog toy tail release dog. Squirrel release collar lab sit dog toy dog house. Puppy bring it, peanut butter leash milk bone dog bowl catch chew toy. Leave it stand k9, catch roll over jump shake stand. come tug come puppies squeak toy speak, peanut butter squirrel k9 speak. Squirrel shake bring it peanut butter squirrel dog toy, spin stand. Dog bone dog chew toy fetch tug. Come roll over bang, down roll over collar great dance great dance lap dog leave it stand. Mature Affectionate Gold"
        ],
        "ss_search_api_language": "und",
        "sm_site_name": [
          "Federated SOLR D7"
        ],
        "sm_urls": [
          "http://d7.fs-demo.local/node/1"
        ],
        "content": "Irish Terrier Submitted by admin on Tue, 01/21/2020 - 02:00 An illustration of an Irish terrier Ball down roll over bell sit pretty dog toy dog bone. Milk bone k9 dog toy tail release dog. Squirrel release collar lab sit dog toy dog house. Puppy bring it, peanut butter leash milk bone dog bowl catch chew toy. Leave it stand k9, catch roll over jump shake stand. come tug come puppies squeak toy speak, peanut butter squirrel k9 speak. Squirrel shake bring it peanut butter squirrel dog toy, spin stand. Dog bone dog chew toy fetch tug. Come roll over bang, down roll over collar great dance great dance lap dog leave it stand. Mature Affectionate Gold",
        "_version_": 1656545346728231000,
        "timestamp": "2020-01-23T18:39:11.137Z"
```

*Bonus example*: The sample above shows how the `Yellow` and `Gold` colors are stored as synonyms.

## Drupal Development

You can refresh/reset your local Drupal site at any time. SSH into your VM and then:

### Rebuild all the things

If you just want to get up and running, from the project root run `phing install-all`. If this fails for any reason, proceed to run it step by step.

### Run each step individually

1. Download the most current dependencies for D8 (standalone): `composer install --working-dir=web/d8`
2. Download the most current dependencies for D8 (domain access): `composer install --working-dir=web/d8-domain`
3. Download the most current dependencies for D7: `composer install --working-dir=web/d7`
4. Reinstall Drupal 8:
   - Standalone: `phing install-d8 -Ddrush.root=web/d8/docroot`
   - Domain site: `phing install-d8 -Ddrush.root=web/d8-domain/docroot`
6. Reinstall Drupal 7: `phing install-d7`
7. Build the `/src` directory and checkout modules there: `phing init`
   - This links each of the two modules: `search_api_federated_solr` and `search_api_field_map` from the D8/D7 single site docroot to the `/src` directory and also into the D8/D7 Domain Access-enabled docroot. This means all changes made in `/src/search_api_...` will propagate to both sites simultaneously. The `phing init` command is run automatically by any of the installer scripts. These git checkouts point to GitHub and have `drupal` aliased remotes to drupal.org (`git remote show`).

### Clear the search index

If you rebuild the Drupal sites you might end up with orphaned content in Solr. To clear:
`phing solr-clear`

To clear and re-index all content:
`phing solr-reindex`

### Updating Solr config

This project is currently using [Solr v4.5.1](http://archive.apache.org/dist/lucene/solr/ref-guide/apache-solr-ref-guide-4.5.pdf).

The source for Solr config can be found at `conf/solr/drupal[7/8]/custom/`, based on your site's core (`drupal7` or `drupal8`).

These files were copied from the `search_api_solr` module and updated to meet testing needs for this project.

As part of provisioning this box, the custom Solr config from `conf/solr/drupal[7/8]/custom/` will be copied to the directory where Solr expects its config to live (`/var/solr/drupal[7/8]/conf/`).

Once you've made an update to a config file in `conf/solr/drupal[7/8]/custom/`, you'll need to reprovision your vm using `vagrant up --provision` if your vm is not already up or `vagrant provision` if your vm is already up.

### Restarting Solr

You can restart the Solr service from the project within the vm with `sudo service solr restart`.

## Deployment

This project is for demo purposes only and is not to be deployed.

## Directory structure

This repo is structured a little differently than usual, since it contains 4 independent Drupal docroots. Here're some important pieces:

```

├── conf
│   └── solr
│       ├── drupal7
│       └── drupal8
├── config
│   ├── config_split  # Not using this at the moment
│   └── sites  # D8 site config goes here
│       └── d8
├── drush
│   └── sites # Drush aliases go here.
│       ├── d8-domain.site.yml
│       └── d8.site.yml
├── features  # Tests could eventually go here.
│   ├── bootstrap
│   │   └── FeatureContext.php
│   └── installation.feature
├── src   # These are the working directories for module development.
│   ├── search_api_federated_solr -> ../web/d8/docroot/modules/contrib/search_api_federated_solr
│   ├── search_api_federated_solr-7.x -> ../web/d7/docroot/sites/all/modules/contrib/search_api_federated_solr
│   ├── search_api_field_map -> ../web/d8/docroot/modules/contrib/search_api_field_map
│   └── search_api_field_map-7.x -> ../web/d7/docroot/sites/all/modules/contrib/search_api_field_map
└── web
    ├── d7
    │   ├── composer.json
    │   ├── composer.lock
    │   ├── docroot
    │   └── vendor
    ├── d8
    │   ├── composer.json
    │   ├── composer.lock
    │   ├── docroot
    │   └── vendor
    │   # Directories for the domain-enabled docroots go here
```

----
Copyright 2018, 2019, 2020 Palantir.net, Inc.
