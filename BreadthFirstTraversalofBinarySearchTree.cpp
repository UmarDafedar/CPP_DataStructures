#include<iostream>
#include<queue>

using namespace std;

int lcount=0;

struct Node
{
 int data;
 Node* left;
 Node* right;
};

Node* CreateNode(int data)
{
 Node* newnode=new Node;
 newnode->data=data;
 newnode->left=nullptr;
 newnode->right=nullptr;
 return newnode;
}

Node* Insert(Node* inproot,int data)
{
 if(inproot==nullptr)
  inproot=CreateNode(data);
 else if(data<=inproot->data)
  inproot->left=Insert(inproot->left,data);
 else if(data>inproot->data)
  inproot->right=Insert(inproot->right,data);
 return inproot;
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
 int random;
 int i=25;
 Node* root=nullptr;
 while(i>0)
 {
  random=1+rand()%100;
  cout<<random<<" ";
  root=Insert(root,random);
  i--;
 }
 cout<<endl;
 
 LevelOrderTraversal(root);
 return 0;
}
