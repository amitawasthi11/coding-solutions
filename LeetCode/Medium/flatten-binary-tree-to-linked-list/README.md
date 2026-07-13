# Flatten Binary Tree to Linked List

![Medium](https://img.shields.io/badge/Difficulty-Medium-orange) | [View on LeetCode](https://leetcode.com/problems/flatten-binary-tree-to-linked-list/)

## Problem

Given the root of a binary tree, flatten the tree into a "linked list":


	The "linked list" should use the same TreeNode class where the right child pointer points to the next node in the list and the left child pointer is always null.
	The "linked list" should be in the same order as a pre-order traversal of the binary tree.


 
Example 1:

Input: root = [1,2,5,3,4,null,6]
Output: [1,null,2,null,3,null,4,null,5,null,6]


Example 2:

Input: root = []
Output: []


Example 3:

Input: root = [0]
Output: [0]


 
Constraints:


	The number of nodes in the tree is in the range [0, 2000].
	-100 <= Node.val <= 100


 
Follow up: Can you flatten the tree in-place (with O(1) extra space)?

**Example 1:**
```
Input:  root = [1,2,5,3,4,null,6]
Output: [1,null,2,null,3,null,4,null,5,null,6]
```

**Example 2:**
```
Input:  root = []
Output: []
```

**Example 3:**
```
Input:  root = [0]
Output: [0]
```

## Constraints

The number of nodes in the tree is in the range [0, 2000].
	-100 <= Node.val <= 100

## Tags

`Linked List` `Stack` `Tree` `Depth-First Search` `Binary Tree`

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
    void flatten(TreeNode* root) {
        TreeNode* current = root;
        while(current!= NULL){
            if(current->left){
                TreeNode* pred = current->left;
                while(pred->right){
                    pred = pred->right;
                }
               
              pred->right = current->right;
                current->right = current->left;
                current->left = NULL;  
            }
           current = current->right;
        }
        }

    
};
```

## Stats

| Metric | Value |
|--------|-------|
| Runtime | 0 ms |
| Memory | 17.6 MB |
| Solved At | Mon, 13 Jul 2026 05:42:58 GMT |
