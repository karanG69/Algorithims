#include <iostream>
using namespace std;
class stack{
    public:
    int size;
    int top;
    int *arr;
    
    stack(int n){
        this->size=n;
        arr=new int[size];
        top=-1;
    }
    void push(int d){
        if(size-top>1){
            top++;
            arr[top]=d;
        }
    }
    void pop(){
        if(top>=0){
            top--;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            return -1;
        }
    }
    bool empty(){
        if(top>=0){
            return false;
        }
        else{
            return true;
        }
    }
};
void insert_At_bottom(stack &st,int ele){
    if(st.empty()){
        st.push(ele);
        return ;
    }
    int topele=st.peek();
    st.pop();
    insert_At_bottom(st,ele);
    
    st.push(topele);
}
void reverse(stack &st){
    if(st.empty()){
        return;
    }
    int ele=st.peek();
    st.pop();
    reverse(st);
    insert_At_bottom(st,ele);
}
int main(){
    int n,d;
    cout<<"Enter the size of the stack-";cin>>n;
    stack st(n);
    for(int i=0;i<n;i++){
        cout<<"Enter the element to be inserted-";
        cin>>d;
        st.push(d);
    }
    /*cout<<"Original Stack is"<<endl;
    while(!st.empty()){
        cout<<st.peek()<<endl;
        st.pop();
    }*/
    reverse(st);
    cout<<"Reversed stack is"<<endl;
    while(!st.empty()){
        cout<<st.peek()<<endl;
        st.pop();
    }
    
    return 0;
}
