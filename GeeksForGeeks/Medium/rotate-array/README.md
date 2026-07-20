# Rotate Array

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange) | [View on GeeksForGeeks](https://www.geeksforgeeks.org/problems/rotate-array-by-n-elements-1587115621/1)

## Problem

Given an array arr[]. Rotate the array to the left (counter-clockwise direction) by d steps, where d is a positive integer. Do the mentioned change in the array in place.

Note: Consider the array as circular.

Examples :


Input: arr[] = [1, 2, 3, 4, 5], d = 2
Output: [3, 4, 5, 1, 2]
Explanation: when rotated by 2 elements, it becomes [3, 4, 5, 1, 2].
Input: arr[] = [2, 4, 6, 8, 10, 12, 14, 16, 18, 20], d = 3
Output: [8, 10, 12, 14, 16, 18, 20, 2, 4, 6]
Explanation: when rotated by 3 elements, it becomes [8, 10, 12, 14, 16, 18, 20, 2, 4, 6].

Input: arr[] = [7, 3, 9, 1], d = 9
Output: [3, 9, 1, 7]
Explanation: when we rotate 9 times, we'll get [3, 9, 1, 7] as resultant array.

Constraints:
1 ≤  arr.size(), d ≤  105
0 ≤  arr[i] ≤  105

## Tags

`Expected Complexities` `Company Tags` `Topic Tags` `Related Interview Experiences` `Related Articles`

## Solution

```cpp
class Solution {
  public:
    void rotateArr(vector<int>& arr, int d) {
          int n = arr.size();
        d %= n;
        reverse(arr.begin(),arr.begin()+d);
        reverse(arr.begin()+d,arr.end());
        reverse(arr.begin(),arr.end());
        
    }
};
```

## Stats

| Metric | Value |
|--------|-------|
| Runtime |  |
| Memory |  |
| Solved At | Mon, 20 Jul 2026 15:14:25 GMT |
