// #include<bits/stdc++.h> 
// using namespace std; 
  
// class Stack{ 
//     queue<int>q;
    
// public: 
//     void push(int val); 
//     int pop(); 
//     int top(); 
//     bool empty(); 
// }; 
  
// void Stack::push(int val){ 
//     int s = q.size(); 
  
//     q.push(val); 
  
//     for(int i=0; i<s; i++){ 
//         q.push(q.front()); 
//         q.pop(); 
//     } 
// } 
  
// int Stack::pop(){ 
//     if(q.empty()){ 
//         cout<<"No elements\n";
//         return -1;
//     }    
//     else{
//         int x = q.front();
//         q.pop();
//         return x;
//     }  
// } 
  
// int  Stack::top(){ 
//     return (q.empty())? -1 : q.front(); 
// } 
  
// bool Stack::empty(){ 
//     return (q.empty()); 
// } 
  
// int main(){ 
//     Stack s;
    
//     s.push(10); 
//     s.push(20); 
//     cout<<"Top : "<<s.top()<<endl; 
//     cout<<"Pop : "<<s.pop()<<endl; 
//     s.push(30); 
//     cout<<"Pop : "<<s.pop()<<endl;
//     cout<<"Top : "<<s.top()<<endl; 
//     return 0; 
// }




#include<iostream>
using namespace std;

void TOH(int n, char s, char a, char d) {
   static int count = 0;          //store number of counts
   if(n == 1) {
      count++;
      cout << count<< ". Move disk " << n << " from "<<s <<" to "<<d<<endl;
      return;      //base case, when only one disk
   }

   TOH(n-1, s, d, a);               //recursive call the function
   count++;
   cout << count<< ". Move disk " << n << " from "<<s <<" to"<<d<<endl;
   TOH(n-1, a, s, d);
}

int main() {
   int n;
   cout << "Enter the number of disks: ";
   cin >> n;
   TOH(n, 'A','B','C');
}



