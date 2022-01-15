#include<iostream>
#include<vector>
using namespace std;


struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x):val(x),left(NULL),right(NULL){}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
       // return isSymmetric(root,root);
       if(!root){
            return true;
       }
       return dfs(root->left,root->right);
    }

    bool isSymmetric(TreeNode* root1, TreeNode* root2){
        if(root1 == nullptr && root2 == nullptr){
            return true;
        }
        if(root1 == nullptr || root2 == nullptr){
            return false;
        }

        if(root1->val != root2->val){
            return false;
        }

        return isSymmetric(root1->left,root2->right) && (root1->right,root2->left);
    }

    bool dfs(TreeNode* p, TreeNode* q){
        if(!q || !p){
            return !p && !q;
        }
        if(p->val != q->val){
            return false;
        }
        return dfs(p->left,q->right) && dfs(p->right,q->left);
    }
};