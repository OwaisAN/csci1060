#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

//Create a node struct to store
//one item of data in the Stack class
struct Node {
  string data;
  Node *next; //points to the next node in the 
};

class Stack {
  public:
    Stack(); //constructor
    ~Stack(); //deconstructor
    bool isEmpty() {return (front == NULL);}; //Check if stack is isEmpty
    void push(string d); //pushes a node containing d
                         //onto the top of the Stack
    void priorityqueue(string d);// add data to the front of the queue
    string pop(); //Pop the top node off of the stack
                  //and return the string stored in the node
    string toString(); //save Stack contents to a string
    void displayList();
  private:
    Node *front; //points to the front item in the queue
    Node *back; //points to the back itme in the queue
};

Stack::Stack() {
  front = NULL; //initialize to an empty Stack
              //(i.e. a Stack that has top point to nothing)
}

// Stack::~Stack() {
//   //Has to free up all of the memory allocated to nodes in the Stack
//   while (!isEmpty()) {
//     cout << "deleting node\n";
//     pop();
//   }
// }

void Stack::push(string d) {
    if (isEmpty()){
        Node *newfront = new Node;
        newfront->data = d;
        front = newfront;
        cout << "front: " << front->data << endl; //testing purposes

    } 
    Node *newback = new Node;
    newback->data = d;
    newback->next = back; //points the new node's next to the
                  //old top of the Stack
    back = newback; //makes the new node the top of the stack
    cout << "back: " << back->data << endl;
    cout << "backnext: " << back->next << endl;
    
}

void Stack::priorityqueue(string d) {
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
//     if (isEmpty()){
//         front = new Node;
//         front->data = d;
//         front->next = NULL;
//     } else {
//         //if list isnt empty
//         Node *newfront = new Node;
//         newfront->data = d;
//         newfront->next = front;
//         front = newfront;
//     } 
}

string Stack::pop() {
  if (isEmpty()) {
    cout << "ERROR: you can't pop from an empty stack!" << endl;
    exit(1);
  } else {
    
    Node *current = back;
    while (current->next->next !=NULL) {
        current = current->next;
    }
    string value = front->data; //set aside current value of top
    current->next = NULL;
    current = front;
    return value; //return value of popped node
  }
}

// string Stack::pop() {
//   if (isEmpty()) {
//     cout << "ERROR: you can't pop from an empty stack!" << endl;
//     exit(1);
//   } else {
//     string value = front->data; //set aside current value of top
//     Node *oldtop = front; //create oldtop to point to top
//     front = front->next; //reassign the top of the stack to the
//                      //second top element (i.e. one below the old top)
//     delete oldtop; //delete the node being popped
//     return value; //return value of popped node
//   }
// }

// void Stack::displayList() {
//   //display contents of linked list
//   cout << "head -> ";
//   if (isEmpty()) {
//     cout << "NULL" << endl;
//   } else {
//     Node *current = back;
//     while (current != NULL) {
//       cout << current->data << " -> ";
//       current = current->next;
//     }
//     cout << "NULL" << endl;
//   }
// }

string Stack::toString() {
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
  Stack *s = new Stack();
  cout << s->toString() << endl;

  s->push("Pear");
  s->push("Orange");
  s->push("Apple");
  s->push("Banana");
  s->priorityqueue("Pineapple");
  s->priorityqueue("kiwi");
  s->push("Strawberry");
  cout << s->toString() << endl;
 
  if (!s->isEmpty()) {
    s->pop();
  }
  cout << s->toString() << endl;
  s->pop();
  cout << s->toString() << endl;
  
//   delete s;
  return 0;
}