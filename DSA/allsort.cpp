
// ! count sorting 

// #include <bits/stdc++.h>
// using namespace std;
// void countsort(int arr[], int n)
// {
//         int k=arr[0];  //max
//     for (int i=0;i<n;i++)
//     {
//         k=max(k,arr[i]);
//     }
//     int count[100]={0};
//     for(int i=0;i<n;i++)
//     {
//         count[arr[i]]++;
//     }
//     for(int i=1;i<=k;i++)
//     {
//         count[i]=count[i]+count[i-1];
//     }
//     int output[n];
//     for(int i=n-1;i>=0;i--)
//     {
//         output[--count[arr[i]]]=arr[i];
//     }
//     for (int i=0;i<n;i++)
//     {
//         arr[i]=output[i];
//     }
// }


// int main()
// {
//     int n;
//     cout << "Enter the size of the array: " << endl;
//     cin >> n;
//     int arr[n];
//     cout << "Enter the elements of the array: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     countsort(arr, n);
//     cout << "Sorted array is: " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// ! radix sort
// #include<bits/stdc++.h>
// using namespace std;
// void countsort(int arr[],int n, int pos){
//     int maximum=arr[0];
//     for(int i=0;i<n;i++){
//         maximum=max(arr[i],maximum);
//     }
//     int count[100]={0};
//     for(int i=0;i<n;i++){
//         count[(arr[i]/pos)%10]++;
//     }
//     for(int i=1;i<=maximum;i++){
//         count[i]+=count[i-1];
//     }
//     int ans[n];
//     for(int i=n-1;i>=0;i--){
//         ans[--count[(arr[i]/pos)%10]]=arr[i];
//     }
//     for(int i=0;i<n;i++){
//         arr[i]=ans[i];
//     }
// }
// void radixsort(int arr[],int n){
//     int k=arr[0];
//     for(int i=0;i<n;i++){
//         k=max(k,arr[i]);
//     }
//     for(int pos=1;k/pos>0;pos*=10){
//         countsort(arr,n,pos);
//     }
// }
// int main(){
//     int n;
//     cout<<"Enter the size of the array: "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of the array: "<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     radixsort(arr,n);
//     cout<<"Sorted array is: "<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// return 0;
// }

//! heap sort   not working
// #include<bits/stdc++.h>
// using namespace std;
// void heapify(int arr[],int n,int i,int size)
// {
    
//     int largest=i;
//     int left=2*i;
//     int right=2*i+1;
//     if(left<=n&&arr[largest]<arr[left])
//     {
//         largest=left;
//     }
//     if(right<=n&&arr[largest]<arr[right])
//     {
//         largest=right;
//     }
//     if(largest!=i)
//     {
//         swap(arr[largest],arr[i]);
//         heapify(arr,n,largest,size);
//     }
// }
// void heapsort(int arr[],int n)
// {
//     int size=0;
//     int i;
//     int t=n;
//     while(t>1)
//     {
//         swap(arr[size],arr[1]);
//         size--;
//         heapify(arr,n,i,size);
//     }
// }

// int main(){
//     int arr[6]={-1,54,53,55,52,50};
//     int n;
//     int i;
//     for( i=n/2;i>0;i--)
//     {
//         heapify(arr,n,i);
//     }
//     cout<<"pruinting the array now"<<endl;
//     for(int i=1;i<n;i++)
//     {
//         cout<<arr[i]<<"  ";
//     }
//      heapsort(arr,n);
//  cout<<"pruinting the array now"<<endl;
//     for(int i=1;i<n;i++)
//     {
//         cout<<arr[i]<<"  ";
//     }

// return 0;
// }


// ! selection sort

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[100];
//     int size;
//     public:
//     void insert();
//     void sort();
//     void diplay();
// };
// void swezal::insert()
// {
//     cout<<"enter the size of the arrya "<<endl;
//     cin>>size;
//     cout<<"enter the array "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
// }
// void swezal::sort()

// {
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
//         swap(arr[minindex],arr[i]);
//     }
// }
// void swezal::diplay()
// {
//       cout<<"the new araay is  "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<"   ";
//     }

// }
// int main(){
// swezal obj;
// obj.insert();
// obj.sort();
// obj.diplay();
// return 0;
// }

// ! bubble sort

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[100];
//     int size;
//     public:
//     void insert();
//     void sort();
//     void diplay();
// };
// void swezal::insert()
// {
//     cout<<"enter the size of the arrya "<<endl;
//     cin>>size;
//     cout<<"enter the array "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
// }
// void swezal::sort()
// {
//     for(int i=1;i,size;i++)
//     {
//         bool swapped=false;
//         for(int j=0;j<size-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 swapped=true;
//             }
//         }
//         if(swapped==false)
//         break;
//     }
// }
// void swezal::diplay()
// {
//       cout<<"the new araay is  "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i]<<"   ";
//     }

// }

// int main(){
// swezal obj;
// obj.insert();
// obj.sort();
// obj.diplay();
// return 0;
// }


// ! insertion sort


#include<bits/stdc++.h>
using namespace std;
class swezal
{
    int arr[100];
    int size;
    public:
    void insert();
    void sort();
    void diplay();
};
void swezal::insert()
{
    cout<<"enter the size of the arrya "<<endl;
    cin>>size;
    cout<<"enter the array "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void swezal::sort()
{
    for(int i=1;i<size;i++)
    {
        int temp=arr[i];
        int j;
        for( j=i-1;j>=0;j--)
        {
            if(arr[j]>temp)
            {
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
         arr[j+1]=temp;
    }
}

void swezal::diplay()
{
      cout<<"the new araay is  "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"   ";
    }

}

int main(){
swezal obj;
obj.insert();
obj.sort();
obj.diplay();
return 0;
}
   

//    ! count sort
// #include<bits/stdc++.h>
// using namespace std;
// void countsort(int arr[],int n)
// {
//     int k=arr[0];  //max
//     for(int i=0;i<n;i++)
//     {
//         k=max(k,arr[i]);
//     }
//     int count[100]={0};
//     for(int i=0;i<n;i++)
//     {
//         count[arr[i]]++;
//     }
//     for(int i=1;i<=k;i++)
//     {
//         count[i]=count[i]+count[i-1];
//     }
//     int output[n];
//     for(int i=n-1;i>=0;i--)
//     {
//         output[--count[arr[i]]]=arr[i];
//     }
//     for(int i=0;i<n;i++)
//     {
//         arr[i]=output[i];
//     }
// }
// int main(){
//     int n;
//     cout<<"enetr the size of the arry "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the size of the array "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     countsort(arr,n);
//     cout<<"the sorted array is "<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<"  ";
//     }


// return 0;
// }

// !radix sort

// #include<bits/stdc++.h>
// using namespace std;
// void countsort(int arr[],int n,int pos)
// {
//     int k=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         k=max(k,arr[i]);
//     }
//     int count[100]={0};
//     for(int i=0;i<n;i++)
//     {
//         count[(arr[i]/pos)%10]++;
//     }
//     for(int i=1;i<=k;i++)
//     {
//         count[i]=count[i]+count[i-1];
//     }
//     int output[n];
    
//         for(int i=n-1;i>=0;i--)
//         {
//             output[--count[(arr[i]/pos)%10]]=arr[i];

//         }
//         for(int i=0;i<n;i++)
//         {
//             arr[i]=output[i];
//         }
    
// }
// void radixsort(int arr[],int n)
// {
//     int k=arr[0];
//     for(int i=0;i<n;i++)
//     {
//         k=max(k,arr[i]);
//     }
//     for(int pos=1;k/pos>0;pos*=10)
//     {
//         countsort(arr,n,pos);
//     }
// }
// int main(){
//     int n;
//     cout<<"enter the size of the array"<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the array"<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     radixsort(arr,n);
//     cout<<"enter the sorted array "<<endl;
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<"  ";
//     }


// return 0;
// }


// ! quick sort

// #include<bits/stdc++.h>
// using namespace std;
// int partition(int arr[] , int s, int e)
// {
//     int pivot=arr[s];
//     int cnt=0;
//     for(int i=s+1;i<=e;i++)
//     {
//         if(arr[i]<=pivot)
//         {
//             cnt++;
//         }
//     }
//     int pivotindex=s+cnt;
//     swap(arr[pivotindex],arr[s]);
//     int i=s;
//     int j=e;
//     while(i<pivotindex&&j>pivotindex)
//     {
//         while(arr[i]<=pivot)
//         {
//             i++;
//         }
//         while(arr[j]>pivot)
//         {
//             j--;
//         }
//         if(i<pivotindex&&j>pivotindex)
//         {
//             swap(arr[i++],arr[j--]);
//         }
//     }
//     return pivotindex;
// }
// void quicksort(int arr[], int s,int e)
// {
//     if(s>=e)
//     return;
//     int p=partition(arr,s,e);
//     quicksort(arr,s,p-1);
//     quicksort(arr,p+1,e);
// }
// int main(){
//     int arr[100];
//     int n;
//     cout<<"enter the sie of the array"<<endl;
//     cin>>n;
//     cout<<"enter the array "<<endl;
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"the sirted arrA"<<endl;
//     quicksort(arr,0,n-1);
//      for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }

// return 0;
// }


//!maerge sort

// #include<bits/stdc++.h>
// using namespace std;                                     //  merge sort
// int merge(int *arr,int s, int e)
// {
//     int mid=s+(e-s)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;

//     int *first=new int[len1];
//     int *second=new int[len2];

//     int mainArrayIndex=s;
//     for(int i=0;i<len1;i++)
//     {
//         first[i]=arr[mainArrayIndex++];
//     }
//     mainArrayIndex=mid+1;
//     for(int i=0;i<len2;i++)
//     {
//         second[i]=arr[mainArrayIndex++];
//     }
//     int index1=0;
//     int index2=0;
//     mainArrayIndex=s;
//     while(index1 < len1 && index2 < len2)
//     {
//         if(first[index1]<second[index2])
//         {
//             arr[mainArrayIndex++]=first[index1++];
//         } else{
//             arr[mainArrayIndex++]=second[index2++];
//         }
//     }
//     while(index1<len1)
//     {
//          arr[mainArrayIndex++]=first[index1++];
//     }
//      while(index2<len2)
//     {
//          arr[mainArrayIndex++]=second[index2++];
//     }
//     delete[]first;
//     delete[]second;
// }
// void mergesort(int arr[],int s,int e)
// {
//     if(s>=e)
//     {
//         return;
//     }
//     int mid=(s+e)/2;
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,e);
// }
// int main(){
//     int arr[100];
//     int size;
//     int i;
//     cout<<"enter the size of the array "<<endl;
//     cin>>size;
//     cout<<"enter the array "<<endl;
//     for( i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<endl<<"the sorted array is "<<endl<<endl;
//     mergesort(arr,0,size-1);
//     for(int j=0;j<size;j++){

//     cout<<arr[j]<<endl;
//     }
//     cout<<endl;

// return 0;
// }

  