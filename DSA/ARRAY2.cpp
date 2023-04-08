// #include<bits/stdc++.h>
// using namespace std;
// void swapaltternate( int arr[], int size)        // SWAPPING THE ARRAY 
// {
//     for (int i = 0; i < size; i+=2)
//     {
//         if(i+1<size)
//         {

//      int temp=arr[i];
//      arr[i]=arr[i+1];
//      arr[i+1]= temp; 
//         }
//     }
    

// }
// void print(int arr[],int n){
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }
// }
// int main(){
//     int even[8]={2,3,4,5,6,7,8,9};
//     int odd[5]={2,3,4,5,6};
//     swapaltternate(even,8);
//     swapaltternate(odd,5);
//     print(even,8);
//     print(odd,5);

// return 0;
// }




// QUESTION 2 UNIQUE NUMBER IN ARRAY 



#include<bits/stdc++.h>
using namespace std;
void find( int *arr, int size)
{
    int ans=0;
    for(int i=0;  i<size;i++){
        ans=ans^arr[i];
    }
        cout<<ans;
    
}

int main(){
    int even[5]={2,3,2,3,5};
    find(even,5);
    


return 0;
}




// 3 // TO FIND TTHE DUPLICATE OF THE NUMBER

