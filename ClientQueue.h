#ifndef CLIENTQUEUE_H
#define CLIENTQUEUE_H
#include <iostream>
#include "clients.h"

// Node to store an item in a linked-list-based queue
class QueueNode {
public:
   AllClientData data;
   QueueNode* next;
   
   QueueNode(const AllClientData& clientData, QueueNode* nextNode = nullptr) {
      data = clientData;
      next = nextNode;
   }
};
#endif