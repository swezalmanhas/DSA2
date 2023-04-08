// ! sorting of the array 

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
// node* sorted(node* head)
// {
//     int zerocount=0;
//     int onecount=0;
//     int twocount=0;
//     node*temp=head;
//     while(temp!=NULL)
//     {
//         if(temp->data==0)
//         zerocount++;
//         else if(temp->data==1)
//         onecount++;
//         else if(temp->data==2)
//         twocount++;
//         temp=temp->next;
//     }
//     temp=head;
//     while(temp!=NULL)
//     {
//         if(zerocount!=0)
//         {
//             temp->data=0;
//             zerocount--;
//         }
//         else if(onecount!=0)
//         {
//             temp->data=1;
//             onecount--;
//         }
//         else if(twocount!=0)
//         {
//             temp->data=2;
//             twocount--;
//         }
//         temp=temp->next;
//     }
//     return head;
// }
// node* sorted2(node* head)
// {
//     node* temp =sorted(head);
//     return temp;
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
// node *obj=new node(2);
//    cout<< obj->data<<endl;;
//     // cout<<obj->next<<endl;

//     //headpoint to node1
//     node* head=obj;
//     node* tail=obj;
//     print(head);
//     insertathead(head,0);
//     print(head);
//     insertathead(head,2);
//     print(head);
   
//     insertattail(tail,1);
//     print (head);
//     insertattail(tail,0);
//     print (head);
//     insertattail(tail,2);
//     print (head);
//     cout<<"the sorted linked list is"<<endl;
//    head=sorted2(head);
//   print(head);
 
  
//    }



// ! merge sort in the ll


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
node* findMid(node* head) {
    node* slow = head;
    node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}

node* merge(node* left, node* right) {
    
    if(left == NULL)
        return right;
    
    if(right == NULL)
        return left;
    
    node* ans = new node(-1);
    node* temp = ans;
    
    //merge 2 sorted Linked List
    while(left != NULL && right != NULL) {
        if(left -> data < right -> data ) {
            temp -> next = left;
            temp = left;
            left = left -> next;
        }
        else
        {
            temp -> next = right;
            temp = right;
            right = right -> next;
        }
    }
    
    while(left != NULL) {
        temp -> next = left;
        temp = left;
        left = left -> next;
    }
    
    while(right != NULL) {
        temp -> next = right;
        temp = right;
        right = right -> next;
    }
    
    ans = ans -> next;
    return ans;
    
}


node* mergeSort(node *head) {
    //base case
    if( head == NULL || head -> next == NULL ) {
        return head;
    }
    
    // break linked list into 2 halvs, after finding mid
    node* mid = findMid(head);
    
    node* left = head;
    node* right = mid->next;
    mid -> next = NULL;
    
    //recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);
    
    //merge both left and right halves
    node* result = merge(left, right);
    
    return result;
}








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
node *obj=new node(2);
   cout<< obj->data<<endl;;
    // cout<<obj->next<<endl;

    //headpoint to node1
    node* head=obj;
    node* tail=obj;
    print(head);
    insertathead(head,2);
    print(head);
    insertathead(head,42);
    print(head);
   
    insertattail(tail,1);
    print (head);
    insertattail(tail,9);
    print (head);
    insertattail(tail,69);
    print (head);
    cout<<"the sorted linked list is"<<endl;
   head=mergeSort(head);
    print(head);
 
  
   }
