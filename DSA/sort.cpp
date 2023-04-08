  
// //   SELECTION SORT
  
//   #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10];
//     int size;
//     public:
//     void input();
//     void sort();
//     void display();
// };
// void swezal::input()
// {
//     cout<<"ENTER THE SIZE OF ARRAY"<<endl;
//     cin>>size;
//     cout<<"ENTER THE ARRAY "<<endl;
//     for(int i=0;i<size;i++)
//     {
//        cin>> arr[i];
//     }
// }
// void swezal::sort()
// {
//    {
//     for(int i=0;i<size;i++)
//     {
//         int minindex=i;
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[j]>arr[minindex])
//             {
//                 minindex=j;
//             }
//         }
//             swap(arr[minindex],arr[i]);
//     }
// }
// }
// void swezal::display()
// {
//       cout<<"the sorted array is"<<endl;
//     for(int i=0;i<size;i++)
//     {
//       cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.sort();
//     obj.display();

// return 0;
// }



          // BUBBLE SORT
//    #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10];
//     int size;
//     public:
//     void input();
//     void sort();
//     void display();
// };
// void swezal::input()
// {
//     cout<<"ENTER THE SIZE OF ARRAY"<<endl;
//     cin>>size;
//     cout<<"ENTER THE ARRAY "<<endl;
//     for(int i=0;i<size;i++)
//     {
//        cin>> arr[i];
//     }
// } 
// void swezal::sort()
// {
//     for(int i=1;i<size;i++)
//     {
//         bool swapped=false;
//         for(int j=0;j<size-i;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//     if(swapped==false)
//     break;
//     }
// }   
// void swezal::display()
// {
//       cout<<"the sorted array is"<<endl;
//     for(int i=0;i<size;i++)
//     {
//       cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.sort();
//     obj.display();

// return 0;
// }     


                        //  INSERTION SORT

//                           #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10];
//     int size;
//     public:
//     void input();
//     void sort();
//     void display();
// };
// void swezal::input()
// {
//     cout<<"ENTER THE SIZE OF ARRAY"<<endl;
//     cin>>size;
//     cout<<"ENTER THE ARRAY "<<endl;
//     for(int i=0;i<size;i++)
//     {
//        cin>> arr[i];
//     }
// } 
// void swezal::sort()
// {
//         int j;
//     for(int i=1;i<size;i++)
//     {
//         int temp=arr[i];
//         for(j=i-1;j>=0;j--)
//         {
//             if(arr[j]>temp)
//             {
//                 arr[j+1]=arr[j];
//             }
//             else{
//                 break;
//             }
//         }
//         arr[j+1]=temp;
//     }
    
// }
// void swezal::display()
// {
//       cout<<"the sorted array is"<<endl;
//     for(int i=0;i<size;i++)
//     {
//       cout<<arr[i]<<endl;
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.sort();
//     obj.display();

// return 0;
// }  
//   #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     char arr[10];
//     int size;
//     public:
//     void input();
//     void sort();
//     void display();
// };
// void swezal::input()
// {
//     cout<<"ENTER THE SIZE OF ARRAY"<<endl;
//     cin>>size;
//     cout<<"ENTER THE ARRAY "<<endl;
//     for(int i=0;i<size;i++)
//     {
//        cin>> arr[i];
//     }
// }
// void swezal::sort()
// {
//    {
//     for(int i=0;i<size;i++)
//     {
//         int minindex=i;
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[j]>arr[minindex])
//             {
//                 minindex=j;
//             }
//         }
//             swap(arr[minindex],arr[i]);
//     }
// }
// }
// void swezal::display()
// {
//       cout<<"the sorted array is"<<endl;
//     for(int i=0;i<size;i++)
//     {
//       cout<<arr[i];
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.sort();
//     obj.display();

//     if('a'<'b'){
//         cout<<endl<<"YES the character is sorted";
//     }

// return 0;
// }



// ! qucik sort

#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int s,int e)
{
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivot)
    {
        cnt++;
    }
    }
    int pivotIndex=s+cnt;
    swap(arr[pivotIndex],arr[s]);

    int i=s,j=e;
    while(i<pivotIndex && j>pivotIndex)
    {
         while(arr[i]<pivot)
         {
             i++;
         }
         while(arr[j]>pivot)
         {
             j--;
         }
         if(i<pivotIndex&& j>pivotIndex)
         {
             swap(arr[i++],arr[j--]);
         }
    }
    return pivotIndex;
}
void quicksort(int arr[],int s,int e)
{
if(s>=e)
return;
int p=partition(arr,s,e);

quicksort(arr,s,p-1);
//right wala part
quicksort(arr,p+1,e);

}
int main(){
  int arr[10]={2,1,4,3,0,23,4,7,90,11};
  int n= 10;
  quicksort(arr,0,n-1);
  for(int i=0;i<n;i++)
  {
      cout<<arr[i]<<"   ";
  }  
  cout<<endl;
    
return 0;
}