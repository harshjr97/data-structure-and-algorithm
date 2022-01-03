#include <iostream>
#include <bits/stdc++.h>


using namespace std;

struct Node
{
    int key;
    Node *left, *right;
    Node(int x)
    {
        key = x;
        left = NULL;
        right = NULL;
    }
}typedef Node;

bool searchbst(Node *, int);
bool iter_searchbst(Node *, int);
Node *insertbst(Node *, int);
Node *iter_insertbst(Node *, int);
void levelorder(Node *);
void inorder(Node *);
Node *getsuccessor(Node *);
Node *deletebst(Node *, int);
Node *floorbst(Node *, int);
Node *ceilbst(Node *, int);

int main()
{

    Node *root = new Node(50);
    insertbst(root, 30);
    insertbst(root, 70);
    insertbst(root, 20);
    insertbst(root, 40);
    insertbst(root, 60);
    insertbst(root, 80);
    insertbst(root, 55);
    // levelorder(root);
    // inorder(root);
    // cout<<searchbst(root, 40);
    cout<<floorbst(root,57);
    return 0;
}


bool searchbst(Node *root, int x)
{
    if(root==NULL)
        return false;
    else if(root->key==x)
        return true;
    else if(root->key<x)
        return searchbst(root->right, x);
    else
        return searchbst(root->left, x);
}

bool iter_searchbst(Node *root, int x)
{
    while(root!=NULL)
    {
    if(root->key==x)
        return true;
    else if(root->key<x)
        root = root->right;
    else if(root->key>x)
        root = root->left;
    }
    return false;
}

Node *insertbst(Node *root, int x)
{
    if(root==NULL)
        return new Node(x);
    else if(root->key < x)
        root->right = insertbst(root->right, x);
    else if(root->key > x)
        root->left = insertbst(root->left, x);
    return root;
}

Node *iter_insertbst(Node *root, int x)
{
    Node *temp = new Node(x);
    Node *parent = NULL;
    Node *curr = root;

    while(curr!=NULL)
    {
        parent = curr;
        if(curr->key>x)
            curr = curr->left;
        else if(curr->key < x)
            curr = curr->right;
        else
            return root;
    }
    if(parent==NULL)
        return temp;
    if(parent->key > x)
        parent->left = temp;
    else
        parent->right = temp;
    return root;
}


void levelorder(Node *root)
{
    if(root==NULL)
        return;
    queue<Node *> q;
    q.push(root);
    while(q.empty()==false)
    {
        Node *curr = q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left!=NULL)
            q.push(curr->left);
        if(curr->right!=NULL)
            q.push(curr->right);
    }
}


void inorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);
    }
}


Node *getsuccessor(Node *curr)
{
    curr = curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr = curr->left;
    return curr;
}


Node *deletebst(Node *root, int x)
{
    if(root==NULL)
        return root;
    if(root->key>x)
        root->left = deletebst(root->left, x);
    else if(root->key<x)
        root->right = deletebst(root->right, x);
    else
    {
        if(root->left==NULL)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        else
        {
            Node *succ = getsuccessor(root);
            root->key = succ->key;
            root->right = deletebst(root->right, succ->key);
        }
    return root;
    }
}


Node *floorbst(Node *root, int x)
{
    Node *res = NULL;
    while(root!=NULL)
    {
        if(root->key==x)
            return root;
        else if(root->key>x)
            root = root->left;
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}


Node *ceilbst(Node *root, int x)
{
    Node *res = NULL;
    while(root!=NULL)
    {
        if(root->key==x)
            return root;
        else if(root->key<x)
            root = root->right;
        else
        {
            res = root;
            root = root->right;
        }
    }
    return res;
}
