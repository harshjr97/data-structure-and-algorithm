#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;
    Node(int d)
    {
        key = d;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node *);
void preorder(Node *);
void postorder(Node *);
int height(Node *);
void printKDist(Node *, int);
void levelorder(Node *);
int getsize(Node *);
int getmax(Node *);



int main()
{
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->right->left = new Node(40);
    root->right->right = new Node(50);
    root->right->right->right = new Node(60);
    // inorder(root);
    // cout<<endl;
    // preorder(root);
    // cout<<endl;
    // postorder(root);
    // cout<<endl;
    // cout<<height(root);
    // printKDist(root, 1);
    // levelorder(root);
    // cout<<getsize(root);
    cout<<getmax(root);
    return 0;
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


void preorder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->key<<" ";
        inorder(root->left);
        inorder(root->right);
    }
}


void postorder(Node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        inorder(root->right);
        cout<<root->key<<" ";
    }
}


int height(Node *root)
{
    if(root==NULL)
        return 0;
    else
        return max(height(root->left),height(root->right))+1;
}


void printKDist(Node *root, int k)
{
    if(root==NULL)
        return;
    if(k==0)
        cout<<root->key<<" ";
    else
    {
        printKDist(root->left, k-1);
        printKDist(root->right, k-1);
    }
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


int getsize(Node *root)
{
    if(root==NULL)
        return 0;
    else
        return 1+getsize(root->left)+getsize(root->right);
}


int getmax(Node *root)
{
    if(root==NULL)
        return INT16_MIN;
    else
        return max(root->key, max(getmax(root->left), getmax(root->right)));
}