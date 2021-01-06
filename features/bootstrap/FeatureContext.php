<?php

use Drupal\DrupalExtension\Context\RawDrupalContext;
use Behat\Behat\Context\SnippetAcceptingContext;

/**
 * Defines application features from the specific context.
 */
class FeatureContext extends RawDrupalContext implements SnippetAcceptingContext
{

    /**
     * Initializes context.
     *
     * Every scenario gets its own context instance.
     * You can also pass arbitrary arguments to the
     * context constructor through behat.yml.
     */
    public function __construct()
    {
    }

    /**
     * @When I wait for :arg1 second
     */
    public function iWaitForSecond($arg1)
    {
        sleep($arg1);
    }

    /**
     * @Given I click the :arg1 element
     *
     * See https://stackoverflow.com/questions/33649518/how-can-i-click-a-span-in-behat.
     */
    public function iClickTheElement($selector)
    {
        $page = $this->getSession()->getPage();
        $element = $page->find('css', $selector);

        if (empty($element)) {
            throw new Exception("No html element found for the selector ('$selector')");
        }

        $element->click();
    }

     /**
      * @BeforeStep
      *
      * Size the window so that all the elements are visible.
      */
    public function beforeStep()
    {
      if ($this->getSession()->isStarted()) {
        $this->getSession()->resizeWindow(1920, 1080, 'current');
      }
    }

}
