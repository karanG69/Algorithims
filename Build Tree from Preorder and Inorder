#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};
int search(int Inorder[],int curr,int start,int end){
    for(int i=start;i<=end;i++){
        if(Inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* BuildTree(int Preorder[],int Inorder[],int start,int end){
    static int indx=0;
    if(start>end){
        return NULL;
    }
    int curr=Preorder[indx];
    indx++;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(Inorder,curr,start,end);
    node->left=BuildTree(Preorder,Inorder,start,pos-1);
    node->right=BuildTree(Preorder,Inorder,pos+1,end);
    return node;
}
void printPre(Node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    printPre(root->left);
    printPre(root->right);
}
void printPost(Node* root){
    if(root==NULL){
        return ;
    }
    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}
void printIn(Node* root){
    if(root==NULL){
        return ;
    }
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}
int main(){
    int Preorder[]={1,2,4,3,5};
    int Inorder[]={4,2,1,5,3};
    Node* root=BuildTree( Preorder, Inorder,0,4);
    cout<<"Preorder :";printPre(root);cout<<endl;
    cout<<"Inorder :";printIn(root);cout<<endl;
    cout<<"Postorder :";printPost(root);cout<<endl;
    return 0;
}
