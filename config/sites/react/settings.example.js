/**
 * @file
 * Provides a configuration object for local testing of the compiled search app.
 *
 * Required settings
 * - The flag indicating if you are using the proxy as the query url.
 * - The solr query url.
 *
 * Optional settings
 * - The optional settings illustrate the default values, which are hard
 *   coded into the app.  You only need to populate them in this file to change
 *   them from what you see below.
 *
 * If you set autocomplete to a configuration object, there are some required items in that object noted below.
 */
const config = {
  // REQUIRED (for Drupal 7): Flag set to indicate a Drupal 7 site (proxy requests use "search" vs "q")
  isD7: false, // Defaults to FALSE
  // REQUIRED: Whether or not the url provided is the solr proxy (default: FALSE, uses the proxy)
  proxyIsDisabled: true,
  // REQUIRED: The url to where the query request should be made.
  //    If using the Federated Search Demo site with the proxy, use:
  //        http://d8.fs-demo.local/search-api-federated-solr/search
  //    If not using the proxy, the proxy, set to your solr backend, use:
  //        <host>:<port>/<path>/<core>/<requestHandler>
  //        i.e. `http://example.local:8983/solr/drupal8/select`
  url: "http://d8.fs-demo.local:8983/solr/drupal8/select",
  // OPTIONAL: If the solr backend requires Basic Authentication, uncomment below and enter the username and password
  // in the btoa function as specified below. This should ONLY allow READ access, as it will be accessible client-side.
  // userpass: btoa("username:password"),
  // OPTIONAL: The text to display when a search returns no results.
  noResults: "Sorry, your search yielded no results.",
  // OPTIONAL: Whether or not to display all results on empty search.
  showEmptySearchResults: true,
  // OPTIONAL: The text to display when the app loads with no search term.
  searchPrompt: "Please enter a search term.",
  // OPTIONAL: The number of search results to show per page.
  rows: 20,
  // OPTIONAL: The number of page buttons to show for pagination.
  paginationButtons: 5,
  // OPTIONAL: The title of the search results page (null to hide).
  pageTitle: 'Search',
  // OPTIONAL: The hostname to emulate when testing.
  //hostname: "example.local",
  // OPTIONAL: Machine name of those search fields whose facets/filter and current values should be hidden in UI.
  // Note: if their values are pre-set (i.e. sent in qs to app), they will still be sent in the query.
  // hiddenSearchFields: [ // Defaults to [];
  //   'sm_site_name',
  //   'ss_federated_type',
  //   'ds_federated_date',
  //   'sm_federated_terms',
  // ],
  // OPTIONAL: Provides default values for sm_site_name. No default set.
  // sm_site_name: [
  //   'Some site name',
  //   'Some other site name'
  // ],
  // OPTIONAL: Provides config for adding autocomplete functionality to text search, defaults to false
  // autocomplete : {
  //   proxyIsDisabled: FALSE, // REQUIRED: whether or not your url is set to the query solr directly (defaults to false),
  //   url: <your-endpoint-for-autocomplete-results>, // REQUIRED: using the proxy is recommended but can also be set to a Drupal search view REST export, or if necessary, a Solr backend
  //   appendWildcard: false, // OPTIONAL: defaults to false, whether or not to append wildcard to query term
  //   suggestionRows: 5, // OPTIONAL: defaults to 5
  //   numChars: 2, // OPTIONAL: defaults to 2, number of characters *after* which autocomplete results should appear
  //   mode: 'result', // REQUIRED: show search-as-you-type results ('result', default) or search term ('term') suggestions
  //   result: { // OPTIONAL: define result based autocomplete-specific config
  //     titleText: 'What are you interested in?', // OPTIONAL: default set
  //     showDirectionsText: true, // OPTIONAL: defaults to true
  //   },
  //   term: { // OPTIONAL: define term based autocomplete-specific config
  //     titleText: 'What would you like to search for?', // OPTIONAL: default set
  //     showDirectionsText: true, // OPTIONAL: defaults to true
  //   },
  // },
};
const div = document.getElementById('root');
div.setAttribute('data-federated-search-app-config', JSON.stringify(config));
