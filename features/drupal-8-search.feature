@javascript
Feature: Drupal 8 search
  As a site visitor
  I want to search the Drupal 8 sites
  So that I can read recipes

  Scenario: Search for "terrier"
    Given I visit "/search-app?search=terrier"
    And I wait for "1" second
    Then I should see the text "Jack Russell Terrier"
    And I should see the text "Federated Search Drupal 8"
