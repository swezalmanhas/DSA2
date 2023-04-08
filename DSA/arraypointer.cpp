#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[10]={0,1,2,3,4,5,6,7,8,9 };
cout<<"the addres of first elemnt is"<<&arr[0]<<endl;
cout<<arr<<endl;
cout<<*arr<<endl;
cout<<*arr+1;
cout<<*(arr+1);
int i=3;
cout<<i[arr]<<endl;          // imp   

int temp[10];
cout<<sizeof(temp)<<endl;
int *ptr=&temp[0];
cout<<sizeof(ptr)<<endl;
cout<<sizeof(*ptr)<<endl;
cout<<sizeof(&ptr)<<endl;
return 0;
}