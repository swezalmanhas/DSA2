//! 6. //element are found in the rotated sorted array


#include<bits/stdc++.h>
using namespace std;
class swezal
{
int arr[10];
int size;
int key;
int loc=0;
int loct=0;
public:
void input();
void pivot();
void binsear();
void display();
};
void swezal::input()
{
    cout<<"the size of the array"<<endl;
    cin>>size;
    cout<<"enter the array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the elemnt to be found"<<endl;
    cin>>key;  
}
void swezal::pivot()
{
  int start=0;
    int end=(size-1);
    int mid=start+(end-start)/2;
    while(start<end)
    {
      if(arr[mid]>=arr[0])
      {
          start=mid+1;
          loc=start;
         
      }else
      {
          end=mid;
      }
      
    mid=start+(end-start)/2;
    }
    
     
}
void swezal::binsear()
{
        int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            loct= mid;
            
        }
        // go to right part.
        if(key>arr[mid])
        {
            start=mid+1;
        }else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
        
    }
     cout<<"THE PIVOT ELEMENT IS"<<endl<<arr[mid]<<endl;
    
    cout<<"the index of pivot element is" <<endl<<loc<<endl;
}
void swezal::display()
{
    if(key>=arr[loc] || key<=arr[size-1])

{
    
    cout<<"the index of the element whic his found"<<endl<<loct<<endl;
}

}
int main(){
    swezal obj;
    obj.input();
    obj.pivot();
    obj.binsear();
    obj.display();

return 0;
}



// take out the square root with the help of binary search with function 36
// #include<iostream>
// using namespace std;

//  long long int sqrtInteger(int n) {
        
//         int s = 0;
//         int e = n;
//         long long int mid = s + (e-s)/2;
        
//         long long int ans = -1;
//         while(s<=e) {
            
//             long long int square = mid*mid;
            
//             if(square == n)
//                 return mid;
            
//             if(square < n ){
//                 ans = mid;
//                 s = mid+1;
//             }
//             else
//             {
//                 e = mid - 1;
//             }
//             mid = s + (e-s)/2;
//         }
//         return ans;
//     }

// double morePrecision(int n, int precision, int tempSol) {
    
//     double factor = 1;
//     double ans = tempSol;

//     for(int i=0; i<precision; i++) {
//         factor = factor/10;

//         for(double j=ans; j*j<n; j= j+factor ){
//             ans = j;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout <<" Enter the number " << endl;
//     cin >> n;

//     int tempSol = sqrtInteger(n);
//     cout <<" Answer is " << morePrecision(n, 3, tempSol) << endl;

//     return 0;
// }