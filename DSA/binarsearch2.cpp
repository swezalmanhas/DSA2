// !1. to find the first and last occuerence in th array

#include<bits/stdc++.h>
using namespace std;
class swezal
{
    int loc_first;
    int loc_last;
    int arr[10];
    int size;
    int key;
    public:
    void input();
    void first();
    void last();
    void display_first();
    void display_last();
};
void swezal::input()
{
    cout<<"ENTER THE SIZE OF ARRAY"<<endl;
    cin>>size;
    cout<<"enter the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the element to be find"<<endl;
    cin>>key;
}
void swezal::first()
{
    
    int start=0;
    int end=(size-1);
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            loc_first=mid;
            end=mid-1;
        
        }
        else{
            if(arr[mid]<key)
            {
                start=mid+1;
            } else{
                end=mid-1;
            }
        }
         mid=start+(end-start)/2;
    }
}
void swezal::display_first()
{
   if(loc_first>=0)
   {
       cout<<"the postion of the first occurence  array"<<endl<<loc_first<<endl;
   }
   else{
       cout<<"element are not present"<<endl;
   }
}
void swezal::last(){
    
    int start=0;
    int end=(size-1);
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            loc_last=mid;
            start=mid+1;
        }
        else{
            if(arr[mid]<key)
            { 
                start=mid+1;
            } else{
                end=mid-1;
            }
        }
         mid=start+(end-start)/2;
    }

}

void swezal::display_last()
{
       if(loc_last>=0)
   {
       cout<<"the postion of the last occurence array"<<endl<<loc_last<<endl;
   }
   else{
       cout<<"element are not present"<<endl;
   }

}


int main(){
    swezal obj;
    obj.input();
    obj.first();
    obj.last();
    obj.display_first();
    obj.display_last();

return 0;
}


//! to find the peak of the mountain.

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10];
//     int loc;
//     int size;
//     public:
//     void input();
//     void peak();
    
// };
// void swezal::input()
// {
//     cout<<"enter the size of array"<<endl;
//     cin>>size;
//     cout<<"enter the array "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
// }
// void swezal ::peak()
// {
//     int start=0;
//     int end=(size-1);
//     int mid=start+(end-start)/2;
//     while(start<end)
//     {
//         if(arr[mid]<arr[mid+1])
//         {
//             start=mid+1;
//             loc=start;
//         }else{
//             end=mid;
//         }

//           mid=start+(end-start)/2;
//     }
//     cout<<"the peak element in the array"<<endl<<arr[mid]<<endl;
//     cout<<"the index of the element "<<endl<<loc;
// }

// int main(){
//     swezal obj;
//     obj.input();
//     obj.peak();
    

// return 0;
// }



//! find the pivot array

// #include<bits/stdc++.h>
// using namespace std;
// class swezal 
// {
//     int arr[10];
//     int size;
//     public:
//     void input();
//     void pivot();
// };
// void swezal::input()
// {
//     cout<<"enteer the size of array"<<endl;
//     cin>>size;
//     cout<<"enter the element in the array"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
// }
// void swezal::pivot()
// {
//     int i;
//     for(i=0;i<size;i++) 
//     {
//         if(arr[i]<arr[i+1])
//     {
//         // cout<<"the number is not pivot"<<end;
//     }
//     else{
//         cout<<"the pivot array is "<<endl<<arr[i+1]<<endl;
//         cout<< "the index of the pivot array is "<<endl<<i+1<<endl;
//     }
    
  
// }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.pivot();
// return 0;
// }


//! pivot by the binary search

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int loc;
//     int arr[10];
//     int size;
//     public:
//     void input();
//     void pivot();
//     // void display();
// };
// void swezal::input()
// {
//     cout<<"the size of the array"<<endl;
//     cin>>size;
//     cout<<"enter the array"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
// }
// void swezal::pivot()
// {
//     int start=0;
//     int end=(size-1);
//     int mid=start+(end-start)/2;
//     while(start<end)
//     {
//       if(arr[mid]>=arr[0])
//       {
//           start=mid+1;
//          loc=start;
//       }else
//       {
//           end=mid;
//       }
      
//     mid=start+(end-start)/2;
//     }
//     cout<<"THE PIVOT ELEMENT IS"<<endl<<arr[mid]<<endl;
    
//     cout<<"the index of pivot element is" <<endl<<loc<<endl;
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.pivot();

// return 0;
// }