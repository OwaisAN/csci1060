#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;


struct Node {
  string data;
  Node *next; //points to the next node in the queue
};

class Queue {
  public:
    Queue(); //constructor
    ~Queue(); //deconstructor
    bool isEmpty() {return (front == NULL);}; //Check if queue is 
    void Enqueue(string d); //pushes a node containing d
    void PriorityQueue(string d);// add data to the front of the queue
    string Dequeue(); //dequeue the front node off of the queue and return the string stored in the node
    string toString(); //save Queue contents to a string
  private:
    Node *front; //points to the front item in the queue
    Node *back; //points to the back itme in the queue
};

Queue::Queue() {
  front = NULL; //initialize to an empty queue            
}

Queue::~Queue() {
  while (!isEmpty()) {
    cout << "deleting node\n";
    Dequeue();
  }
}

void Queue::Enqueue(string d) {
    if (isEmpty()){
        Node *newfront = new Node;
        newfront->data = d;
        front = newfront;
        // cout << "front: " << front->data << endl; //testing purposes
    } 
    Node *newback = new Node;
    newback->data = d;
    newback->next = back; //points the new nodes next to the back of the queue
    back = newback; //makes the new node the back of the queue
    // cout << "back: " << back->data << endl; //testing purposes
    // cout << "backnext: " << back->next << endl; //testing purposes  
}

void Queue::PriorityQueue(string d) {
    //if list is empty
    if (isEmpty()) {
        front = new Node;
        front->data = d;
        front->next = NULL;
    } else {
    //If list is not empty
        Node *current = back;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new Node;
        current->next->data = d;
        current->next->next = NULL;
  }
}

string Queue::Dequeue() {
  if (isEmpty()) {
    cout << "ERROR: you can't Dequeue from an empty queue" << endl;
    exit(1);
  } else { 
    Node *current = back;
    while (current->next->next !=NULL) {
        current = current->next;
    }
    string value = front->data; //set aside current value of front
    current->next = NULL;
    current = front;
    return value; //return value of node that dequeued
  }
}

string Queue::toString() {
  string result = "(back) -> ";
  Node *current = back;
  while (current != NULL) {
    result += current->data + " -> ";
    current = current->next;
  }
  result += "NULL";
  return result;
}

int main() {
  Queue *q = new Queue();
  cout << q->toString() << endl;

  q->Enqueue("[Solo]");
  q->Enqueue("[R2D2]");
  q->Enqueue("[Yoda]");
  cout << q->toString() << endl;
  

  delete q;
  return 0;
}
