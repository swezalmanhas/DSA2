// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  string ch;
//  int count=0;
//  cout<<"ENTER THE STRING"<<endl;
//  cin>>ch;
//  for(int i=0;i<ch.length();i++)
//  {
//      count++;
//  }
//  cout<<count;
// return 0;
// }

//  REVERSE THE STRING

#include<bits/stdc++.h>
using namespace std;
int main(){
string ch;
cout<<"enter teh string"<<endl;
cin>>ch;
int start=0;
int end=ch.size()-1;
while(start<end)
{
    swap(ch[start++],ch[end--]);
}
if(ch[start++]==ch[end--])
{
    cout<<"string is palidrome"<<endl;
}
else
{
    cout<<"string is not palidrome"<<endl;
}
cout<<"THE REVERSE OF THE SRING"<<"  "<< ch;
return 0;
}