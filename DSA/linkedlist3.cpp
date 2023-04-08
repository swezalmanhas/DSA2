
// reverse the emlemnt with the k group
//   #include<bits/stdc++.h>
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

// node* reverse(node* &head,int k)
// {
//     // base call
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     node* prev=NULL;
//     node* next=NULL;
//     node* curr=head;
//     int count=0;
//     while(curr!=NULL && count<k)
// {
//     next=curr->next;
//     curr->next=prev;
//     prev=curr;
//     curr=next;
//     count++;

// }
// if(next!=NULL)
// {
//     head->next=reverse(next,k);
// }
// return prev;
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
//    cout<< obj->data<<endl;
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
//     node* rev=reverse(head,3);
//     cout<<rev->data;

// }

// palindrome

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
// node* reverse(node* head)
// {
//     node* curr=head;
//     node* prev=NULL;
//     node* next=NULL;
//     while(curr!=NULL)
//     {
//         next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     return prev;
// }
// node* getmiddle(node* head)
// {
//     node* slow=head;
//     node* fast=head->next;
//     while(fast!=NULL&&fast->next!=NULL)
//     {
//         fast=fast->next->next;
//         slow=slow->next;
//     }
//     return slow;
// }

// bool ispalindrome(node* head)
// {
//     if(head->next==NULL)
//     {
//         return true;
//     }
//     node* middle=getmiddle(head);
//     node*temp=middle->next;
//     middle->next=reverse(temp);
//     node* head1=head;
//     node* head2=middle->next;
//     while(head2!=NULL)
//     {
//         if(head1->data!=head2->data)
//         {
//             return false;
//         }
//         head1=head1->next;
//         head2=head2->next;
//     }
//     return true;
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
//    insertathead(head,10);
//    print(head);
//    insertathead(head,20);
//    print(head);
//    insertattail(tail,10);
//    insertattail(tail,20);
//    print(head);
//     if(ispalindrome(head))
//     {
//         cout<<"the ll is palindrome"<<endl;
//     }
//     else
//     cout<<"not ll"<<endl;

// }

// to detect the loop in the ll  lecture 47

// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     // constructor
//     node(int d)
//     {
//         this->data = d;
//         this->next = NULL;
//     }
//     // deconstructor
//     ~node()
//     {
//         int value = this->data;
//         while (this->next != NULL)
//         {
//             delete next;
//             next = NULL;
//         }
//         cout << "memoery free "
//              << "   " << value << endl;
//     }
// };
// // insert int0 list
// void insertnode(node *&tail, int element, int d)
// {
//     if (tail == NULL)
//     {
//         node *newnode = new node(d);
//         tail = newnode;
//         newnode->next = newnode;
//     }
//     else
//     {
//         node *curr = tail;
//         while (curr->data != element)
//         {
//             curr = curr->next;
//         }

//         // elemnt found
//         node *temp = new node(d);
//         temp->next = curr->next;
//         curr->next = temp;
//     }
// }

// bool iscircular(node *head)
// {
//     if (head == NULL)
//     {
//         return true;
//     }
//     node *temp = head->next;
//     while (temp != NULL && temp != head)
//     {
//         temp = temp->next;
//     }
//     if (temp == head)
//     {
//         return true;
//     }
//     return false;
// }

//! print the node
// void print(node *tail)
// {
//     node *temp = tail;
//     cout << tail->data << " ";
//     while (tail->next != temp)
//     {
//         cout << tail->data << "  ";
//         tail = tail->next;
//     }
//     cout << endl;
// }

// node *floyddetect(node *head)
// {
//     if (head == NULL)
//     {
//         return false;
//     }
//     node *fast = head;
//     node *slow = head;
//     while (fast != NULL && Slow != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {

//             fast = fast->next;
//         }
//         slow=slow->next;
//         if(slow==fast)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }

// // deletion code
// void deletenode(node *&tail, int value)
// {
//     if (tail == NULL)
//     {
//         cout << "list is empty" << endl;
//     }
//     else
//     {
//         node *prev = tail;
//         node *curr = prev->next;
//         while (curr->data != value)
//         {
//             prev = curr;
//             curr = curr->next;
//         }
//         prev->next = curr->next;
//         curr->next = NULL;
//         delete curr;
//     }
// }
// int main()
// {
//     node *node1 = new node(10);
//     node *head = NULL;
//     node *tail = NULL;
//     insertat
// }



// to detect the loop in the ll  lecture 47

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

// node *floyddetect(node *head)
// {
//     if (head == NULL)
//     {
//         return 0;
//     }
//     node *fast = head;
//     node *slow = head;
//     while (fast != NULL && slow != NULL)
//     {
//         fast = fast->next;
//         if (fast != NULL)
//         {

//             fast = fast->next;
//         }
//         slow=slow->next;
//         if(slow==fast)
//         {
//             cout<<"present at"<<"  "<<slow->data<<endl;
//             return slow;
//         }
//     }
//     return NULL;
// }
// node* remove(node* head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
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

// node* getstarting(node* head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     node* intersection=floyddetect(head);
//     node* slow=head;
//     if(slow!=intersection)
//     {
//         slow=slow->next;
//         intersection=intersection->next;
//     }
//     return slow;
// }
// node* removeloop(node* head)
// {
//     if(head==NULL)
//     {
//         return NULL;
//     }
//     node* startofloop=getstarting(head);
//     node* temp=startofloop;
//     while(temp->next!=startofloop)
//     {
//         temp=temp->next;
//     }
//     temp->next=NULL;
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
//     node *obj=new node(10);
//    cout<< obj->data<<endl;;
//     // cout<<obj->next<<endl;

//     //headpoint to node1
//     node* head=obj;
//     node* tail=obj;
//     print(head);
//     insertattail(tail,12);
//     print(head);
//     insertattail(tail,15);
//     print(head);
   
//     insertatposition(head,tail,4,22);
//     print(head);
//     tail->next=head->next;
   
//     if(floyddetect(head))
//     {
//         cout<<"cycle is present "<<endl;

//     }else{
//         cout<<"no cycle"<<endl; 


//     }
//        node* dislpay=getstarting(head);
//        cout<<"the staring node is    "<<dislpay->data<<endl;
//         removeloop(head);
//         print(head); 
// }



// to remove the duplicate in the sorted array 


 #include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node *next;
   
    node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    // ~node()
    // {
    //     int value=this->data;
    //     if(this->next!=NULL)
    //     {
    //         delete next;
    //         next=NULL;
    //     }
    //     cout<<"memory free"<<"  "<<value<<endl;
    // }
};
void insertathead(node* &head,int d)   // starting mai add karna ho elemnt
{
    // new node create
    node*temp=new node(d);
    temp->next=head;
    head=temp;
}
void insertattail(node* &tail,int d)    // last mai add karna ho elemnt
{
    node *temp=new node(d);
    tail->next=temp;
    tail=temp;
}
void insertatposition(node* &head,node* &tail,int postion,int d)   // middle mai agar insert karna ho
{
    if(postion==1)
    {
        insertathead(head,d);
        return;
    }
    node* temp=head;
    int count=1;
    while(count<postion-1)
    {
        temp=temp->next;
        count++;
    }
    // insert at last
    if(temp->next == NULL)
    {
        insertattail(tail,d);
        return;
    }
    //creating a node for d
    node* nodetoinsert=new node(d);
    nodetoinsert->next=temp->next;
    temp->next=nodetoinsert;

}

node* uniquesorted(node* head)
{
    if(head==NULL)
    
        return NULL;
   
    node* curr=head;
    while(curr!=NULL)
    {
        if((curr->next!=NULL)&&curr->data==curr->next->data)
        {
            node* next_next=curr->next->next;
            node* nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next=next_next ;
                   }
                   else
                   {
                       curr=curr->next;
                   }
        }
    return head;
}
    


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



void print(node* &head)           // print krr rha hu
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    node *obj=new node(10);
   cout<< obj->data<<endl;;
    // cout<<obj->next<<endl;

    //headpoint to node1
    node* head=obj;
    node* tail=obj;
    print(head);
  
    insertattail(tail,20);
    print (head);
    insertattail(tail,60);
    print (head);
    insertattail(tail,60);
    print(head);
   
    insertattail(tail,80);
    print (head);
    // node* dulpi=uniquesorted(head);
    // cout<<dulpi->data<<endl;
    head=uniquesorted(head);
    print(head);
    
   
  
}