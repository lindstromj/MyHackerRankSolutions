/*
You are given pointer to the root of the binary search tree and two values v1 and v2. 
You need to return the lowest common ancestor (LCA) of v1 and v2 in the binary search tree.
It is guaranteed that v1 and v2 are present in the tree.

Node is defined as 
typedef struct node
{
   int data;
   node * left;
   node * right;
}node;

Complete the function:
*/

node * lca(node * root, int v1,int v2)
{
    if(v1>root->data && v2<root->data || v1<root->data && v2>root->data)
    {
      return root;  
    }
    if(v1<root->data && v2<root->data)
    {
       root=lca(root->left, v1, v2);   
    }
    if(v1>root->data && v2>root->data)
    {
       root=lca(root->right, v1, v2);   
    }
        
    return root;
}
