#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{

    LinkedListNode<int>*r;
    LinkedListNode<int> *q;
    LinkedListNode<int> *p = head;
    r=q = NULL;

    while(p!=NULL)
    {
        r = q;
        q = p;
        p=p->next;
        q->next = r;

    }
    head = q;
    return head;

    // Write your code here
}
