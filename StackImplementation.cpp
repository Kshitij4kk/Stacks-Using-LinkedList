#include "StackImplementation.h"
#include<iostream>
using namespace std;
StackImplementation::StackImplementation()
{
    cout<<"Stack object created\n";
}

void StackImplementation :: Push(Node* MyNode)
{
    cout<<"Pushing node on stack\n";
    //Adding passed node to list
    this->ListObject.Add_Node_to_link(MyNode);
    //Update Top variable
    this->Top = this->ListObject.tail ;

    this->ListObject.PrintList();
}

Node* StackImplementation :: Peek()
{
    cout<<"Looking at the top of stack \n";
    return this->Top;
}

Node* StackImplementation::Pop()
{
    cout<<"Removing top node from stack\n";
    Node* temp = this->Top ;
    this->ListObject.Delete_Node_from_link();

    this->Top = this->ListObject.tail ;

    return temp;
}
