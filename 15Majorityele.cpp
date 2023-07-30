#include <bits/stdc++.h>

int findMajorityElement(int arr[], int n) {
	// Write your code here.

	int maj = arr[0];
	int cnt = 1;
	for(int i=1;i<n;i++)
	{
		if(arr[i] == maj)
		{
			cnt++;
		}

		else if(cnt==0)
		{
				maj  =arr[i];
				cnt=1;

		}

		else
		{
			cnt--;
		}
	}


 cnt=0;
	 for(int i=0;i<n;i++)
    {
        if(arr[i]==maj)
        {
            cnt++;
        }
    }
    
    if(cnt >n/2)
    {
        return maj;
    }
    return  -1;
        


}
