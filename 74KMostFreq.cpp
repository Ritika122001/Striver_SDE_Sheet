vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
       unordered_map<int,int>mp;

    priority_queue<pair<int,int>> pq;  

    vector<int> res;

    for(int i = 0;i<n;i++)

    {

        mp[arr[i]]++;

    }

    for(auto it: mp)

    {

        pq.push({it.second,it.first});

    }

 

    int i = 1;

    while(!pq.empty())

    {

        if(i<=k)

        {

            int ele = pq.top().second;  

            pq.pop();

            res.push_back(ele);

            i++;

            

        }

        else

        {

            break;

        }

 

    }

return res;




}