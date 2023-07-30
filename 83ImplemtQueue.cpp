#include <bits/stdc++.h> 
class Queue {
public:
int *arr;

int size;

int qfrnt;

int rear;

 
    Queue() {
        // Implement the Constructor
         size=100001;

        arr=new int[size];

        qfrnt=0;

        rear=0;

 
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
                if(qfrnt==rear){

            return true;

        }

        else{

            return false;

        }

 
    }

    void enqueue(int data) {
        // Implement the enqueue() function
          if(rear==size){

            cout<<"Queue is Full"<<endl;

 

        }

        else{

            arr[rear]=data;

            rear++;

        }
    }

    int dequeue() {
        // Implement the dequeue() function
          if(qfrnt==rear){

            return -1;

        }

     else{

            int ans=arr[qfrnt];

            arr[qfrnt]=-1;

            qfrnt++;

            if(qfrnt==rear){

                qfrnt=0;

                rear=0;

            }

            return ans;

 

        }
    }

    int front() {
        // Implement the qfrnt() functqfrntion
          if(qfrnt==rear){

            return -1;

        }

       else{

           return arr[qfrnt];

       }
    }
};