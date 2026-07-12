# Construct Binary Tree from Inorder and Postorder Traversal

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange) | [View on LeetCode](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/)

## Problem

Given two integer arrays inorder and postorder where inorder is the inorder traversal of a binary tree and postorder is the postorder traversal of the same tree, construct and return the binary tree.

 
Example 1:

Input: inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]


Example 2:

Input: inorder = [-1], postorder = [-1]
Output: [-1]


 
Constraints:


	1 <= inorder.length <= 3000
	postorder.length == inorder.length
	-3000 <= inorder[i], postorder[i] <= 3000
	inorder and postorder consist of unique values.
	Each value of postorder also appears in inorder.
	inorder is guaranteed to be the inorder traversal of the tree.
	postorder is guaranteed to be the postorder traversal of the tree.

**Example 1:**
```
Input:  inorder = [9,3,15,20,7], postorder = [9,15,7,20,3]
Output: [3,9,20,null,null,15,7]
```

**Example 2:**
```
Input:  inorder = [-1], postorder = [-1]
Output: [-1]
```

## Constraints

1 <= inorder.length <= 3000
	postorder.length == inorder.length
	-3000 <= inorder[i], postorder[i] <= 3000
	inorder and postorder consist of unique values.
	Each value of postorder also appears in inorder.
	inorder is guaranteed to be the inorder traversal of the tree.
	postorder is guaranteed to be the postorder traversal of the tree.

## Tags

`Array` `Hash Table` `Divide and Conquer` `Tree` `Binary Tree`

## Solution

```c++
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
 
 TreeNode* traversal(vector<int>&inorder,vector<int>postorder,int start,int end,int &idx){
    if(start>end)return NULL;
    int rootval = postorder[idx];
    int i = start;
    for(;i<=end;i++){
        if(inorder[i] == rootval){
            break;
        }
    }
    idx--;
    TreeNode* root = new TreeNode(rootval);
   root->right =   traversal(inorder,postorder,i+1,end,idx);
   root->left =  traversal(inorder,postorder,start,i-1,idx);
  return root;
 }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n = postorder.size()-1;
        int idx = postorder.size()-1;
       return traversal(inorder,postorder,0,n,idx);
    }
};
```

## Stats

| Metric | Value |
|--------|-------|
| Runtime | 43 ms |
| Memory | 125.7 MB |
| Solved At | Sat, 11 Jul 2026 05:27:44 GMT |
