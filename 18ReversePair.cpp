#include <bits/stdc++.h> 
    void merge(vector<int>&arr,long long l, long long m, long long r , long long &cnt)
    {
         // Your code here
        
         vector<int>vec(r-l+1);
         long long i = l;
         long long j = m+1;
         long long k=0;
        
        int h = m+1;
        for(int c=l;c<=m;c++){
            while(h<=r && arr[c] > (1ll*2*arr[h])){
                h++;
            }
            cnt += (h-(m+1));
        }

         
         while(i<=m and j<=r)
         {
             
             if(arr[i] <= arr[j])
             {
                 vec[k] = arr[i];
                 k++;
                 i++;
             }
             
             else 
             {
                
                 vec[k] = arr[j]; 
                 k++;
                 j++;
             }
             
         }
         
         
         while(i<=m)
         { 
             vec[k] = arr[i];
                 k++;
                 i++;
             
         }
         
         while(j<=r)
         {
             
                 vec[k] = arr[j];
                 k++;
                 j++;
         }
       
         k=0;
         for(int i=l;i<=r;i++)
         {
             arr[i] = vec[k];
             k++;
         }
         
         
         
    }
    
    
      void mergeSort(vector<int>&arr, long long  l, long long r ,long long &cnt)
    {
        //code here
        
        
      
        if(l<r)
        {
             long long mid = l + (r-l)/2;
        
    mergeSort(arr,l,mid,cnt);
        mergeSort(arr,mid+1,r,cnt);
        merge(arr,l,mid,r,cnt);
        
        }
        
       
        
    }
	
int reversePairs(vector<int> &arr, int n){
	// Write your code here.	
	    long long cnt=0;
        
        mergeSort(arr,0,arr.size()-1,cnt);
        return cnt;
}