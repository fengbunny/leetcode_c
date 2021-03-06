/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    	if(!root) return nullptr;
    	if(p == root || q == root || (p -> val > root -> val) != (q -> val > root -> val)) 
    	    return root;
        else
        	return lowestCommonAncestor((p-> val > root -> val? root -> right: root -> left), p, q);
    }
};