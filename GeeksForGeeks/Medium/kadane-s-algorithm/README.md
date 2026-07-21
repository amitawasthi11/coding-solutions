# Kadane's Algorithm

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange) | [View on GeeksForGeeks](https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1)

## Problem

You are given an integer array arr[]. You need to find the maximum sum of a subarray (containing at least one element) in the array arr[].

Examples:

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.

Input: arr[] = [-2, -4]
Output: -2
Explanation: The subarray [-2] has the largest sum -2.
Input: arr[] = [5, 4, 1, 7, 8]
Output: 25
Explanation: The subarray [5, 4, 1, 7, 8] has the largest sum 25.

Constraints:
1 ≤ arr.size() ≤ 105
-104 ≤ arr[i] ≤ 104

## Tags

`Expected Complexities` `Company Tags` `Topic Tags` `Related Interview Experiences` `Related Articles`

## Solution

```cpp
class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int sum = 0;
        int ans = INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            ans = max(ans,sum);
            if(sum<0)sum = 0;
        }
        return ans;
        
    }
};
```

## Stats

| Metric | Value |
|--------|-------|
| Runtime |  |
| Memory |  |
| Solved At | Tue, 21 Jul 2026 07:48:49 GMT |
