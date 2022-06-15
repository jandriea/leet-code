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
    // method 1 -> recursive
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            // stop guard
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
    // method 2 -> iteration
    int maxDepthIter(TreeNode* root) {
        if (root == nullptr) {
            // stop guard
            return 0;
        }
        int max_value = 0;
        vector<TreeNode*> v_node;
        vector<int> v_int;
        v_node.push_back(root);
        v_int.push_back(1);
        while (!v_node.empty()) {
            TreeNode* n = v_node.back();
            int depth = v_int.back();
            v_node.pop_back();
            v_int.pop_back();
            max_value = max(max_value, depth);

            if (n->left != nullptr) {
                v_node.push_back(n->left);
                v_int.push_back(depth + 1);
            }

            if (n->right != nullptr) {
                v_node.push_back(n->right);
                v_int.push_back(depth + 1);
            }
        }

        return max_value;
    }
};