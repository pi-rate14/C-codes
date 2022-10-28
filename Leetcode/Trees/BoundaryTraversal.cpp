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

	void leftNodes(TreeNode *root, vector<int> &res)
	{
		TreeNode *cur = root->left;
		while (cur != NULL)
		{
			if (!isLeaf(cur))
			{
				res.push_back(cur->val);
			}
			if (cur->left != NULL)
			{
				cur = cur->left;
			}
			else
			{
				cur = cur->right;
			}
		}
	}

	void rightNodes(TreeNode *root, vector<int> &res)
	{
		vector<int> temp;
		TreeNode *cur = root->right;
		while (cur)
		{
			if (!isLeaf(cur))
			{
				temp.push_back(cur->val);
			}

			if (cur->right)
			{
				cur = cur->right;
			}
			else
			{
				cur = cur->left;
			}
		}

		int n = temp.size();
		for (int i = n - 1; i >= 0; i--)
		{
			res.push_back(temp[i]);
		}
	}

	void leafNodes(TreeNode *root, vector<int> &res)
	{
		if (isLeaf(root))
		{
			res.push_back(root->val);
		}

		if (root->left)
		{
			leafNodes(root->left, res);
		}
		if (root->right)
		{
			leafNodes(root->right, res);
		}
	}

	bool isLeaf(TreeNode *root)
	{
		return (root->left == NULL) && (root->right == NULL);
	}

public:
	vector<int> boundaryOfBinaryTree(TreeNode *root)
	{
		vector<int> res;
		if (root == NULL)
		{
			return res;
		}

		if (!isLeaf(root))
		{
			res.push_back(root->val);
		}

		leftNodes(root, res);
		leafNodes(root, res);
		rightNodes(root, res);
		return res;
	}
};