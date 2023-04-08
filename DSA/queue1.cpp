// ! normal function in quene

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// queue<int> q;
// q.push(10);
// q.push(20);
// q.push(30);
// q.push(40);
// q.push(50);
// q.push(60);
// cout<<"size of the queue is "<< q.size()<<endl;
// cout<<"the top elemnt "<<q.front()<<endl;
// cout<<"the last elemnt in the quene "<<q.back()<<endl;
// q.pop();
// cout<<"the top elemnt "<<q.front()<<endl;
// q.pop();
// cout<<"the top elemnt "<<q.front()<<endl;
// if(q.empty())
// {
//     cout<<"quene is  empty"<<endl;
// }else{
//     cout<<"quene is not empty"<<endl;
// }


// return 0;
// }


// !implement of the quene without stack and with the help of the array 

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     public:
//     swezal(int size)
//     {
//         this->size=size;
//          arr=new int[size];
//          front=0;
//          rear=0;

//     }
//     bool is_empty();
//     void quene(int);
//     int dequenue();
//     int qfront();
    
// };
// void swezal::quene(int data)       help to push the element
// {
//     if(rear==size)
//     {
//         cout<<"quene is full"<<endl;
//     }
//     else{
//         arr[rear]=data;
//         rear++;
//     }
// }
// int swezal::dequenue()          // help to pop the element
// {
//     int ans=arr[front];
//     if(front==rear)
//     {
//         return -1;
//     }
//     else{
//         arr[front]=-1;
//         front++;
//         if(front==rear)
//         {
//             front=0;
//             rear=0;
//         }
//         return ans;
//     }
// }
// int swezal::qfront()    // print krr rhaa hai 
// {
//     if(front==rear)
//     {
//         return -1;
//     }
//     else{
//         return arr[front];
//     }
// }
// bool swezal::is_empty()
// {
//     if(front==rear)
//     {
//         return true;
//     }else
//     {
//         return false;

//     }
// }
// int main(){
//    swezal obj(10);
//    obj.quene(10);
  
//    obj.quene(20);
  
//     obj.quene(30);

//    obj.quene(40);
 
//     obj.quene(50);
 
//    obj.quene(60);
  
  
//    cout<<obj.qfront()<<endl;

//   if(obj.is_empty()) 
//   {
//       cout<<"the queue is empty"<<endl;
//   }
//       else{
//           cout<<"the quene is not empty"<<endl;
//       }
       

//    while(!obj.is_empty())
//    {
//     cout<<obj.qfront()<<endl;
//     obj.dequenue();
//    }

// return 0;
// }

//! implement of the circular quene

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int *arr;
//     int front;
//     int rear;
//     int size;
//     public:
//     swezal(int size)
//     {
//         this->size=size;
//         arr=new int[size];
//         front=-1;
//         rear=-1;

//     }
//     bool enquenue(int);
//     int dequeneue();
//     int qfront();
//     bool is_empty();

// };
// bool swezal::enquenue(int data)
// {
//     if(front==0&&rear==size-1||rear==(front-1)%(size-1))
//     {
//         cout<<"quene if full"<<endl;
//         return false;
//     }
//     else if(front==-1)// first element aaya hao push karna kai liyai
//     {
//         front=rear=0;
//         arr[rear]=data;

//     }
//     else if(rear==size-1&&front!=0)
//     {
//         rear=0;
//         arr[rear]=data;

//     }
//     else{
//         rear++;
//         arr[rear]=data;
//             }
// }
// int swezal::dequeneue()
// {
//     if(front==-1)
//     {
//         cout<<"queue is empty"<<endl;
//         return -1;
//     }
//     int ans=arr[front];
//     arr[front]=-1;
//     if(front==rear)
//     {
//         front=rear=-1;
//     }
//     else if(front==size-1)
//     {
//         front=0;   // to maintai cylic nature
//     }
//     else{
//         front++;
//     }
//     return ans;
// }
// int swezal::qfront()    // print krr rhaa hai 
// {
//     if(front==rear)
//     {
//         return -1;
//     }
//     else{
//         return arr[front];
//     }
// }
// bool swezal::is_empty()
// {
//     if(front==rear)
//     {
//         return true;
//     }else
//     {
//         return false;

//     }
// }
// int main(){
//     swezal obj(10);
//     obj.enquenue(20);
//     obj.enquenue(30);
//     obj.enquenue(40);
//     obj.enquenue(50);
//     obj.enquenue(60);
//     while(!obj.is_empty())
//     {
//        cout<<obj.qfront()<<"   ";
//        obj.dequeneue();
//     }
//      cout<<obj.qfront()<<"   ";

// return 0;
// }

//!implement the double ended quenue with stl

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// deque<int> d;
// d.push_front(10);
// d.push_back(20);
// d.push_front(5);
// d.pop_back();
// cout<<d.front()<<"   ";
// cout<<d.back()<<"   ";
// if(d.empty())
// {
//     cout<<"quene is empty"<<endl;

// }
// else{
//     cout<<"not empty"<<endl;
// }
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int size;
//     int *arr;
//     int front=-1;
//     int rear=-1;
//     public:
//     swezal(int size)
//     {
//         this->size=size;
//         arr=new int[size];
//         front=-1;
//         rear=-1;
//     }
//     bool pushfornt(int);
//     bool pushback(int);
//     bool popback();
//     bool popfront();
//     bool isempty();
//     int getfront();
// };
// bool swezal::pushfornt(int data)
// {
//     if(front==0&&rear==size-1||rear==(front-1)%(size-1))
//     {
//     return false;
//  } 
//  else if(front==-1)
//  {
//      front=rear=0;
//  }
//  else if(front==0)
//  {
//      front=size-1;
//  }
//  else{
//      front--;
//  }
//  arr[front]=data;
//  return true;
// }
// bool swezal::pushback(int data)
// {
//       if(front==0&&rear==size-1||rear==(front-1)%(size-1))
//     {
//     return false;
//  } 
//  else if(front==-1)
//  {
//      front=rear=0;
//  }
//  else if(rear==size-1&&front!=0)
//  {
//      rear=0;
//  }
//  else{
//      rear++;
//  }
//  arr[rear++]=data;
//  return true;
 
// }
// bool swezal::popfront()
// {
//       if(front==-1)
//     {
//         cout<<"queue is empty"<<endl;
//         return -1;
//     }
//     int ans=arr[front];
//     arr[front]=-1;
//     if(front==rear)
//     {
//         front=rear=-1;
//     }
//     else if(front==size-1)
//     {
//         front=0;   // to maintai cylic nature
//     }
//     else{
//         front++;
//     }
//     return ans; 
// }
// bool swezal::popback()
// {
//      if(front==-1)
//     {
//         cout<<"queue is empty"<<endl;
//         return -1;
//     }
//     int ans=arr[rear];
//     arr[rear]=-1;
//     if(front==rear)
//     {
//         front=rear=-1;
//     }
//     else if(rear==0)
//     {
//         rear=size-1;   // to maintai cylic nature
//     }
//     else{
//         rear--;
//     }
//     return ans;
// }
// int swezal:: getfront()
// {
//     if(isempty())
//     {
//         return -1;
//     }
//     return arr[rear];
// }
// bool swezal:: isempty()
// {
//     if(front==rear)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
// swezal obj(10);

// obj.pushfornt(10);
// obj.pushback(20);
// cout<<obj.getfront();
// return 0;
// }



// !stack using qurne
#include<iostream>
using namespace std;
#include<queue>

class MyStack
{
    queue<int> q1;
    queue<int> q2;

    public:

    void push(int a)
    {
        while(q1.size()!=0)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.push(a);

        while(q2.size()!=0)
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        int a=q1.front();
        q1.pop();
        return a;
    }

    int size()
    {
        return q1.size();
    }

};

int main()
{
    MyStack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.pop()<<endl;

    cout<<s.size()<<endl;
        
}





class MyQueue
{
    stack<int> s1;
    stack<int> s2;

    public:

    void push(int a)
    {
        s1.push(a);
    }

    int pop()
    {
        while(s1.size()!=0)
        {
            s2.push(s1.top());
            s1.pop();
        }
        int ans=s2.top();
        s2.pop();

        while(s2.size()!=0)
        {
            s1.push(s2.top());
            s2.pop();
        }

        return ans;
    }

    int front()
    {
        while(s1.size()!=0)
        {
            s2.push(s1.top());
            s1.pop();
        }

        int ans=s2.top();

        while(s2.size()!=0)
        {
            s1.push(s2.top());
            s2.pop();
        }

        return ans;
    }

    int size()
    {
        return s1.size();
    }

    bool isEmpty()
    {
        return s1.size()==0;
    }

};

int main()
{
    MyQueue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout<<q.size()<<endl;

    cout<<q.front()<<endl;

    while(q.size()!=0)
    {
        cout<<q.pop()<<' ';
    }

}