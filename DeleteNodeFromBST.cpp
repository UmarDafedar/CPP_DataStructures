#include<iostream>
#include<queue>
using namespace std;

struct Node
{
 int data;
 Node* left;
 Node* right;
};

Node* CreateNode(Node* root,int data)
{
 Node* tmp=new Node;
 tmp->data=data;
 tmp->left=nullptr;
 tmp->right=nullptr;
 return tmp;
}

Node* InsertNode(Node* root,int data)
{
 if(root==nullptr)
  root=CreateNode(root,data);
 else if(data<=root->data)
  root->left=InsertNode(root->left,data);
 else if(data>root->data)
  root->right=InsertNode(root->right,data);
  
  return root;
}

Node* FindMin(Node* root)
{
 if(root==nullptr)
  return root;
 else if(root->left == nullptr)
  return root;
 else
  return FindMin(root->left);
}

Node* DeleteNode(Node* root,int data)
{
 //root is null
 if(root==nullptr)
  return root;
 // Traverse
 else if(data<root->data)
  root->left=DeleteNode(root->left,data);
 else if(data>root->data)
  root->right=DeleteNode(root->right,data);
 // Found the data to be Deleted
 else
 {
  // case1 : Its a leaf Node
  if(root->right==nullptr && root->left==nullptr)
  {
   delete root;
   root=nullptr;
   return root;
  }
  else if(root->left==nullptr)
  {
   Node* tmp=root;
   root=root->right;
   delete tmp;
  }
  else if(root->right==nullptr)
  {
   Node* tmp=root;
   root=root->left;
   delete tmp;
  }
  else
  {
   Node* tmp=FindMin(root->right);
   root->data=tmp->data;
   root->right=DeleteNode(root->right,tmp->data);
  }
  
 }
 return root;
}

void LevelOrderTraversal(Node* root)
{
  if(root==nullptr)
   return;
  else
  {
   queue<Node*> q;
   q.push(root);
   Node* current=nullptr;
   while(!q.empty())
   {
    current=q.front();
    q.pop();
    cout<<current->data<<" ";
    if(current->left!=nullptr) q.push(current->left);
    if(current->right!=nullptr) q.push(current->right);
   }
   cout<<endl;
  }
 
}

int main()
{
 
 Node* root=nullptr;
 int i=25;
 int value=0;
 while(i>0)
 {
  value=1+rand()%100;
  root=InsertNode(root,value);
  i--;
 }
 LevelOrderTraversal(root);
 root=DeleteNode(root,50);
 cout<<"I am here"<<endl;
 LevelOrderTraversal(root);
 return 0;
}
