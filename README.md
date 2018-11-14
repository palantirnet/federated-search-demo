# Federated Search Demo

This is the development repository for Federated Search Demo's Drupal 8 website. It contains the codebase and an environment to run the site for development.

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
5. Build, install, and enable demo content: `phing build install install-d7`
6. Visit your D8 site at [federated-search-demo.local](http://federated-search-demo.local)
7. Visit your D7 site at [federated-search-demo.d7.local](http://federated-search-demo.d7.local)

## How do I work on this?

You can edit code, update documentation, and run git commands by opening files directly from your host machine.

To run project-related commands other than `vagrant up` and `vagrant ssh`:

* SSH into the VM with `vagrant ssh`
* You'll be in your project root, at the path `/var/www/federated-search-demo.local/`
* You can run `composer`, `drush`, and `phing` commands from here
* Go to the path `/var/www/federated-search-demo.local/web/d7` to add new modules to the d7 site.

Avoid committing to git from within your VM, because your commits won't be properly attributed to you. If you must, make sure you [create a global .gitignore [internal]](https://github.com/palantirnet/documentation/wiki/Using-the-gitignore-File) within your VM at `/home/vagrant/.gitignore`, and configure your name and email for proper attribution:

```
git config --global user.email 'me@palantir.net'
git config --global user.name 'My Name'
```

## Drupal Development

You can refresh/reset your local Drupal site at any time. SSH into your VM and then:

1. Download the most current dependencies for D8: `composer install`
2. Download the most current dependencies for D7: `cd web/d7` then `composer install`. Don't forget to return to the project root to run the phing commands.
3. Rebuild your local CSS and Drupal settings file: `phing build`
4. Reinstall Drupal 8: `phing install`
5. Reinstall Drupal 7: `phing install-d7`
6. ... OR run all phing targets at once: `phing build install install-d7`

Additional information on developing for Drupal within this environment is in [docs/general/drupal_development.md](docs/general/drupal_development.md).

## Deployment

This project is for demo purposes only and is not to be deployed.

## Additional Documentation

Project-specific:

* [Technical Approach](docs/technical_approach.md)

General:

* [Drupal Development](docs/general/drupal_development.md)
* [Styleguide Development](docs/general/styleguide_development.md)

----
Copyright 2018 Palantir.net, Inc.
