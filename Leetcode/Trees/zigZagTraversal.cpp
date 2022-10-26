#include <bits/stdc++.h>
using namespace ::std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == NULL)
        {
            return result;
        }

        queue<TreeNode *> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty())
        {
            int n = q.size();
            vector<int> temp(n);

            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();
                int idx = leftToRight ? i : n - i - 1;
                temp[idx] = node->val;
                if (node->left)
                {
                    q.push(node->left);
                }

                if (node->right)
                {
                    q.push(node->right);
                }
            }

            result.push_back(temp);
            leftToRight = !leftToRight;
        }

        return result;
    }
};