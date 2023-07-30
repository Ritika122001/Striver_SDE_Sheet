int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int c=1;

    for(int i=n-2;i>=0;i--){

        if(arr[i]!=arr[i+1]) c++;

    }

    return c;
}
