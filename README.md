# Federated Search Demo

This is the development repository for Federated Search Demo environment. It contains the codebase and an environment to run the site for development and demo purposes.

## Table of Contents

* [Development Environment](#development-environment)
* [Getting Started](#getting-started)
* [How do I work on this?](#how-do-i-work-on-this)
* [Drupal Development](#drupal-development)
* [Deployment](#Deployment)
* [Styleguide Development](#styleguide-development)
* [Additional Documentation](#additional-documentation)

## Development Environment

The development environment is based on [palantirnet/the-vagrant](https://github.com/palantirnet/the-vagrant). To run the environment, you will need:

* Mac OS X >= 10.10. _This stack may run under other host operating systems, but is not regularly tested. For details on installing these dependencies on your Mac, see our [Mac setup doc [internal]](https://github.com/palantirnet/documentation/wiki/Mac-Setup)._
* [Composer](https://getcomposer.org)
* [virtualBox](https://www.virtualbox.org/wiki/Downloads) >= 5.0
* [ansible](https://github.com/ansible/ansible) >= 2.2 `brew install ansible`
* [vagrant](https://www.vagrantup.com/) >= 2.1
* Vagrant plugins:
  * [vagrant-hostmanager](https://github.com/smdahlen/vagrant-hostmanager) `vagrant plugin install vagrant-hostmanager`
  * [vagrant-auto_network](https://github.com/oscar-stack/vagrant-auto_network) `vagrant plugin install vagrant-auto_network`

If you update Vagrant, you may need to update your vagrant plugins with `vagrant plugin update`.

## Getting Started

1. Clone the project from github: `git clone git@github.com:palantirnet/federated-search-demo.git`
2. From inside the project root, run:

  ```
    vagrant up
  ```
3. You will be prompted for the administration password on your host machine
4. Log in to the virtual machine (the VM): `vagrant ssh`
5. Build, install, and enable demo content: `phing build install-all`
6. Build the `/src` directory and symlink modules there to make development easier: `phing init`
7. Visit your D8 (standalone) site at [http://d8.fs-demo.local](http://d8.fs-demo.local)
8. Visit your D8 (domain access) site at:
   - [http://d8-1.fs-demo.local](http://d8-1.fs-demo.local)
   - [http://d8-2.fs-demo.local](http://d8-2.fs-demo.local)
   - [http://d8-3.fs-demo.local](http://d8-3.fs-demo.local)
   - These sites are for future use, as Domain support has not yet been ported to D8.
9. Visit your D7 (standalone) site at [http://d7.fs-demo.local](http://d7.fs-demo.local)
10. Visit your D7 (domain access) site at:
   - [http://d7-1.fs-demo.local](http://d7-1.fs-demo.local)
   - [http://d7-2.fs-demo.local](http://d7-2.fs-demo.local)
   - [http://d7-3.fs-demo.local](http://d7-3.fs-demo.local)
11. View the Solr index at [http://federated-search-demo.local:8983/solr/#/drupal8/query](http://federated-search-demo.local:8983/solr/#/drupal8/query). 

You can log in to any of the Drupal sites at `/user` with `admin/admin`.

## How do I work on this?

You can edit code, update documentation, and run git commands by opening files directly from your host machine.

To run project-related commands other than `vagrant up` and `vagrant ssh`:

* SSH into the VM with `vagrant ssh`
* You'll be in your project root, at the path `/var/www/federated-search-demo.local/`
* You can run `composer`, `drush`, and `phing` commands from here
* Go to the path `/var/www/federated-search-demo.local/web/*` to add new modules to each site.

Avoid committing to git from within your VM, because your commits won't be properly attributed to you. If you must, make sure you [create a global .gitignore [internal]](https://github.com/palantirnet/documentation/wiki/Using-the-gitignore-File) within your VM at `/home/vagrant/.gitignore`, and configure your name and email for proper attribution:

```
git config --global user.email 'me@palantir.net'
git config --global user.name 'My Name'
```

## Drupal Development

You can refresh/reset your local Drupal site at any time. SSH into your VM and then:

### Rebuild all the things

If you just want to get up and running, from the project root run `phing build install-all init`. If this fails for any reason, proceed to run it step by step.

### Run each step individually

1. Download the most current dependencies for D8 (standalone): `cd web/d8` then `composer install`. Don't forget to return to the project root to run the phing commands.
2. Download the most current dependencies for D8 (domain access): `cd web/d8-domain` then `composer install`. Don't forget to return to the project root to run the phing commands.
3. Download the most current dependencies for D7: `cd web/d7` then `composer install`. Don't forget to return to the project root to run the phing commands.
4. Rebuild your local CSS and Drupal settings file: `phing build`
5. Reinstall Drupal 8: 
   - Standalone: `phing install-d8 -Dbuild.env=d8`
   - Domain site: `phing install-d8 -Dbuild.env=d8-domain`
6. Reinstall Drupal 7: `phing install-d7`
7. Build the `/src` directory and symlink modules there: `phing init`
   - This links each of the two modules: `search_api_federated_solr` and `search_api_field_map` from the D8/D7 single site docroot to the `/src` directory and also into the D8/D7 Domain Access-enabled docroot. This means all changes made in `/src/search_api_...` will propagate to both sites simultaneously.
   - If you re-run composer in any of the docroots you may need to re-run `phing init`.

Additional information on developing for Drupal within this environment is in [docs/general/drupal_development.md](docs/general/drupal_development.md).

### Clear the search index

If you rebuild the Drupal sites you might end up with orphaned content in Solr. To clear:
`phing solr-clear`

## Deployment

This project is for demo purposes only and is not to be deployed.

## Directory structure

This repo is structured a little differently than usual, since it contains 4 independent Drupal docroots. Here're some important pieces:

```

├── conf  # Build properties go in here
│   ├── apache.circle.conf
│   ├── build.circle.properties
│   ├── build.d7.properties
│   ├── build.d8.properties
│   ├── build.default.properties
│   ├── drupal  # Settings.php templates go here
│   │   ├── config
│   │   ├── services.yml
│   │   ├── settings.acquia.php
│   │   ├── settings.d7.php
│   │   └── settings.php
│   └── drushrc.php
├── config
│   ├── config_split  # Not using this at the moment
│   └── sites  # D8 site config goes here
│       └── d8
├── drush  # Drush aliases go here.
│   ├── fsd-d7.aliases.drushrc.php
│   └── fsd-d8.aliases.drushrc.php
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

## Additional Documentation

Project-specific:

* [Technical Approach](docs/technical_approach.md)

General:

* [Drupal Development](docs/general/drupal_development.md)
* [Styleguide Development](docs/general/styleguide_development.md)

----
Copyright 2018 Palantir.net, Inc.
