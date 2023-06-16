#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int l=0;
   int mid =0;
   int h = n-1;

   while(mid<=h)
   {

      if(arr[mid]==0)
      {
         swap(arr[mid] , arr[l]);
         mid++;
         l++;
      }

      else if(arr[mid]==1)
      {
         mid++;
      }

     else if(arr[mid]==2)
      {
         swap(arr[mid] , arr[h]);
         h--;
      }

   }

   //   Write your code here
}
