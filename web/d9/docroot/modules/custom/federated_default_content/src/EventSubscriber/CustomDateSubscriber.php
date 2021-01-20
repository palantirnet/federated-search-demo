<?php

namespace Drupal\federated_default_content\EventSubscriber;

use Drupal\default_content\Event\DefaultContentEvents;
use Drupal\default_content\Event\ImportEvent;
use Symfony\Component\EventDispatcher\EventSubscriberInterface;

/**
 * Responds to default content import by re-setting the publication date.
 */
class CustomDateSubscriber implements EventSubscriberInterface {

  /**
   * {@inheritdoc}
   */
  public static function getSubscribedEvents() {
    return [
      DefaultContentEvents::IMPORT => 'setDate',
      DefaultContentEvents::UPDATE => 'setDate',
    ];
  }

  /**
   * Sets the published data of imported nodes.
   *
   * @param Drupal\default_content\Event\ImportEvent $event
   *   The import event.
   */
  public function setDate(ImportEvent $event) {
    foreach ($event->getImportedEntities() as $uuid => $entity) {
      if (method_exists($entity, 'setCreatedTime')) {
        $entity->setCreatedTime($this->createTime());
        $entity->save();
      }
    }
  }

  /**
   * Creates a random time within the past two weeks for an entity.
   */
  public function createTime() {
    $current = \Drupal::time()->getRequestTime();
    // Go back 14 days.
    $start = $current - (14 * 24 * 60 * 60);
    return rand($start, $current);
  }

}
