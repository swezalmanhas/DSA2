// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node* next;
//     node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void insertathead(node* &head,int d)
// {
//     node* temp=new node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(node* &tail,int d)
// {
// node* temp=new node(d);
// tail->next=temp;
// tail=temp;
// }
// void insertatposition(node* &head,node* &tail,int position, int d)
// {
//     if(position==1)
//     {
//         insertathead(head,d);
//         return;
//     }
//       node* temp=head;
//     int count=1;
//     while(count<position-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     // insert at last
//     if(temp->next == NULL)
//     {
//         insertattail(tail,d);
//         return;
//     }
//     //creating a node for d
//     node* nodetoinsert=new node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
// }
// node* reverse(node* head)
// {
//     if(head==NULL||head->next==NULL)
//     {
//         return head;
//     }
//     node* prev=NULL;
//     node* curr=head;
//     node* forward=NULL;
//     while(curr!=NULL)
//     {
//         forward=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=forward;
//     }
//     return prev;
// }

// void print(node* &head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
        

//     }
//     cout<<endl;
// }
// int main(){
//     node*obj=new node(10);
//     node* head=obj;
//      node* tail=obj;
//     print(head);
//     insertathead(head,100);
//     print (head);
//     insertathead(head,300);
//     print (head);
//     insertathead(head,300);
//     print (head);
//     insertathead(head,400);
//     print (head);
//     insertattail(tail,1000);
//     print(head);
//      insertattail(tail,2000);
//     print(head);
//      insertattail(tail,3000);
//     print(head);
//     head=reverse(head);
//     print(head);

// return 0;
// }




// with the help of the recussive

// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node* next;
//     node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void insertathead(node* &head,int d)
// {
//     node* temp=new node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(node* &tail,int d)
// {
// node* temp=new node(d);
// tail->next=temp;
// tail=temp;
// }
// void insertatposition(node* &head,node* &tail,int position, int d)
// {
//     if(position==1)
//     {
//         insertathead(head,d);
//         return;
//     }
//       node* temp=head;
//     int count=1;
//     while(count<position-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     // insert at last
//     if(temp->next == NULL)
//     {
//         insertattail(tail,d);
//         return;
//     }
//     //creating a node for d
//     node* nodetoinsert=new node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
// }
//  void reverse(node* &head,node* curr,node* prev)   // important
// {
//     if(curr==NULL)
//     {
//         head=prev;
//         return  ;
//     }
//     node* forward=curr->next;
//     reverse(head,forward,curr);
//     curr->next=prev;
// }
// node* reverse(node* head)
// {
//     node* curr=head;
//     node* prev=NULL;
//     reverse(head,curr,prev);
//     return head;
// }

// void print(node* &head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
        

//     }
//     cout<<endl;
// }
// int main(){
//     node*obj=new node(10);
//     node* head=obj;
//      node* tail=obj;
//     print(head);
//     insertathead(head,100);
//     print (head);
//     insertathead(head,300);
//     print (head);
//     insertathead(head,300);
//     print (head);
//     insertathead(head,400);
//     print (head);
//     insertattail(tail,1000);
//     print(head);
//      insertattail(tail,2000);
//     print(head);
//      insertattail(tail,3000);
//     print(head);
//     head=reverse(head);
//     print(head);

// return 0;
// }




// to find the midlle of the elemnet

// #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node* next;
//     node(int d)
//     {
//         this->data=d;
//         this->next=NULL;
//     }
// };
// void insertathead(node* &head,int d)
// {
//     node* temp=new node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(node* &tail,int d)
// {
// node* temp=new node(d);
// tail->next=temp;
// tail=temp;
// }
// void insertatposition(node* &head,node* &tail,int position, int d)
// {
//     if(position==1)
//     {
//         insertathead(head,d);
//         return;
//     }
//       node* temp=head;
//     int count=1;
//     while(count<position-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     // insert at last
//     if(temp->next == NULL)
//     {
//         insertattail(tail,d);
//         return;
//     }
//     //creating a node for d
//     node* nodetoinsert=new node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;
// }

// int getlength(node* &head)
// {
//     int len=0;
//     while(head!=NULL)
//     {
//         len++;
//         head=head->next;
//     }
//     return len;
// }
// node  *findmid(node* head)
// {
//     int cnt=0;
//     int len=getlength(head);
//     int ans=(len/2);
//     node*temp=head;
//     while(cnt<ans)
//     {
//         temp=temp->next;
//         cnt++;
//     }
//        return temp;
// }

// void print(node* &head)
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
        
        

//     }
//     cout<<endl;
// }
// int main(){
//     node*obj=new node(10);
//     node* head=obj;
//      node* tail=obj;
//     print(head);
//     insertathead(head,100);
//     print (head);
//     insertathead(head,300);
//     print (head);
//     insertathead(head,300);
//     print (head);
//     insertathead(head,400);
//     print (head);
//     insertattail(tail,1000);
//     print(head);
//      insertattail(tail,2000);
//     print(head);
//      insertattail(tail,3000);
//     print(head);
//      node* temp=findmid(head);
//      cout<<temp->data;
//     cout<<getlength(head);


// return 0;
// }


// to find the elemnt of the array

//  #include<bits/stdc++.h>
// using namespace std;
// class node
// {
//     public:
//     int data;
//     node *next;
   
//     node(int data)
//     {
//         this->data=data;
//         this->next=NULL;
//     }
//     ~node()
//     {
//         int value=this->data;
//         if(this->next!=NULL)
//         {
//             delete next;
//             next=NULL;
//         }
//         cout<<"memory free"<<"  "<<value<<endl;
//     }
// };
// void insertathead(node* &head,int d)   // starting mai add karna ho elemnt
// {
//     // new node create
//     node*temp=new node(d);
//     temp->next=head;
//     head=temp;
// }
// void insertattail(node* &tail,int d)    // last mai add karna ho elemnt
// {
//     node *temp=new node(d);
//     tail->next=temp;
//     tail=temp;
// }
// void insertatposition(node* &head,node* &tail,int postion,int d)   // middle mai agar insert karna ho
// {
//     if(postion==1)
//     {
//         insertathead(head,d);
//         return;
//     }
//     node* temp=head;
//     int count=1;
//     while(count<postion-1)
//     {
//         temp=temp->next;
//         count++;
//     }
//     // insert at last
//     if(temp->next == NULL)
//     {
//         insertattail(tail,d);
//         return;
//     }
//     //creating a node for d
//     node* nodetoinsert=new node(d);
//     nodetoinsert->next=temp->next;
//     temp->next=nodetoinsert;

// }
// void deletenode(int position,node* &head)
// {
//     if(position==1)
//     {
//         node* temp=head;
//         head=head->next;
//         temp->next=NULL;
//         delete temp;
//     }
//     else{
//         node* curr=head;
//         node*prev=NULL;
//         int count=1;
//         while(count<position)
//         {
//             prev=curr;
//             curr=curr->next;
//             count++;
//         }
//         prev->next=curr->next;
//         curr->next=NULL;
//         delete curr;

//     }
// }

// node* getmiddle(node*head)
// {
//     if(head==NULL||head->next==NULL)
//     return head;
//     if(head->next->next==NULL)
//     {
//         return head->next;
//     }
//     node* slow=head;
//     node* fast=head->next;
//     while(fast!=NULL)
//     {
//         fast=fast->next;
//         if(fast!=NULL)
//         {
//             fast=fast->next;
//         }
//         slow=slow->next;
//     }
//     return slow;
// }
// node* findmiddle(node*head)
// {
//     return getmiddle(head);
// }


// void print(node* &head)           // print krr rha hu
// {
//     node* temp=head;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     node *obj=new node(40);
//    cout<< obj->data<<endl;;
//     // cout<<obj->next<<endl;

//     //headpoint to node1
//     node* head=obj;
//     node* tail=obj;
//     print(head);
//     insertathead(head,100);
//     print(head);
//     insertathead(head,20);
//     print(head);
   
//     insertattail(tail,80);
//     print (head);
//     insertattail(tail,60);
//     print (head);
//     insertattail(tail,20);
//     print (head);
//   node *mid=findmiddle(head);
  
//   cout<<mid->data;
// }



// check it is circular linked list or not 


 #include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    // constructor
    node(int d)
    {
        this->data=d;
        this->next=NULL;
    }
    // deconstructor
    ~ node()
    {
        int value=this->data;
        while(this->next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memoery free "<<"   "<<value<<endl;
    }
};
// insert int0 list
void insertnode(node* &tail,int element,int d)
{
    if(tail==NULL)
    {
        node* newnode=new node(d);
        tail=newnode;
        newnode->next=newnode;
    }
    else
    {
    node*curr=tail;
    while(curr->data!=element)
    {
        curr=curr->next;
    }
    
    // elemnt found
    node*temp=new node(d);
    temp->next=curr->next;
    curr->next=temp;
}
}

bool iscircular(node* head)
{
    if(head==NULL)
    {
        return true;

    }
    node* temp=head->next;
    while(temp!=NULL&&temp!=head)
    {
        temp=temp->next;
    }
    if(temp==head)
    {
        return true;
    }
    return false;
}

// print the node
void print (node* tail)
{
    node* temp=tail;
    cout<<tail->data<<" ";
    while(tail->next!=temp)
    {
        cout<<tail->data<<"  ";
        tail= tail->next;
    }
    cout<<endl;
}

// deletion code
void deletenode(node* &tail,int value)
{
    if(tail==NULL)
    {
        cout<<"list is empty"<<endl;
    }
    else{
    node* prev=tail;
    node*curr=prev->next;
    while(curr->data!=value)
    {
        prev=curr;
        curr=curr->next;
    }
    prev ->next=curr->next;
    curr->next=NULL;
    delete curr;
}
}
int main(){
    
    node* tail=NULL;
    insertnode(tail,5,3);
    print(tail);
    insertnode(tail,3,7);
    print(tail);
    insertnode(tail,7,10);
    print(tail);
    insertnode(tail,10,45);
    print(tail);
    deletenode(tail,10);
    print(tail);
    if(iscircular(tail))
    {
        cout<<"circular in the nature"<<endl;

}else{

    cout<<"not circular"<<endl;
}


return 0;
}