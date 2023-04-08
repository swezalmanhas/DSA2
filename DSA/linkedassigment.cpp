// #include<bits/stdc++.h>
// using namespace std;
// class node{
//  public:
//  int data;
//  node *next;
//  node(int val){
//  data=val;
//  next=NULL;
//  }
// };
// void inserAtTail(node *&head,int val){
//  node *n=new node(val);
//  node *temp=head;
//  if(head==NULL){ //if list is empty
//  head=n;
//  return;
//  }
//  while(temp->next!=NULL){ // to traverse till last node
//  temp=temp->next;
//  }
//  temp->next=n;
// }
// void insert_at_head(node*&head,int val){
//  node *n=new node(val);
//  n->next=head;
//  head=n;
// }
// void insert_at_pos(node*&head,int val,int pos){
//  node *n = new node(val);
//  node*temp=head;
//  if(pos==0){
//  insert_at_head(head,val);
//  return;
//  }
//  for(int i=0;i<pos-1;i++){
//  temp=temp->next;
//  }
//  n->next=temp->next;
//  temp->next=n;
// }
// void print(node *head){ // here head by value as no change in head
//  node *temp=head;
//  while(temp!=NULL){
//  cout<<temp->data<<" ";
//  temp=temp->next;
//  }
// }
// void deletion(node *&head,int val){ // val is the value to be deleted
//  node*temp=head;
//  while(temp->next->data!=val){ // to find the node to be deleted
//  temp=temp->next;
//  }
//  node *todelete=temp->next; // to delete the node
//  temp->next=todelete->next; // to delete the node
//  delete todelete;
// }
// void deleteathead(node*&head){ // no need of val as we already know it is first node
//  node*todelete=head; // as we have to delete head
//  head=head->next; // first we point head to new head and then delete
//  delete todelete;
// }
// void deleteatpos(node*&head,int pos){
//  node*temp=head;
//  if(pos==0){
//  deleteathead(head);
//  return;
//  }
//  for(int i=0;i<pos-1;i++){
//  temp=temp->next;
//  }
//  node*todelete=temp->next;
//  temp->next=todelete->next;
//  delete todelete;
// }
// int search(node*head,int val){
//  node*temp=head;
//  int count=0;
//  while(temp!=NULL){
//  count++;
//  if(temp->data==val){
//  return count;
//  }
//  temp=temp->next;
//  }
//  return 0;
// }
// node* reverse(node *&head){
//  node* prev=NULL;
//  node* curr=head;
//  node* next;
//  while(curr!=NULL){
//  next=curr->next;
//  curr->next=prev;
//  prev=curr;
//  curr=next;
//  }
//  return prev;
// }
// int get_length(node *head){
//  int len=0;
//  node*temp=head;
//  while(temp!=NULL){
//  temp=temp->next;
//  len++;
//  }
//  return len;
// }
// void middle(node*&head){
//  int len=0;
//  len=get_length(head);
//  int mid= len/2;
//  node*temp=head;
//  while(mid--){
//  temp=temp->next;
//  }
//  cout<<"The middle element is "<<temp->data<<endl;
// }
// node* occurences(node*&head,int val){
//  if(!head){
//  return head;
//  }
//  while(head && head->data==val){
//  head=head->next;
//  }
//  node*temp=head;
//  node*prev=NULL;
//  while(temp){
//  if(temp->data==val){
//  prev->next=temp->next;
//  }
//  else{
//  prev=temp;
//  }
//  temp=temp->next;
//  }
//  return head;
// }
// int main(){
//  node*head=NULL;
//  inserAtTail(head,1);
//  inserAtTail(head,2);
//  inserAtTail(head,3);
//  inserAtTail(head,3);
//  inserAtTail(head,3);
//  inserAtTail(head,4);
//  occurences(head,3);
//  print(head);
 
// return 0;
// }







//  #include<bits/stdc++.h>
// using namespace std;
// class node{
//  public:
//  int data;
//  node *next;
//  node(int val){
//  data=val;
//  next=NULL;
//  }
// };
// void inserAtTail(node *&head,int val){
//  node *n=new node(val);
//  node *temp=head;
//  if(head==NULL){ //if list is empty
//  head=n;
//  return;
//  }
//  while(temp->next!=NULL){ // to traverse till last node
//  temp=temp->next;
//  }
//  temp->next=n;
// }
// void insert_at_head(node*&head,int val){
//  node *n=new node(val);
//  n->next=head;
//  head=n;
// }
// void insert_at_pos(node*&head,int val,int pos){
//  node *n = new node(val);
//  node*temp=head;
//  if(pos==0){
//  insert_at_head(head,val);
//  return;
//  }
//  for(int i=0;i<pos-1;i++){
//  temp=temp->next;
//  }
//  n->next=temp->next;
//  temp->next=n;
// }
// void print(node *head){ // here head by value as no change in head
//  node *temp=head;
//  while(temp!=NULL){
//  cout<<temp->data<<"->";
//  temp=temp->next;
//  }
//  cout<<"NULL"<<endl;
// }
// void deletion(node *&head,int val){ // val is the value to be deleted
//  node*temp=head;
//  while(temp->next->data!=val){ // to find the node to be deleted
//  temp=temp->next;
//  }
//  node *todelete=temp->next; // to delete the node
//  temp->next=todelete->next; // to delete the node
//  delete todelete;
// }
// void deleteathead(node*&head){ // no need of val as we already know it is first node
//  node*todelete=head; // as we have to delete head
//  head=head->next; // first we point head to new head and then delete
//  delete todelete;
// }
// void deleteatpos(node*&head,int pos){
//  node*temp=head;
//  if(pos==0){
//  deleteathead(head);
//  return;
//  }
//  for(int i=0;i<pos-1;i++){
//  temp=temp->next;
//  }
//  node*todelete=temp->next;
//  temp->next=todelete->next;
//  delete todelete;
// }
// bool search(node*head,int val){
//  node*temp=head;
//  int count=0;
//  while(temp!=NULL){
//  if(temp->data==val){
//  cout<<count<<endl;
//  return true;
//  }
//  temp=temp->next;
//  count++;
//  }
//  return false;
// }
// node* reverse(node *&head){
//  node* prev=NULL;
//  node* curr=head;
//  node* next;
//  while(curr!=NULL){
//  next=curr->next;
//  curr->next=prev;
//  prev=curr;
//  curr=next;
//  }
//  return prev;
// }
// int get_length(node *head){
//  int len=0;
//  node*temp=head;
//  while(temp!=NULL){
//  temp=temp->next;
//  len++;
//  }
//  return len;
// }
// void middle(node*&head){
//  int len=0;
//  len=get_length(head);
//  int mid= len/2;
//  node*temp=head;
//  while(mid--){
//  temp=temp->next;
//  }
//  cout<<"The middle element is "<<temp->data<<endl;
// }
// int main(){
//  node *head=NULL;
//  inserAtTail(head,1);
//  inserAtTail(head,2);
//  inserAtTail(head,3);
//  inserAtTail(head,4);
//  inserAtTail(head,5);
//  middle(head);
//  node*newhead=reverse(head);
//  print(newhead);
// return 0;
// }



#include<bits/stdc++.h>
using namespace std;
class node{
 public:
 int data;
 node *next;
 node(int val){
 data=val;
 next=NULL;
 }
};
void inserAtTail(node *&head,int val){
 node *n=new node(val);
 node *temp=head;
 if(head==NULL){ //if list is empty
 head=n;
 return;
 }
 while(temp->next!=NULL){ // to traverse till last node
 temp=temp->next;
 }
 temp->next=n;
}
void insert_at_head(node*&head,int val){
 node *n=new node(val);
 n->next=head;
 head=n;
}
void insert_at_pos(node*&head,int val,int pos){
 node *n = new node(val);
 node*temp=head;
 if(pos==0){
 insert_at_head(head,val);
 return;
 }
 for(int i=0;i<pos-1;i++){
 temp=temp->next;
 }
 n->next=temp->next;
 temp->next=n;
}
void print(node *head){ // here head by value as no change in head
 node *temp=head;
 while(temp!=NULL){
 cout<<temp->data<<" ";
 temp=temp->next;
 }
}
void deletion(node *&head,int val){ // val is the value to be deleted
 node*temp=head;
 while(temp->next->data!=val){ // to find the node to be deleted
 temp=temp->next;
 }
 node *todelete=temp->next; // to delete the node
 temp->next=todelete->next; // to delete the node
 delete todelete;
}
void deleteathead(node*&head){ // no need of val as we already know it is first node
 node*todelete=head; // as we have to delete head
 head=head->next; // first we point head to new head and then delete
 delete todelete;
}
void deleteatpos(node*&head,int pos){
 node*temp=head;
 if(pos==0){
 deleteathead(head);
 return;
 }
 for(int i=0;i<pos-1;i++){
 temp=temp->next;
 }
 node*todelete=temp->next;
 temp->next=todelete->next;
 delete todelete;
}
int search(node*head,int val){
 node*temp=head;
 int count=0;
 while(temp!=NULL){
 count++;
 if(temp->data==val){
 return count;
 }
 temp=temp->next;
 }
 return 0;
}
node* reverse(node *&head){
 node* prev=NULL;
 node* curr=head;
 node* next;
 while(curr!=NULL){
 next=curr->next;
 curr->next=prev;
 prev=curr;
 curr=next;
 }
 return prev;
}
int get_length(node *head){
 int len=0;
 node*temp=head;
 while(temp!=NULL){
 temp=temp->next;
 len++;
 }
 return len;
}
void middle(node*&head){
 int len=0;
 len=get_length(head);
 int mid= len/2;
 node*temp=head;
 while(mid--){
 temp=temp->next;
 }
 cout<<"The middle element is "<<temp->data<<endl;
}
void printmenu()
{
 cout << "--menu--" << endl;
 cout << "1.insert at beginning" << endl;
 cout << "2.insertion at end" << endl;
 cout << "3.inserttion at before position" << endl;
 cout << "4.delete from begnning" << endl;
 cout << "5.deletion from end" << endl;
 cout << "6.deletion a specific node" << endl;
 cout << "7.search a node" << endl;
 cout << "8.display all nodes" << endl;
 cout << "9.exit" << endl;
}
int main(){
 node*head=NULL;
 printmenu();
 int choice,val,pos,index;
 while(choice!=9){
 cin>>choice;
 switch(choice){
 case 1:
 cout<<"enter the value to be inserted"<<endl;
 cin>>val;
 insert_at_head(head,val);
 print(head);
 break;
 case 2:
 cout<<"enter the value to be inserted"<<endl;
 cin>>val;
 inserAtTail(head,val);
 print(head);
 break;
 case 3:
 cout<<"enter the value to be inserted"<<endl;
 cin>>val;
 cout<<"enter the position"<<endl;
 cin>>pos;
 insert_at_pos(head,val,pos);
 print(head);
 break;
 case 4:
 deleteathead(head);
 print(head);
 break;
 case 5:
 deletion(head,val);
 print(head);
 break;
 case 6:
 cout<<"enter the position"<<endl;
 cin>>pos;
 deleteatpos(head,pos);
 print(head);
 break;
 case 7:
 cout<<"enter the value to be searched"<<endl;
 cin>>val;
 index=search(head,val);
 if(index){
 cout<<"found at "<<index<<endl;
 break;
 }
 else{
 cout<<"not found"<<endl;
 break;
 }
 case 8:
 print(head);
 break;
 }
 }
return 0;
}


 
