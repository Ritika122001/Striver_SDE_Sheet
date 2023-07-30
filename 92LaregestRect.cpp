#include <bits/stdc++.h>

int solve(vector<int> &arr, int n) {

  int left = n - 1;

  int right = n + 1;

  int cnt = 1;

  while (left >= 0 && arr[n] <= arr[left]) {

    cnt++;

    left--;
  }

  while (right < arr.size() && arr[n] <= arr[right]) {

    cnt++;

    right++;
  }

  return cnt * arr[n];
}

int largestRectangle(vector<int> &heights) {
  // Write your code here.
  int ans = 0;

  for (int i = 0; i < heights.size(); i++) {

    ans = max(ans, solve(heights, i));
  }

  return ans;
}