#include<bits/stdc++.h>          // hcf of the number
using namespace std;
int gcd(int a,int b)
{
    if(a==0)
    return b;
    if(b==0)
    return a;

    while(a!=b)
    {
         if(a>b)
         {
             a=a-b;
         }
         else{
             b=b-a;
         }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter the number a na b"<<endl;
    cin >>a;
    cin>>b;
    int ans=gcd(a,b);
    cout<<"the gcd of the number is "<<a<<"  "<<b<<"  "<< ans<<endl;
    return 0;

return 0;
}