#include "bits/stdc++.h"
using namespace std;

/*

Binary Tree Introduction

Properties of Binary Trees
1. Maximum nodes at level L = 2 ^ L
    L = 0, nodes = 1
    L = 1, nodes = 2
    L = 2, nodes = 4

2. Maximum nodes in a tree of height H is 2 ^ H - 1
    H = 3, 1 + 2 + 4 = 7 = 2 ^ 3 - 1

3. For N nodes, minimum possible height or minimum number of levels are log2(N + 1)

4. A binary tree with L leaves has at least log2(N + 1) + 1 number of levels


  1
 / \
2   3
*/

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int main()
{

    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

/*

    1
   / \
  2   3
 / \
4   5

*/

    return 0;
}