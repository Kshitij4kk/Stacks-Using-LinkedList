#include"SinglyLinkedList.h"
#include <iostream>

using namespace std ;

void MyLinkedList :: Add_Node_to_link ( Node* current_node)
{
    if(this->length == 0)
    {
        this->head = current_node;
        this->tail = current_node;
    }
    else
    {
     this->tail->next = current_node;
     this->tail = current_node;
    }

this->length++;

}
void MyLinkedList ::Delete_Node_from_link(void)
{
    Node* temp;
    temp = this->head;

    while(temp->next != this->tail)
        temp = temp->next;

    temp->next = nullptr;

    //Updating the tail node

    this->tail = temp;

    this->length--;
}

void MyLinkedList :: PrintList(void)
{
    Node * temp;
    temp = this->head;
    do
    {
        cout<<" "<<temp->data;
        temp = temp->next;

    }while(temp != nullptr);
    cout<<"\n Length of List : "<<this->length<<endl;
}
