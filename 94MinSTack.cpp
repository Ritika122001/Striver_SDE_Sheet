#include <bits/stdc++.h> 
// Implement class for minStack.
class minStack
{
	stack<int>minst;
    int minele;
	// Write your code here.
  	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write  your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
	    long long val=num; 
        
        if(minst.empty())
        {
            minst.push(val);
            minele= val;
        }
        
        else{
            
            
            if(minele<val)
            {
                minst.push(val);
            }
            
            else{
               minst.push(2*val - minele);
               minele=val;
            }
            
        }

		}
		
		// Function to remove the top element of the stack.
		int pop()
		{

		    if(minst.empty())
			{
				return -1;
			}
			
			if(minele>minst.top())           
			 {            
				     long long x=minele;
			         minele=2*minele -minst.top();
				    minst.pop();                
					return x;            
			}            
			long long z= minst.top();                
			minst.pop();            
			return z;

			
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
			if(minst.empty())
			{
				return -1;
			}
            
			if (minst.top() < minele) 
			{
             		return minele;
            }

			else            
		    	return minst.top();
        }

                // Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
		    	if(minst.empty())
				{
					return -1;
				}
				else	
					return minele;
		}
};
