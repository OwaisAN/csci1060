#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct Node {
  int data;
  Node *next;
};

class Stack {
  public:
    Stack();
    ~Stack();
    void push(int d);
    int pop();
    bool isEmpty() {return (top == NULL);};
    friend ostream& operator<<(ostream& os, Stack &s);
  private:
    Node *top;
};

Stack::Stack() {
  top = NULL;
}

Stack::~Stack() {
  while (!isEmpty()) {
      cout << "deleting node\n";
      pop();
  }
}

void Stack::push(int d) {
  Node *newtop = new Node;
  newtop->data = d;
  newtop->next = top;
  top = newtop;
}

int Stack::pop() {
  if (!isEmpty()) {
    int value = top->data;
    Node *oldtop = top;
    top = top->next;
    delete oldtop;
    return value;
  } else {
      cout << "ERROR: Stack is empty!\n";
      exit(1);
  }
}


ostream& operator<<(ostream& os, Stack &s) {
  if (s.isEmpty()) {
      os << "<empty_stack>" << endl;
  } else {
      string result = "";
      Node *current = s.top;
      while (current!=NULL) {
        //   result += to_string(current->data) + " -> ";
        os << to_string(current->data) << " -> ";
          current = current->next;
      } 
  }
  return os;
}


int main() {
  Stack *s = new Stack();
  cout<< *s << endl;
  s->push(5);
  cout<< *s << endl;
  s->push(3);
  cout<< *s << endl;
  while (!s->isEmpty()) {
    cout << "Stack content popped: " << s->pop() << endl;
  }
  cout<< *s << endl;
  delete s;
  return 0;
}