#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

struct Node
{
    int data;
    Node * next;

    Node(int d)
    {
        data= d;
        next = nullptr;
    }

};

class MyLinkedList
{
    public:
        int length;
        Node* head; // I should use Node* to avoid duplication and space
        Node* tail;
        MyLinkedList()
        {
            length = 0;
        }
        void Add_Node_to_link (Node* current_node ); //Node* is smart because you are saving memory
        void Delete_Node_from_link(void);
        void PrintList(void);

};

#endif // SINGLYLINKEDLIST_H
