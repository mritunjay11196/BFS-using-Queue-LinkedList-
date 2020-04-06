#ifndef queueUsingLinkedList_h
#define queueUsingLinkedList_h

#include <iostream>

struct Node
{
    int data;
    Node* next;
}*front = nullptr, *rear = nullptr;

void enqueue(int val)
{
    Node* temp = new Node;
    
    if(temp == nullptr)
        std::cout<<"Queue is full\n";
    else
    {
        temp->data = val;
        temp->next = nullptr;
        if(front == nullptr)
            front = rear = temp;
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
}

int dequeue()
{
    int x = -1;
    Node* t;
    if(front == nullptr)
        std::cout<<"Queue is empty\n";
    else
    {
        x = front->data;
        t = front;
        front = front->next;
        delete t;
    }
    return x;
}

int isEmpty()
{
    return front == nullptr;
}
#endif
