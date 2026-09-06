#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) {
        data = val;
        left = right = nullptr;
    }
};

vector<vector<TreeNode*>> bfs(TreeNode* root) {
    vector<vector<TreeNode*>>ans;
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        vector<TreeNode*>a;
        int n=q.size();
        
        for(int i=0;i<n;i++){
            TreeNode* temp=q.front();
            q.pop();
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
            a.push_back(temp);
        }
        ans.push_back(a);
    }
    return ans;
}

int main() {
    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    vector<vector<TreeNode*>>ans=bfs(root);

    for (int i=0;i<ans.size();i++) {
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]->data<<" ";
        }
        cout<<endl;
    }

    return 0;
}