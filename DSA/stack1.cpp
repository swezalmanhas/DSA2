// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     //  creation of the stack
//     stack<int> s;
//     // elemnt ko neetr krna hai 
//     s.push(2);
//     s.push(3);
//     s.push(8);

//     s.pop();
//     cout<<"the size of the stack   "<<s.size()<<endl;
//     cout<<"the peak of the stack   "<<s.top()<<endl;
//     if(s.empty())
//     {
//         cout<<"the stack is  empty"<<endl;
//     }else{
//         cout<<"the stack is not empty"<<endl;
//     }

// return 0;
// }


// !  implement of the stack without the stl

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//      int *arr;
//      int size;
//      int top;
//      public:
    
     
//      swezal(int size)
//      {
//          this->size=size;
//          arr=new int[size];
//          top=-1;
//      }
//      void push(int);
//      void pop();
//      int peek();
//      bool isempty();
// };

// void swezal::push(int element)
// {
//     if(size-top>1)
//     {
//         top++;
//         arr[top]=element;
//     }
//     else{
//         cout<<"stack is overflow"<<endl;
//     }
// }
// void swezal:: pop()
// {
//     if(top>=0)
//     {
//         top--;
//     }
//     else{
//         cout<<"stack is underflow"<<endl;
//     }
// }
// int swezal::peek()
// {
//     if(top>=-1)
//     {
//     return arr[top];
//      }
//      else{
//          cout<<"the stack is empty"<<endl;
//      }
// }
// bool  swezal::isempty()
// {
//     if(top==-1)
//     {
//         return true;
//     }
//     else{
//         return false;
//     }
// }
// int main(){
//     swezal obj(5);
//      obj.push(12);
//     obj.push(22);          // element to andar daal rhai hai 
//     obj.push(10);
//     obj.push(100);
//     obj.push(10);
//     obj.push(100);
   
//      if(obj.isempty())              // we are checking that stack is empty or not
//     {
//         cout<<"satck is empty"<<endl<<endl;

//     }
//     else
//     cout<<"stack is not empty"<<endl<<endl;


  
//     while(!obj.isempty())
//     {
//        cout<< obj.peek()<<' '<<endl;;
//         obj.pop();
//     }
    
   
    
// return 0;
// }



// ! reverse the string 

// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     string str;
//     cout<<"enter the string"<<endl;
//     cin>>str;

// stack<char> s;
// for(int i=0;i<str.length();i++)
// {
//     char ch=str[i];
//     s.push(ch);
// }
// string ans="";
// cout<<"answer is: "<<endl;
// while(!s.empty())
// {
//    char ch= s.top();
//    ans.push_back(ch);
//     s.pop(); 
// cout<<ans<<endl;
// }
// return 0;
// } 



// ! implemnt of the stack using linked list 
// #include<iostream>
// using namespace std;


//  template<typename T>
//  class Node {
//     	public :
//     	T data;
//     	Node *next;

//     	Node(T data) {
//         	this->data = data;
//         	next = NULL;
//     	}
// 	};

// template <typename T>
// class Stack {
	
//      Node <T> * head;
//    	 int count;
//    public:
//     Stack() {

//         count=0;
//         head=NULL;
//     }

	 
//     int getSize() {
        
//         return count;
//     }

//     bool isEmpty() {
        
//         return head==NULL;
//     }

//     void push(T a) {
        
//          Node <T>* newNode=new Node<T>(a);
//         if(head==NULL){
//             head=newNode;
//             count++;
//         }
//         else {
//         newNode->next=head;
//         head=newNode;
//         count++;
//         }
//     }

//     T pop() {
//         if(head==NULL)
//         {
//            return 0; 
//         }
//         count--;
//         Node<T> * t=head->next;
//         T a=head->data;
//         delete head;
//         head=t;
//         return a;
//     }

//     T top() {
        
//         if(head!=NULL) return head->data;
//         else return 0;
//     }
// };



// !infix to postfix



  
 #include<bits/stdc++.h>
using namespace std;

int prec(char c) {
    if(c == '^') {
        return 3;
    }
    else if(c == '*' || c == '/') {
        return 2;
    }
    else if(c == '+' || c =='-') {
        return 1;
    }
    else {
        return -1;
    }
}

string infixToPostfix(string s) {
    stack<char> st;
    string res;

    for (int i = 0; i < s.length(); i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            res += s[i];
        }
        else if(s[i] == '(') {
            st.push(s[i]);
        }
        else if(s[i] == ')') {
            while (!st.empty() && st.top() != '(')
            {
                res += st.top();
                st.pop();
            }
            if(!st.empty()) {
                st.pop(); // Popping '(' here
            }
        }
        else {
            while (!st.empty() && prec(st.top()) >= prec(s[i]))
            {
                res += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    
    while (!st.empty())
    {
       res += st.top();
       st.pop();
    }
    
    return res;
}

int main() {
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    cout<<infixToPostfix(exp);
    return 0;
}