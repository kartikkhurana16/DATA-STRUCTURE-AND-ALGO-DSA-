#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = nullptr;
        right = nullptr;
    }
};

class Codec {
public:

    // Serialize
    string serialize(TreeNode* root) {

    }

    // Deserialize
    TreeNode* deserialize(string data) {

    }
};

int main() {
    // Creating the tree
    //
    //         1
    //       /   \
    //      2     3
    //           / \
    //          4   5
    //
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);

    Codec obj;

    // Serialize
    string data = obj.serialize(root);

    cout << data << endl;

    // Deserialize
    TreeNode* newRoot = obj.deserialize(data);

    return 0;
}