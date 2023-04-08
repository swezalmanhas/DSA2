#include<bits/stdc++.h>
using namespace std;
class node{
    public:
      int data;
      node*next;
      node*prev;
      node(int val){
        data=val;
        next=NULL;
        prev=NULL;
      }
};
void insert_at_head(node*&head,int val){
    node*n=new node(val);
    head=n;
}
void insert_at_tail(node*&head,int val){
    node*n=new node(val);
    node*temp=head;
    if(head==NULL){
       insert_at_head(head,val);
       return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
 void insert_at_pos(node*&head,int val,int pos){
    node*n=new node(val);
    node*temp=head;
    int count=0;
    if(pos==0){
        insert_at_head(head,val);
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next->prev=n;
    temp->next=n;
    n->prev=temp;
}
void print(node *head){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void delete_at_tail(node *&head){
    node*temp=head;
    if(head==NULL){
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete temp;
}
void delete_at_head(node*&head){
    node*todelete=head;
    head=head->next;
    head->prev=NULL;
    delete todelete;
}
void delete_at_pos(node*&head,int pos){
    node*temp=head;
    int count=0;
    if(pos==0){
        delete_at_head(head);
        return;
    }
    for(int i=1;i<pos-1;i++){
        temp=temp->next;
    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
    delete todelete;
}
void search(node*head,int val){
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            cout<<"Found"<<endl;
            return;
        }
        temp=temp->next;
    }
    cout<<"Not Found"<<endl;
}
int size_of_doubly_list(node*head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}
node* reverse_in_k_groups(node*&head,int k){
    if(head==NULL){
        return NULL;
    }
    node*temp;
    node*curr=head;
    node*newhead;
    int count=0;
    while(curr!=NULL && count<k){
        newhead=head;
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
        count++;
    }
    if(count>=k){
        node*rest=reverse_in_k_groups(curr,k);
        head->next=rest;
        if(rest!=NULL){
            rest->prev=head;
        }
    }
    return newhead;
}
bool is_even_parity(int x){
    int count=0;
    while(x){
        if(x&1){
            count++;
        }
        x=x>>1;
    }
    if(count%2==0){
        return false;
    }
    return true;
}
void delete_even_parity(node*&head){
    node*temp=head;
    node*p;
    int count=1;
    while(temp!=NULL){
        p=temp->next;
        if(!is_even_parity(temp->data)){
            delete_at_pos(head,count);
        }
        temp=p;
        count++;
    }
}
int main(){
    node*head=NULL;
    insert_at_tail(head,9);
    insert_at_tail(head,11);
    insert_at_tail(head,34);
    insert_at_tail(head,6);
    insert_at_tail(head,13);
    insert_at_tail(head,21);
    print(head);
    delete_even_parity(head);
    print(head);
return 0;
}