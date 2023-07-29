int singleNonDuplicate(vector<int>& arr)
{
	// Write your code here
	int l =0;

    int  h = arr.size()-1;

    while(l< h)

    {

         int mid = (l+ h)/2;

         if((mid%2==0 && arr[mid]==arr[mid+1])|| (mid%2==1 && arr[mid]==arr[mid-1]))

         {

              l = mid+1;

         }

         else

          h = mid;

    }

    return arr[l];


}