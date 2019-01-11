@javascript
Feature: Drupal 8 search
  As a site visitor
  I want to search the Drupal 8 sites
  So that I can read recipes

  Scenario: Search for "pasta"
    Given I visit "/search-app?search=pasta"
    And I wait for "1" second
    Then I should see the text "Super easy vegetarian pasta bake"
    And I should see the text "Federated Search Demo (D8, single)"
