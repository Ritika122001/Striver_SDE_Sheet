#include <bits/stdc++.h> 
class Node{
	public:
		int h, l, r;

		Node(int h, int l, int r){
			this->h = h;
			this->l = l;
			this->r = r;
		}
};


int heightOfTheTree(vector<int>& inorder, vector<int>& levelOrder, int n){
	// Wrte your code here.
		int ans = 0;
	queue<Node> q;

	Node root(0, 0, n-1);
	q.push(root);

	unordered_map<int, int> mp;
	for(int i = 0; i < n; i++) mp[inorder[i]] = i;
	
	for(int i = 0; i < n; i++){
		Node temp = q.front();
		q.pop();

		ans = max(ans, temp.h);

		int l = temp.l, r = temp.r;
		int rootIndexOfSubTree = mp[levelOrder[i]];

		if(rootIndexOfSubTree - 1 >= l){
			Node lst(temp.h+1, l, rootIndexOfSubTree-1);
			q.push(lst1);
		}

		if(rootIndexOfSubTree + 1 <= r){
			Node rst(temp.h+1, rootIndexOfSubTree+1, r);
			q.push(rst);
		}

	}

	return ans;
}