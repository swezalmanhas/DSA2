// #include<bits/stdc++.h>
// using namespace std;
// class swezal{
//     int arr[10000];
//     int size;
//     int key;
//     int loc;
//     public:
//     void input();
//     void search();
//     void display();
// };
// void swezal::input()
// {
//     cout<<"ENTER THE SIZE OF ARRAY"<<endl;
//     cin>>size;
//     cout<<"enter the array "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"enter the element to be find"<<endl;
//     cin>>key;
// }
// void swezal::search()
// {
//     int start=0;
//     int end=size-1;
//     int mid=start+(end-start)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==key)
//         {
//             loc= mid;
//             break;
//         }
//         // go to right part.
//         if(key>arr[mid])
//         {
//             start=mid+1;
//         }else{
//             end=mid-1;
//         }
//         mid=start+(end-start)/2;
        
//     }

// }
// void swezal::display()
// {
//    if(loc>=0)
//    {
//        cout<<"the postion of the array"<<endl<<loc<<endl;
//    }
//    else{
//        cout<<"element are not present"<<endl;
//    }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.search();
//     obj.display();

// return 0;
// }



// binary search with the help of function

// #include<bits/stdc++.h>
// using namespace std;
// int search(int arr[],int size, int key)
// {
//     int start=0;
//     int end=(size-1);
//     int mid=start+(end-start)/2;
//     while(start<=end)
//     {
//         if(arr[mid]==mid)
//         {
//             return mid;
//         }
//         else
//         {
//             // go right side 
//             if(key>arr[mid])
//             {
//                 start=start+1;
//             }
//             else{
//                 end=end-1;
//             }
//              mid=start+(end-start)/2;
            
//         }
//     }
// }
// int main(){
//     int size;
//     int key;
//     int arr[100];
//     cout<<"enter the number of elemnt in array"<<endl;

//     cin>>size;
//      cout<<"enter the  elemnt in array"<<endl;
//      for(int i=0;i<size;i++)
//      {
//          cin>>arr[i];
//      }
//      cout<<"enetr the elemnt to be found"<<endl;
//      cin>>key;
//      int index = search(arr,size,key);
//      cout<<"the postion of the number is "<<index<<endl;
    

// return 0;
// }

// #include<iostream>
// using namespace std;
// #include<algorithm>


// int main()
// {
//     int m[5][5],n[5][5],result[5][5];
    
//     cout<<"Enter the value of First Matrix"<<endl;
    
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             cin>>m[i][j];
//         }
//     }
    
//     cout<<"Enter the value of Second Matrix"<<endl;
    
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             cin>>n[i][j];
//         }
//     }
    
//     int sum;
    
//     for(int i=0;i<5;i++)
//     {   
//         for(int j=0;j<5;j++)
//         {
//             result[i][j]=0;
//             for(int k=0;k<3;k++)
//             {
//                 result[i][j]+=m[i][k]*n[k][j];
//             }
//         }
//     }
    
//     for(int i=0;i<5;i++)
//     {
//         for(int j=0;j<5;j++)
//         {
//             cout<<result[i][j]<<" ";
//         }
//         cout<<endl;
//     }

    
// }

#include <iostream>
using namespace std;
int missing_number(int arr[], int n)
{
     int a = 0, b = n - 1;
     int mid;
     while ((b - a) > 1)
     {
          mid = (a + b) / 2;
          if ((arr[a] - a) != (arr[mid] - mid))
               b = mid;
          else if ((arr[b] - b) != (arr[mid] - mid))
               a = mid;
     }
     return (arr[a] + 1);
}

int main()
{
     int arr[] = {1, 2, 3, 4, 5, 6, 8};
     int n = sizeof(arr) / sizeof(arr[0]);
     cout << "Missing number:" << missing_number(arr, n);
}


// #include<iostream>
// using namespace std;
// #include<algorithm>


// int main()
// {
//     int n;
//     cout<<"Enter the size "<<endl;
    
//     cin>>n;
//     cout<<endl;
//     int arr[n][n];
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>arr[i][j];            
//         }
//     }
    
//     cout<<"\n Orignal Matrix"<<endl;
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<' ';            
//         }
//         cout<<endl;
//     }
    
//     for(int i=0;i<n;i++)
//     {
//         for(int j=i;j<n;j++)
//         {
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][i];
//             arr[j][i]=temp;
//         }
//     }
//     cout<<endl;
//     cout<<"Transpose of matrix"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<arr[i][j]<<' ';            
//         }
//         cout<<endl;
//     }
    
// }

