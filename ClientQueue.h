#ifndef CLIENTQUEUE_H
#define CLIENTQUEUE_H
#include <iostream>
#include "clients.h"

// Node to store an item in a linked-list-based queue
class QueueNode {
public:
   AllClientData data;
   QueueNode* next;
   
   QueueNode(int dataValue, QueueNode* nextNode = nullptr) {
      data = dataValue;
      next = nextNode;
   }
};
#endif