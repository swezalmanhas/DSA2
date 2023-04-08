//   //linear search with help of class

// #include<bits/stdc++.h>
// using namespace std;
// class swezal{
//       int arr[10000];
//       int size;
//       int key;
//       int flag =0;
//       public:
//       void input();
//       void display();

// };
// void swezal::input()
// {
//     cout<<"enter the number of element"<<endl;
//     cin>>size;
//         cout<<"enter the array ";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];

//     }
//     cout<<"enter the element to be find"<<endl;
//     cin>>key;
// }
// void swezal::display()
// {
//     int i;
//     for( i=0;i<size;i++) 
//     {
//         if(arr[i]==key)
//         {
//             flag=1;
//             cout<<arr[i]<<endl;
//             break;
//         }
//         else continue;
//     }
//     if(flag==1)
//     {
//         cout<<"the element is found on the psoition"<<endl<<i+1<<endl;
        
//     }else{
//         cout<<"the elemnet is not found"<<endl;
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.display();

// return 0;
// }


// LINAER SEARCH WITH HTE HELP OF FUNCTION
// #include<bits/stdc++.h>
// using namespace std;
// bool search(int arr[],int size,int key)
// {
//     for(int i=0;i<size;i++){
//         if(arr[i]==key)
//         {
//             return 1;
//         }
//     }
//     return 0;
// }
// int main(){
//     int i;
//     int size;
//     int arr[100000];
//     int key;
//     cout<<"enter the size of the array "<<endl;
//     cin>>size;
//     cout<<"enter the elemnt in the arary "<<endl;
//     for( i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"enter the elemnt to be found"<<endl;
//     cin>>key;
//      bool found=search(arr,size,key);
// if(found)
// {
//     cout<<"key is present "<<arr[i]<<endl;
// }else{
//     cout<<"key is not present"<<endl;
// }
// return 0;
// }


// reverse the array 

// #include<bits/stdc++.h>
// using namespace std;
// class rev
// {
//     int arr[10000];
//     int n;
//     public:
//     void input();
//     void reverse();
//     void display();


// };
// void rev::input()

// {
//     cout<<"NETER TEH SIZE OF ARRYA"<<endl;
//     cin>>n;
//     cout<<"enter the array"<<endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    

// }
// void rev::reverse(){
//     int start=0;
//     int end=(n-1);
//     while(start<=end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

// }
// void rev::display()
// {
//     int i;
//      cout<<"the reverse array is "<<endl;
//     for( i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
        
    
// }
// int main(){
//     rev obj;
//     obj.input();
//     obj.reverse();
//     obj.display();

// return 0;
// }


#include<iostream>
using namespace std;


int main()
{
    int n;
    
    cout<<"Enter the size of array "<<endl;
    
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(int m=j;m<n;m++)
                {
                    arr[m]=arr[m+1];
                }
                j--;
                n--;
            }
        }
    }
    cout<<"DUPLICATE NUMBER IS REMOVED"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}