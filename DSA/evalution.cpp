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
