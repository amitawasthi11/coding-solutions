# Majority Element

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange) | [View on GeeksForGeeks](https://www.geeksforgeeks.org/problems/majority-element-1587115620/1)

## Problem

Given an array arr[]. Find the majority element in the array. If no majority element exists, return -1.

Note: A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

Examples:

Input: arr[] = [1, 1, 2, 1, 3, 5, 1]
Output: 1
Explanation: Since, 1 is present more than 7/2 times, so it is the majority element.

Input: arr[] = [7]
Output: 7
Explanation: Since, 7 is single element and present more than 1/2 times, so it is the majority element.
Input: arr[] = [2, 13]
Output: -1
Explanation: Since, no element is present more than 2/2 times, so there is no majority element.

Constraints:
1 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105

## Tags

`Expected Complexities` `Company Tags` `Topic Tags` `Related Interview Experiences` `Related Articles`

## Solution

```class solution {
  public:
    int majorityelement
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        
        unordered_map<int,int>mpp;
        for(auto p:arr){
            mpp[p]++;
        }
        int ans = -1;
        int freq = 0;
        if(arr.size() == 1)return arr[0];
        if(mpp.size() == arr.size())return -1;
        for(auto m : mpp){
            if(m.second > freq){
                ans = m.first;
                freq = m.second;
            }
        }
        if(freq > arr.size()/2)
        return ans;
        
        return -1;
    }
};
```

## Stats

| Metric | Value |
|--------|-------|
| Runtime |  |
| Memory |  |
| Solved At | Wed, 22 Jul 2026 05:02:58 GMT |
