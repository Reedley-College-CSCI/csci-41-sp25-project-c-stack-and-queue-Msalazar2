#ifndef CLIENTQUEUE_H
#define CLIENTQUEUE_H
#include <iostream>
#include "clients.h"

using namespace std;

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

class Queue {
    private:
       QueueNode* front;
       QueueNode* end;
    
    public:
       Queue() {
          front = nullptr;
          end = nullptr;
       }

    void Enqueue(const AllClientData& newClient) {
        QueueNode* newNode;
        newNode = new QueueNode(newClient);
        if (nullptr == front) {
           front = newNode;
        }
        else {
           end->next = newNode;
        }
        end = newNode;
     }
     
     bool Dequeue() {
        if (front == nullptr) {
            return false;
         }
         QueueNode* nodeToDelete = front;
         front = front->next;
     
        if (front == nullptr) {
           end = nullptr;
        }
        
        delete nodeToDelete;
        return true;
     }

     //adding a method to display the queue. using logic from printdeletedclients().
     void PrintQueueClients() const {
        QueueNode* current = front;

        if (front) {
            cout << "Queue is Empty" << endl;
            return;
        }
    
        while (current) {
            current->data.print();
            current = current->next;
        }
    }
};
#endif