// Stack class.
class Stack {

    int size ;
    int *arr;
    int ind;

    
public:
    
    Stack(int capacity) {
        size = capacity;
        arr = new int[size];
        ind = -1;
        // Write your code here.
    }

    void push(int num) {
        // Write your code here.
        if(ind!=size-1)
        {
            ind++;
            arr[ind] = num;
        }
    
    }

    int pop() {
        if(ind!=-1)
        {
            int x  =arr[ind];
            ind--;
            return x;
        }

        else
        {
            return -1;
        }
        // Write your code here.
    }
    
    int top() {
        // Write your code here.
        if(ind!=-1)
        {
            return arr[ind];
        }
        else{
            return -1;
        }
    }
    
    int isEmpty() {
        if(ind==-1)
        {
            return 1;
        }

        else
         return 0;

        // Write your code here.
    }
    
    int isFull() {

        if(ind==size-1) return 1;
        else 
         return 0;
        // Write your code here.
    }
    
};
