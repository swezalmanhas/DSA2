#include<bits/stdc++.h>
using namespace std;
class swezal
{
     int arr[10];
     int n;    // NO OF BOOKS
     int m; 
     int mid;     // no of student
     public:
     void input();
     bool ispossible();
     void allobook();
};
void swezal::input()
{
    cout<<"ENTER THE NO OF BOOKS"<<endl;
    cin>>n;
    cout<<"enter the number of student"<<endl;
    cin>>m;
    cout<<"enter the page"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
bool swezal::ispossible()
{
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++)
    {
        if(pagesum+arr[i]<=mid)
        {
            pagesum=pagesum+arr[i];
        }
        else{
            studentcount++;
            if(studentcount > m||arr[i] > mid)
            {
                return false;
            }
            pagesum=arr[i];
        }
        if(studentcount>m)
        {
            return false;
        }
    }
    return true;
}
void swezal::allobook()
{
    int start=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    int end=sum;
    int ans=-1;
     mid=start+(end-start)/2;
    while(start<=end)
    {
        if(ispossible())
        {
            ans=mid;
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    cout<<" THE NUMBER OF PAGE IS ALLOCTAED TO THE FIRST STUDENT"<<endl<<ans<<endl;
    cout<<"the number of page allocted to second "<<endl<<sum-ans<<endl;
}

int main(){
    swezal obj;
    obj.input();
    obj.ispossible();
    obj.allobook();

return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// bool isPossible(int arr[], int n, int m, int mid) {
//     int studentCount = 1;
//     int pageSum = 0;
//     //cout << "checking for mid "<< mid <<endl;
    
//     for(int i = 0; i<n; i++) {
//         if(pageSum + arr[i] <= mid) {
//             pageSum += arr[i];
//         }
//         else
//         {
//             studentCount++;
//             if(studentCount > m || arr[i] > mid ) {
//             return false;
//         }
//             pageSum = arr[i];
//         }
//         if(studentCount > m) {
//             return false;
//         }
//         //cout << " for i " << i << " Student "<< studentCount << " pageSum " << pageSum << endl;
//     }
//     return true;
// }

// int allocateBooks(int arr[], int n, int m) {
//     int s = 0;
//     int sum = 0;
    
//     for(int i = 0; i<n; i++) {
//         sum += arr[i];
//     }
//     int e = sum;
//     int ans = -1;
//     int mid = s + (e-s)/2;
    
//     while(s<=e)
//     {
//         if(isPossible(arr,n,m,mid)) {
//             //cout<<" Mid returned TRUE" << endl;
//             ans = mid;
//             e = mid - 1;
//         }
//         else
//         {
//             s = mid + 1;
//         }
//         mid = s + (e-s)/2;
//     }
//     return ans;
// }
// int main()
// {
//     int arr[]={12,34,67,90};
//     int n=4;
//     int m=2;
//     cout<<allocateBooks(arr,n,m);
// }