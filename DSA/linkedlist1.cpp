// // // // implementation of node 

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // class node
// // // // {
// // // //     public:
// // // //     int data;
// // // //     node *next;
   
// // // //     node(int data)
// // // //     {
// // // //         this->data=data;
// // // //         this->next=NULL;
// // // //     }
// // // // };
// // // // int main(){
// // // //     node *obj=new node(10);
// // // //    cout<< obj->data<<endl;;
// // // //     cout<<obj->next<<endl;

// // // // return 0;
// // // // }


// // // insertion and printiong of the linked list and insert at beginng and last

// //  #include<bits/stdc++.h>
// // using namespace std;
// // class node
// // {
// //     public:
// //     int data;
// //     node *next;
   
// //     node(int data)
// //     {
// //         this->data=data;
// //         this->next=NULL;
// //     }
// //     ~node()
// //     {
// //         int value=this->data;
// //         if(this->next!=NULL)
// //         {
// //             delete next;
// //             next=NULL;
// //         }
// //         cout<<"memory free"<<"  "<<value<<endl;
// //     }
// // };
// // void insertathead(node* &head,int d)   // starting mai add karna ho elemnt
// // {
// //     // new node create
// //     node*temp=new node(d);
// //     temp->next=head;
// //     head=temp;
// // }
// // void insertattail(node* &tail,int d)    // last mai add karna ho elemnt
// // {
// //     node *temp=new node(d);
// //     tail->next=temp;
// //     tail=temp;
// // }
// // void insertatposition(node* &head,node* &tail,int postion,int d)   // middle mai agar insert karna ho
// // {
// //     if(postion==1)
// //     {
// //         insertathead(head,d);
// //         return;
// //     }
// //     node* temp=head;
// //     int count=1;
// //     while(count<postion-1)
// //     {
// //         temp=temp->next;
// //         count++;
// //     }
// //     // insert at last
// //     if(temp->next == NULL)
// //     {
// //         insertattail(tail,d);
// //         return;
// //     }
// //     //creating a node for d
// //     node* nodetoinsert=new node(d);
// //     nodetoinsert->next=temp->next;
// //     temp->next=nodetoinsert;

// // }
// // void deletenode(int position,node* &head)
// // {
// //     if(position==1)
// //     {
// //         node* temp=head;
// //         head=head->next;
// //         temp->next=NULL;
// //         delete temp;
// //     }
// //     else{
// //         node* curr=head;
// //         node*prev=NULL;
// //         int count=1;
// //         while(count<position)
// //         {
// //             prev=curr;
// //             curr=curr->next;
// //             count++;
// //         }
// //         prev->next=curr->next;
// //         curr->next=NULL;
// //         delete curr;

// //     }
// // }



// // void print(node* &head)           // print krr rha hu
// // {
// //     node* temp=head;
// //     while(temp!=NULL)
// //     {
// //         cout<<temp->data<<" ";
// //         temp=temp->next;
// //     }
// //     cout<<endl;
// // }
// // int main(){
// //     node *obj=new node(40);
// //    cout<< obj->data<<endl;;
// //     // cout<<obj->next<<endl;

// //     //headpoint to node1
// //     node* head=obj;
// //     node* tail=obj;
// //     print(head);
// //     insertathead(head,100);
// //     print(head);
// //     insertathead(head,20);
// //     print(head);
   
// //     insertattail(tail,80);
// //     print (head);
// //     insertattail(tail,60);
// //     print (head);
// //     insertattail(tail,20);
// //     print (head);
  
// // }




// // // //         doubly linked list full cand proper code

// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // class node
// // // // {
// // // //     public:
// // // //     int data;
// // // //     node* next;
// // // //     node* prev;
// // // //     node(int d)
// // // //     {
// // // //         this->data=d;
// // // //         this->next=NULL;
// // // //         this->prev=NULL;
// // // //     }
// // // //     ~node()
// // // //     {
// // // //         int value=this->data;
// // // //         if(next!=NULL)
// // // //         {
// // // //             delete next;
// // // //             next=NULL;

// // // //         }
// // // //         cout<<"memoey free"<<"    "<<value;
// // // //     }
// // // // };

// // // // // inset at the head or in the starting.
// // // // void insertathead(node* &head,int d)
// // // // {
// // // //     if(head==NULL)
// // // //     {
// // // //     node* temp=new node(d);
// // // //     head=temp;

// // // //     }
// // // //      node* temp=new node(d);
// // // //     temp->next=head;
// // // //     head->prev=temp;
// // // //     head=temp;

// // // // }

// // // // // insert at tail mean in the last
// // // // void insertattail(node* &tail,int d)
// // // // {
// // // //     node* temp=new node(d);
// // // //     tail->next=temp;
// // // //     temp->prev=tail;
// // // //     tail=temp;
// // // // }

// // // // //  print the code
// // // // void print(node* &head)    
// // // // {
// // // //     node *temp=head;
// // // //     while(temp!=NULL)
// // // //     {
// // // //         cout<<temp->data<<"  ";
// // // //         temp=temp->next;
// // // //     }
// // // //     cout<<endl;
// // // // }


// // // // // insert at the midlle of the elemnt
// // // // void insertatposition(node* &head,node* &tail,int position, int d)
// // // // {
// // // //     if(position==1)
// // // //     {
// // // //         insertathead(head,d);
// // // //         return;
// // // //     }
// // // //     node*temp=head;
// // // //     int count=1;
// // // //     while(count<position-1)
// // // //     {
// // // //         temp=temp->next;
// // // //         count++;
// // // //     }
// // // //     if(temp->next==NULL)
// // // //     {
// // // //         insertattail(tail,d);
// // // //         return;
// // // //     }
// // // //     node* nodetoinsert=new node(d);
// // // //     nodetoinsert->next=temp->next;
// // // //     temp->next->prev=nodetoinsert;
// // // //     temp->next=nodetoinsert;
// // // //     nodetoinsert->prev=temp;
// // // // }
// // // // // length of the node
// // // // int getlenght(node* head)
// // // // {
// // // //     int len=0;
// // // //     node* temp=head;
// // // //     while(temp!=NULL)
// // // //     {
// // // //         len++;
// // // //         temp=temp->next;
// // // //     }
// // // //     return len;
// // // // }
// // // // // delete the node
// // // // void deletenode(node* &head,int position)
// // // // {
// // // //     if(position==1)
// // // //     {

// // // //     node* temp=head;
// // // //     temp->next->prev=NULL;
// // // //     head=temp->next;
// // // //     }
// // // //     else
// // // //     {

    
// // // //     node* curr=head;
// // // //     node* prev=NULL;
// // // //     int count=1;
// // // //     while(count<position)

// // // // {
    
// // // //       prev=curr;
// // // //     curr=curr->next;
// // // //     count++;

// // // // }
    
  

// // // // curr->prev=NULL;
// // // // prev->next=curr->next;
// // // // curr->next=NULL;
// // // // delete curr;
// // // //     }
// // // // }
// // // // int main(){
// // // //     node* obj=new node(10);
// // // //     node*head=obj;
// // // //     node*tail=obj;
// // // //     print(head);
// // // //     insertathead(head,100);
// // // //     print(head);
// // // //      insertathead(head,200);
// // // //     print(head);
// // // //      insertathead(head,300);
// // // //     print(head);
// // // //     insertattail(tail,1000);
// // // //     print(head);
// // // //      insertattail(tail,2000);
// // // //     print(head);
// // // //     insertatposition(head,tail,3, 150);
// // // //     print(head);
// // // //       insertatposition(head,tail,1, 150000);
// // // //     print(head);
// // // //     deletenode(head,3);
// // // //    cout<<endl<<"The length of the node"<< "  "<<getlenght(head)<<endl;
    

// // // // return 0;
// // // // }


// //  circular linbked list 
// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node* next;
//     // constructor
//     node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
//     // deconstructor
//     ~ node()
//     {
//         int value=this->data;
//         while(this->next!=NULL)
//         {
//             delete next;
//             next=NULL;
//         }
//         cout<<"memoery free "<<"   "<<value<<endl;
//     }
// };
// // insert int list
// void insertnode(node* &tail,int element,int d)
// {
//     if(tail==NULL)
//     {
//         node* newnode=new node(d);
//         tail=newnode;
//         newnode->next=newnode;
//     }
//     else
//     {
//     node*curr=tail;
//     while(curr->data!=element)
//     {
//         curr=curr->next;
//     }
    
//     // elemnt found
//     node*temp=new node(d);
//     temp->next=curr->next;
//     curr->next=temp;
// }
// }

// // print the node
// void print (node* tail)
// {
//     node* temp=tail;
//     cout<<tail->data<<" ";
//     while(tail->next!=temp)
//     {
//         cout<<tail->data<<"  ";
//         tail= tail->next;
//     }
//     cout<<endl;
// }

// // deletion code
// void deletenode(node* &tail,int value)
// {
//     if(tail==NULL)
//     {
//         cout<<"list is empty"<<endl;
//     }
//     else{
//     node* prev=tail;
//     node*curr=prev->next;
//     while(curr->data!=value)
//     {
//         prev=curr;
//         curr=curr->next;
//     }
//     prev ->next=curr->next;
//     curr->next=NULL;
//     delete curr;
// }
// }
// int main(){
    
//     node* tail=NULL;
//     insertnode(tail,5,3);
//     print(tail);
//     insertnode(tail,3,7);
//     print(tail);
//     insertnode(tail,7,10);
//     print(tail);
//     insertnode(tail,10,45);
//     print(tail);
//     deletenode(tail,10);
//     print(tail);

// return 0;
// }





 
 



