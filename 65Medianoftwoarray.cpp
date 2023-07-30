double median(vector<int>& a, vector<int>& b) {

    int m=a.size();

    int n=b.size();

    if(m>n) return median(b, a);

    int low=0;

    int high=m;

    int medianPos=((m+n)+1)/2;

    while(low<=high)

    {

        int ans1=low+high>>1;

        int ans2=medianPos-ans1;

        int l1=(ans1==0)? INT_MIN:a[ans1-1];

        int l2=(ans2==0)? INT_MIN:b[ans2-1];

        int r1=(ans1==m)? INT_MAX:a[ans1];

        int r2=(ans2==n)? INT_MAX:b[ans2];

        if(l1<=r2 && l2<=r1)

        {

            if((m+n)%2!=0)

            return max(l1, l2);

            else return (max(l1,l2)+min(r1,r2))/(2.0);

        }

        else if(l1>r2)

        high=ans1-1;

        else low=ans1+1;

    }

    return 0.0;

}



