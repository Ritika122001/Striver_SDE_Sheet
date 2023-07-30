/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

bool detectCycle(Node *head)
{
	//	Write your code here
      if(head==NULL || head->next==NULL) return false;

 

    Node* fast=head, *slow=head;

 

    while(fast!=NULL && slow!=NULL){

 

        fast=fast->next;

        if(fast!=NULL) fast=fast->next;

        slow=slow->next;

 

        if(fast==slow) return true;

    }

    return false;
    
}
