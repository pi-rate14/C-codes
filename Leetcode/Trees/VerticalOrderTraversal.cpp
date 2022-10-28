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

class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode *root) {
        queue<pair<TreeNode *, pair<int, int>>> nodeVertLevelQ; // node {vert, level}
        map<int, map<int, multiset<int>>> vertLevelNodeMap;     // verical : {level : nodes}

        nodeVertLevelQ.push({root, {0, 0}});

        while (!nodeVertLevelQ.empty()) {
            TreeNode *node = nodeVertLevelQ.front().first;
            int vertical = nodeVertLevelQ.front().second.first;
            int level = nodeVertLevelQ.front().second.second;

            nodeVertLevelQ.pop();

            vertLevelNodeMap[vertical][level].insert(node->val);

            if(node->left != NULL) {
                nodeVertLevelQ.push({node->left, {vertical-1, level+1}});
            }
            if(node->right != NULL) {
                nodeVertLevelQ.push({node->right, {vertical+1, level+1}});
            }
        }
        vector<vector<int>> vertOrderTrav;
        for(auto vertical:vertLevelNodeMap) {
            vector<int> col;
            for(auto nodeList : vertical.second) {
                col.insert(col.end(), nodeList.second.begin(), nodeList.second.end());
            }
            vertOrderTrav.push_back(col);
        }
        return vertOrderTrav;
    }
};