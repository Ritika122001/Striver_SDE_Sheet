 #include<vector>
 long solve(int amount, int *deno,int n, vector<vector<long>>&memo)
    {
        if(n<=0) return 0;
        if(amount==0) return 1;

        if(memo[n][amount]!=-1)
        {return memo[n][amount]; 
        }
        
        if(deno[n-1]<=amount)
        {
              return memo[n][amount] = solve(amount-deno[n-1] ,deno,n,memo) + solve(amount,deno,n-1,memo);
        }
        else
            return memo[n][amount] = solve(amount,deno,n-1,memo);

    }

long countWaysToMakeChange(int *deno, int n, int value)
{
    //Write your code here
    vector<vector<long>>memo(n+1, vector<long>(value + 1, -1));


return solve(value,deno,n,memo);

}
