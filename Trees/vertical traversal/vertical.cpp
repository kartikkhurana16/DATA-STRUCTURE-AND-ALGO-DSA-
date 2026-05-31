#include<bits/stdc++.h>
using namespace std;
class TreeNode{
    public:
    int val;
    TreeNode*left;
    TreeNode*right;

    TreeNode(int data){
        val =data;
        left=right=nullptr;
    }
};

void vertical(TreeNode* root){
    map<int,map<int,multiset<int>>>mp;
    queue<pair<TreeNode*,pair<int,int>>>q;
    q.push({root,{0,0}});

    while(!q.empty()){
        auto temp=q.front();
        q.pop();

        auto node=temp.first;
        int x=temp.second.first;
        int y=temp.second.second;

        mp[x][y].insert(node->val);
        if(node->left){
            q.push({node->left,{x-1,y+1}});
        }
        if(node->right){
            q.push({node->right,{x+1,y+1}});
        }
    }
    vector<vector<int>>ans;
    for(auto p: mp){
        vector<int>res;
        for(auto q: p.second){
            res.insert(res.end(),q.second.begin(),q.second.end());
        }
        ans.push_back(res);
    }


    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;

    }
}
int main(){

     // Constructing the tree:
    //
    //          1
    //        /   \
    //       2     3
    //      / \   / \
    //     4   5 6   7
    //        /     /
    //       8     9
    //

    TreeNode* root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);

    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    root->left->right->left = new TreeNode(8);
    root->right->right->left = new TreeNode(9);

    vertical(root);

    return 0;
}

