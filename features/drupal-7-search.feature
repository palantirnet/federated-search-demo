@javascript
Feature: Drupal 7 search
  As a site visitor
  I want to search the Drupal 7 sites
  So that I can content from other sites

  Scenario: Search for "ex"
    Given I visit "/search-app?search=ex"
    When I wait for "1" second
    Then I should see the text "Federated Search Demo (D7, domain one)"
    And I should see the text "Federated Search Demo (D7, single)"
