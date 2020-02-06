@javascript
Feature: Federated search filers
  As a site visitor
  I want to search the federated sites
  And I want to filter my results
  So that I can find relevant information more quickly

  Scenario: Filter by type
    Given I visit "/search-app?search=terrier"
    And I wait for "1" second
    # When I expand the "Type" filter
    When I click the "#solr-list-facet-ss_federated_type" element
    # When I select the "Article" filter
    And I check "Article"
    Then I should see the text "Jack Russell Terrier"
    And I should see the text "English Terrier"
    And I should see the text "Irish Terrier"

  Scenario: Filter by site - D8 single
    Given I visit "/search-app?search=terrier"
    And I wait for "1" second
    # When I expand the "Site Name" filter
    When I click the "#solr-list-facet-sm_site_name" element
    # When I select the "Federated Search Drupal 8" filter
    And I check "Federated Search Drupal 8"
    Then I should see the text "Federated Search Drupal 8"
    And I should see the text "Jack Russell Terrier"
    And I should see the text "Boston Terrier"
    And I should not see the text "Drupal 7 - Federated Search"
    And I should not see the text "Federated Search Domain 3"

  Scenario: Filter by site - D8 domain
    Given I visit "/search-app?search=terrier"
    And I wait for "1" second
    # When I expand the "Site Name" filter
    When I click the "#solr-list-facet-sm_site_name" element
    # When I select the "Federated Search Domain 3" filter
    And I check "Federated Search Domain 3"
    Then I should see the text "Federated Search Domain 3"
    And I should see the text "Norfolk Terrier"
    And I should see the text "Federated Search Drupal 8"
    And I should not see the text "Drupal 7 - Federated Search"
