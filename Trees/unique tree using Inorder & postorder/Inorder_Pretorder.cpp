#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};
void print(TreeNode* root){
    if(root==nullptr) return ;

    cout<<root->val;
    print(root->left);
    print(root->right);
}

TreeNode* build(vector<int>& preorder, int preStart, int preEnd,
                vector<int>& inorder, int inStart, int inEnd,
                unordered_map<int, int>& mp) {

            if(preStart > preEnd || inStart > inEnd)    return NULL;
            
            TreeNode* root=new TreeNode(preorder[preStart]);

            int n=mp[root->val];

            int numleft=n-inStart;

            root->left=build(preorder, preStart+1, preStart+numleft,
                           inorder, inStart,n-1, mp);
            root->right=build(preorder, preStart+numleft+1, preEnd,
                           inorder, n+1,inEnd, mp);

    
    return root;
}

int main() {
    int n;
    cin >> n;

    vector<int> preorder(n), inorder(n);

    for (int i = 0; i < n; i++)
        cin >> preorder[i];

    for (int i = 0; i < n; i++)
        cin >> inorder[i];

    unordered_map<int, int> mp;

    for(int i=0;i<n;i++){
        mp[inorder[i]]=i;
    }

    TreeNode* root = build(preorder, 0, n - 1,
                           inorder, 0, n - 1, mp);
    
    print(root);
    
    return 0;
}
// 3 9 20 15 7
// 9 3 15 20 7