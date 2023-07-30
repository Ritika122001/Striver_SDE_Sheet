#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	 vector<int> u;
        vector<int> v;

	for(int i=0;i<matrix.size();i++)
	{
		for(int j=0;j<matrix[0].size();j++)
		{
			if(matrix[i][j]==0)
			{
				u.push_back(i);
				v.push_back(j);
			}
		}
	}

	for(int i=0;i<u.size();i++)
	{
          for (int j = 0; j < matrix[0].size(); j++) 
		  {

			   matrix[u[i]][j]=0;
			  

          }
        }


	for(int i=0;i<v.size();i++)
	{
          for (int j = 0; j < matrix.size(); j++) 
		  {

                 matrix[j][v[i]]=0;

          }
        }


}
