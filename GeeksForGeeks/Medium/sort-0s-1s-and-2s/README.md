# Sort 0s, 1s and 2s

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange) | [View on GeeksForGeeks](https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1)

## Problem

Given an array arr[] containing only 0s, 1s, and 2s. Sort the array in ascending order.
Note: You need to solve this problem without utilizing the built-in sort function.

Examples:

Input: arr[] = [0, 1, 2, 0, 1, 2]
Output: [0, 0, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.
Input: arr[] = [0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1]
Output: [0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 2, 2]
Explanation: 0s, 1s and 2s are segregated into ascending order.

Follow up: Could you come up with a one-pass algorithm using only constant extra space?

Constraints:
1 ≤ arr.size() ≤ 105
0 ≤ arr[i] ≤ 2

## Tags

`Expected Complexities` `Company Tags` `Topic Tags` `Related Interview Experiences` `Related Articles`

## Solution

```class solution {
public:
    // helper function to print the array
class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
       int low = 0;
       int high = arr.size()-1;
       int mid = 0;
       while(mid<=high){
           if(arr[mid] == 0){
               swap(arr[mid],arr[low]);
               low++;
               mid++;
           }else if(arr[mid] == 1){
               mid++;
           }else{
               swap(arr[mid],arr[high]);
               high--;
           }
       }
       
    }
};
```

## Stats

| Metric | Value |
|--------|-------|
| Runtime |  |
| Memory |  |
| Solved At | Wed, 22 Jul 2026 07:50:10 GMT |
