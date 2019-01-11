@javascript
Feature: Drupal 8 search filers
  As a site visitor
  I want to search the Drupal 8 sites
  And I want to filter my results
  So that I can find relevant information more quickly

  Scenario: Filter by type
    Given I visit "/search-app?search=pasta"
    And I wait for "1" second
    # When I expand the "Type" filter
    When I click the "#solr-list-facet-ss_federated_type" element
    # When I select the "Article" filter
    And I check "Article"
    Then I should see the text "The umami guide to our favorite mushrooms"
    And I should not see the text "Super easy vegetarian pasta bake"

  Scenario: Filter by site - D8 single
    Given I visit "/search-app?search=pasta"
    And I wait for "1" second
    # When I expand the "Site Name" filter
    When I click the "#solr-list-facet-sm_site_name" element
    # When I select the "Federated Search Demo (D8, single)" filter
    And I check "Federated Search Demo (D8, single)"
    Then I should see the text "Federated Search Demo (D8, single)"
    And I should not see the text "Federated Search Demo (D8, domain one)"

  Scenario: Filter by site - D8 domain
    Given I visit "/search-app?search=pasta"
    And I wait for "1" second
    # When I expand the "Site Name" filter
    When I click the "#solr-list-facet-sm_site_name" element
    # When I select the "Federated Search Demo (D8, domain one)" filter
    And I check "Federated Search Demo (D8, domain one)"
    Then I should see the text "Federated Search Demo (D8, domain one)"
    And I should not see the text "Federated Search Demo (D8, single)"
