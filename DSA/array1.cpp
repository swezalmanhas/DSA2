// #include<bits/stdc++.h>
// using namespace std;
// void print(int arr[],int size)
// {
//     cout<<"priting the array"<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
// }
// int main(){
// int num[15];
// cout<<"value at 14 index"<<num[14]<<endl;
// int second[3]={2,3,4};
// cout<<"value od  second index"<< second[2]<<endl;
// int third[15]={2,5};
// int n=15;
// print(third,15);
// //initialising all array with zero.
// int fourth[10]={0};
// print(fourth,10);
// //initialising all array with 1 but noot possible with below code
// int fifth[10]={1};
// print(fifth,10);
// int fifthsize=sizeof(fifth)/sizeof(int);
// cout<<fifthsize<<endl;
// char ch[5]={'a','b','n','i'};
// cout<<"prit the character"<<endl<<ch[2];
// return 0;
// // }


// 2.  find the max and min in array 
// #include<bits/stdc++.h>
// using namespace std;
// int getmax(int num[], int n)
// {
//     int max=INT_MIN;
//     for(int i=0;i<n;i++){
//         if(num[i]>max)
//         {
//             max=num[i];
//         }
//     }
//         return max;
// }
// int getmin(int num[], int n)
// {
//     int min=INT_MAX;
//     for(int i=0;i<n;i++){
//         if(num[i]<min)
//         {
//             min=num[i];
//         }
//     }
//         return min;
// }
// int main(){
//     int size;
//     cin>>size;
//     int num[100];
//     for(int i=0;i<size;i++)
//     {
//         cin>>num[i];
//     }
//     cout<<"maximum number is "<<getmax(num,size);
//     cout<<"minimum number is "<<getmin(num,size);

// return 0;
// }

// 3. scope 
// #include<bits/stdc++.h>
// using namespace std;
// void update(int arr[],int n)
// {
//     cout<<"inside the function"<<endl;
//     arr[0]=30;                                // hmnai array ko udpate krr diya hai isliyai main fumnction mai bhi 30 he print hua hai
//     for(int i=0;i<3;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
//     cout<<"going back to main function"<<endl;
// }
// int main(){
//     int arr[3]={1,2,3};
//     update(arr,3);                                   
//     cout<<"printing the main  function"<<endl;
//      for(int i=0;i<3;i++)
//     {
//         cout<<arr[i]<<endl;
//     }


// return 0;
// }


// 4.sum of all elemnt in array

#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
    int sum=0;
    int pro=1;
    for(int i=0;i<n;i++)
    {
         sum=sum+arr[i];
         pro=pro*arr[i];
    }
    cout<< "the sum of the arrya element is"<<sum<<endl;
     cout<< "the product of the arrya element is"<<pro<<endl;
}
int main(){
      int n;
    cout<<"enter the size of array"<<endl;
     cin>>n;
     int num[100];
     for(int i=0;i<n;i++)
     {
         cin>>num[i];
    }
    print(num,n);
   

return 0;
}