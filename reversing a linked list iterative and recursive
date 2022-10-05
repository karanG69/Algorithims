#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
node* reverse(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* nextptr;
    while(curr!=NULL){
        nextptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextptr;
    }
    return prev;
}
node* reverse_recursive(node* &head){
    cout<<"head="<<head->data<<endl;
    if(head->next==NULL||head==NULL){
        return head;
    }
    node* newhead=reverse_recursive(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
void insert_at_tail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    int n,d1,d;
    cin>>n;
    cin>>d1;
    node* node1=new node(d1);
    node* head=node1;
    node* tail=node1;
    for(int i=0;i<n-1;i++){
        cin>>d;
        insert_at_tail(tail,d);
    }
    //print(head);
    node* newhead=reverse_recursive(head);
    print(newhead);
    return 0;
}
