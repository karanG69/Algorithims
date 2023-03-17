#include <iostream>

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
Node* BuildTree(int PostOrder[],int Inorder[],int start,int end,int n){
    static int Indx=n-1;
    if(start>end){
        return NULL;
    } 
    int curr=PostOrder[Indx];
    Indx--;
    Node* node=new Node(curr);
    if(start==end){
        return node;
    }
    int pos=search(Inorder,curr,start,end);
    node->right=BuildTree(PostOrder,Inorder,pos+1,end,n);
    node->left=BuildTree(PostOrder,Inorder,start,pos-1,n);
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
int main()
{
    int n;
    cin>>n;
    int Postorder[n];
    for(int i=0;i<n;i++){
        cout<<"Enter PostOreder-"<<endl;cin>>Postorder[i];
    }
    int Inorder[n];
    for(int i=0;i<n;i++){
        cout<<"Enter InOreder-"<<endl;cin>>Inorder[i];
    }
    Node* root=BuildTree(Postorder,Inorder,0,n-1,n);
    cout<<"Preorder :";printPre(root);cout<<endl;

    cout<<"Inorder :";printIn(root);cout<<endl;
    
    cout<<"Postorder :";printPost(root);cout<<endl;
    
    return 0;
}
