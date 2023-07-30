#include<bits/stdc++.h>
string reverseString(string &str){
	// Write your code here.
	stack<string>st;

   
	for(int i=0;i<str.length();i++)
	{
		if(str[i]==' ')
		{
			continue;
		}
		 string res="";
		while(i < str.length() && str[i]!=' ')
		{
			res.push_back(str[i]);
			i++;
		}

		st.push(res);

	}


  string ans;
	while(!st.empty())
	{
		string t = st.top();
		 t+=" ";
	     ans+=t;
		st.pop();
		        if(!st.empty()) 

            {

                ans += ' ';

            }


	}	

	return ans;
}	
