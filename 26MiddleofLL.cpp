/*
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
*/

Node *findMiddle(Node *head) {
    // Write your code here
        Node *p=head;
    int cnt=0;
    while(p)
    {
        cnt++;
        p=p->next;
    }
    p=head;
    for(int i=0;i<cnt/2;i++) 
p=p->next;
    
    return p;

}

