@javascript
Feature: Drupal 7 search
  As a site visitor
  I want to search the Drupal 7 sites
  So that I can content from other sites

  Scenario: Search for "terrier"
    Given I visit "/search-app?search=terrier"
    When I wait for "1" second
    Then I should see the text "English Terrier"
    And I should see the text "Drupal 7 - Federated Search"
    And I should see the text "Federated Search Domain 3"
