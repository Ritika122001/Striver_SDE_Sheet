#include <bits/stdc++.h> 
int findMinimumCoins(int amount) 
{
    // Write your code here
    vector<int>arr = {1,2,5,10,20,50,100,500,1000};

    int cnt=0;
    // int i=8;
    // while(amount && i>=0)
    // {
        
    //     if(amount<arr[i])
    //     {
    //         i--;
    //         continue;

    //     }

    //     else if(arr[i]<=amount)
    //     {
    //         amount-=arr[i];
    //         cnt++;
    //     }


    // }
    for(int i=arr.size()-1 ;i>=0;)
    {

        if(arr[i]<= amount)
        {
            // cout<<"BEFORE"<< amount;
            amount-=arr[i];
            // cout<<amount<<"";
            //  cout<<"AFTER"<< amount<<endl;
            cnt++;
        }

        else
        {
            i--;
            continue;
        }
    }

    return cnt;
}
