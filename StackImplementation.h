#ifndef STACKIMPLEMENTATION_H
#define STACKIMPLEMENTATION_H

#include "SinglyLinkedList.h"

class StackImplementation
{
    public:
    // Variables associated with Stack Implementation
        MyLinkedList ListObject ;
        Node* Top;


    // Methods associated with Stack Operation
        void Push (Node* );
        Node* Peek();
        Node* Pop();
        StackImplementation();

    protected:

    private:
};

#endif // STACKIMPLEMENTATION_H
