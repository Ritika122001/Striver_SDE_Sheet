#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.
    
    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
{

  if(first==NULL)
        {
            return second;
        }
        
        if(second==NULL) return first;

    Node<int> *head=NULL;

    // Node<int>*dummy = new Node<int>(0);
    // Node<int>* d = dummy;

    if(first->data <= second->data)
    {
        head = first;
        
        first  = first->next;
      
    }  

    else
    {
        head = second;
    
        second = second->next;
       
    }

    Node<int>* curr = head;


    while(first!=NULL && second!=NULL)
    {
        if(first->data <= second->data)
        {
            curr->next= first;
            first= first->next;
            curr = curr->next;
            // Node<int>* temp = new Node<int>(first->data);
            // d->next = temp;
            // first =first->next;
            
        }
        else
        {

            curr->next = second;
            second = second->next;
            curr = curr->next;
            // Node<int>* temp = new Node<int>(first->data);
            // d->next = second;
            // second = second->next;
        }

        // d = d->next;
    }

        if(first!=NULL)
        {
            curr->next =first;
        }
        else{
            curr->next=second;
        }
        
        
        return head;


//     if(first!=NULL)
//     {
//         d->next = first;
//     }

//     else
//     {
//         d->next = second;
//     }

// return dummy->next;
    // Write your code here.
}
