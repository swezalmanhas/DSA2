#include<bits/stdc++.h>
using namespace std;
class heap
{
    public:
    int arr[100];
    int size=0;
    void insert(int );
    void print();
    void dele();
    void heapify(int,int,int);

};
void heap::insert(int val)
{
    size=size+1;
    int index=size;
    arr[index]=val;
    while(index>1)
    {
        int parent=index/2;
        if(arr[parent]<arr[index])
        {
            swap(arr[parent],arr[index]);
            index=parent;
        }
        else{
            return;
        }
    }
}
void heap::print()
{
    for(int i=1;i<=size;i++)
    {
        cout<<arr[i]<<"   ";
    }
    cout<<endl;
}
void heap::dele()
{
    if(size==0)
    {
        cout<<"nothing to delete"<<endl;
        return;
    }
    int i;
    arr[i]=arr[size];
    size--;
    while(i<size)
    {
        int leftindex=2*i;
        int rightindex=2*i+1;
        if(leftindex<size&&arr[i]<arr[leftindex])
        {
            swap(arr[i],arr[leftindex]);
            i=leftindex;
        }
        else
        if(rightindex<size&&arr[i]<arr[rightindex])
        {
          swap(arr[i],arr[rightindex]);
            i=rightindex;   
        }
        else{
            return;
        }
        
            }
}
void heap::heapify(int arr[],int i,int n)
{
    int largest=i;
    int left=2*i;
    int right=2*i+1;
    if(left<n&&arr[largest]<arr[left])
    {
        largest=left;
    }
    if(right<n&&arr[largest]<arr[right])
    {
        largest=right;
    }
    if(largest!=i)
    {
        swap(arr[largest,arr[i]]);
        heapify(arr,n,largest);
    }
}
int main(){
    heap obj;
    obj.insert(50);
    obj.insert(55);
    obj.insert(53);
    obj.insert(54);
    obj.insert(52);
    obj.print();
    obj.dele();
    obj.print();
    int arr[6]={-1,54,53,55,52,50};
    int n;
    for(int i=n/2;i>0;i--)
    {
        heapify(arr,n,i);
    }
    cout<<"pruinting the array now"<<endl;
    for(int i=1;i<n;i++)
    {
        cout<<arr[i]<<"  ";
    }


return 0;
}