# -*- mode: ruby -*-
# vi: set ft=ruby :

Vagrant.require_version ">= 2.1.0"

%w{ vagrant-hostmanager vagrant-auto_network }.each do |plugin|
    unless Vagrant.has_plugin?(plugin)
        raise "#{plugin} plugin is not installed. Please install with: vagrant plugin install #{plugin}"
    end
end

# tunables
project     = 'federated-search-demo'
hostname    = "#{project}.local"
extra_hostnames = [
  'fs-demo.d8.local',
  'fs-demo.d7.local',
  'fs-demo.d7-domain.local',
  'fs-demo.d8-domain.local',
]

ansible_solr_enabled = true
ansible_https_enabled = true
ansible_node_version = 8
ansible_project_web_root = "web"
ansible_timezone = "America/Chicago"
ansible_system_packages = []
ansible_custom_playbook = "provisioning/federated-search-demo.yml"
# end tunables

Vagrant.configure(2) do |config|

    config.hostmanager.enabled = true
    config.hostmanager.manage_host = true

    config.vm.define "#{project}" do |box|

        box.vm.box = "palantir/drupalbox"
        box.vm.box_version = ">= 1.2.0, < 2.0"

        box.vm.provider "virtualbox" do |vb|
            vb.customize ["modifyvm", :id, "--memory", "2048"]
        end

        box.vm.hostname = "#{hostname}"
        box.vm.network :private_network, :auto_network => true

        box.hostmanager.aliases = extra_hostnames

        box.vm.synced_folder ".", "/vagrant", :disabled => true
        box.vm.synced_folder ".", "/var/www/#{hostname}", :nfs => true

        box.ssh.forward_agent = true
    end

    config.vm.provision "the-vagrant", type: "ansible" do |ansible|
        ansible.playbook = "vendor/palantirnet/the-vagrant/conf/vagrant/provisioning/drupal8-skeleton.yml"

        ansible.groups = {
            "all:children" => ["#{project}"]
        }

        ansible.extra_vars = {
            "project" => project,
            "hostname" => hostname,
            "extra_hostnames" => extra_hostnames,
            "solr_enabled" => ansible_solr_enabled,
            "https_enabled" => ansible_https_enabled,
            "project_web_root" => ansible_project_web_root,
            "timezone" => ansible_timezone,
            "system_packages" => ansible_system_packages,
            "nvm_version" => "v0.33.11",
            "nvm_default_node_version" => ansible_node_version,
            "nvm_node_versions" => [ ansible_node_version ],
        }

        ansible.galaxy_role_file = "vendor/palantirnet/the-vagrant/conf/vagrant/provisioning/requirements.yml"
        ansible.galaxy_roles_path = "vendor/palantirnet/the-vagrant/conf/vagrant/provisioning/roles/"
    end

    if (defined?(ansible_custom_playbook) && !ansible_custom_playbook.empty?)
        config.vm.provision "federated-search-demo-provision", type: "ansible" do |ansible|
            ansible.playbook = ansible_custom_playbook
        end
    end

    config.trigger.before [:up, :reload] do |trigger|
        trigger.name = "Composer Install"
        trigger.run = {
            inline: "composer install --ignore-platform-reqs"
        }
    end

end
