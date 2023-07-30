  vector<int>ans;

    for(int i =0;i<arr.size();i++) {

        int key = arr[i];

        int j =i-1;

        

        while(j >=0 && arr[j] > key){

            arr[j+1] = arr[j];

            j = j-1;

        }

        arr[j+1] = key;

 

        int size = 1+i;

        if(size%2 == 0){

            ans.push_back(0.5*(arr[(size-1)/2]+arr[(size+1)/2]));

        }

        else{

            ans.push_back(arr[size/2]);}

        }

        return ans;