1. Queue Implementation: The purpose of it is to store recently added clients and create a follow up queue list.
   Queue is defined in Queue.h and Queue.cpp.
   The Queue class contains QueueNode, which stores a pointer to a AllClientData object.
   An object of the Queue class is declared in the Clients class as a private memmber (followupQueue)
   
3. Enqueue operation: The purpose of it is to add recently added client to followupQueue.
   Enqueue() is defined in Queue.cpp and called using enqueueClient(from the Clients class) defined in client.cpp.
   Enqueue() adds a node to the end of the linked list.
   
5. Dequeue operation: The purpose of it is to remove the client at the front of followupQueue.
   Dequeue() is defined in Queue.cpp and called using dequeueClient(from Clients Class) defined in client.cpp.
   Dequeue() updates the front pointer and deletes the node.
   
7. Display operation: The purpose of it is to display clients in followupQueue
   PrintQueueClients() is defined in Queue.cpp and called using printQueue(from Clients Class) defined in client.cpp.
   PrintQueueClients() traverses the linked list and prints each client 0(n).
   
9. Menu options for stack or queue management: (Includes options to add, remove, and display items in the queue.)
   in main() options 8,9,10.
   Uses Clients methods enqueueClient(), dequeueClient(), and printQueue() to call Enqueue(), Dequeue(), and PrintQueueClients().
   
11. Integration with previous functionalities: (UI seamlessly integrates stack or queue management with sorting, linked list, and other features.)
    The queue uses this same client object clientFile as addClient() and stores a pointer to (AllClientData*)
  
