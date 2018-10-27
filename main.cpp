#include <iostream>
#include "StackImplementation.h"

using namespace std;

int main()
{
    cout << "Program Started" << endl;

    StackImplementation MyStack;
    Node* Node1 = new Node(1);
    Node* Node2 = new Node(3);
    Node* Node3 = new Node(5);
    Node* Node4 = new Node(7);

    MyStack.Push(Node1);
    MyStack.Push(Node2);
    MyStack.Push(Node3);
    MyStack.Push(Node4);

    Node* temp = MyStack.Peek();
    cout<<" The data in top of stack is : "<<temp->data <<"\n";

    temp = MyStack.Pop();
    cout<<"Popped out node data : "<<temp->data<<endl;
    cout<<" The data in top of stack is : "<<MyStack.Top->data <<"\n";

    delete Node1;
    delete Node2;
    delete Node3;
    delete Node4;

    return 0;
}
