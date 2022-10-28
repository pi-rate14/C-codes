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
    void markParents(TreeNode *root, unordered_map<TreeNode *, TreeNode *> &parent)
    {
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            TreeNode *node = q.front();
            q.pop();
            if (node->left)
            {
                parent[node->left] = node;
                q.push(node->left);
            }
            if (node->right)
            {
                parent[node->right] = node;
                q.push(node->right);
            }
        }
    }

public:
    vector<int> distanceK(TreeNode *root, TreeNode *target, int k)
    {
        vector<int> ans;

        unordered_map<TreeNode *, TreeNode *> parent;
        markParents(root, parent);

        unordered_map<TreeNode *, bool> vis;
        queue<TreeNode *> q;

        int currDis = 0;
        q.push(target);

        while (!q.empty())
        {

            if (currDis++ == k)
            {
                break;
            }
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                TreeNode *node = q.front();
                q.pop();

                vis[node] = true;

                if (node->left && vis[node->left] == false)
                {
                    q.push(node->left);
                    vis[node->left] = true;
                }
                if (node->right && vis[node->right] == false)
                {
                    q.push(node->right);
                    vis[node->right] = true;
                }
                if (parent[node] && vis[parent[node]] == false)
                {
                    q.push(parent[node]);
                    vis[parent[node]] = true;
                }
            }
        }

        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            ans.push_back(temp->val);
        }

        return ans;
    }
};