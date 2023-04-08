// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int i;
//     int j;
//     int size;
//     int arr[10];

//     public:
//     void input();
//     void daigonal();

// };
// void swezal::input()
// {
//     cout<<"Enter  the size of the array "<<endl;
//     cin>>size;
//     cout<<"enter the array "<<endl;
//     for(int k=0;k<size;k++)
//     {
//         cin>>arr[k];
//     }

// }
// void swezal::daigonal()
// {

//     for(i=0;i<size;i++)
//     {
//         for(j=0;j<size;j++)
//         {
//             if(i==j)
//             {

//                 cout<<arr[i]<<" ";
//             }
//             else
//             cout<<"0"<<" ";
//         }
//     cout<<"  "<<endl;
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.daigonal();

// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int i;
//     int j;

//     public:
    
//      void lowertriagonal();
//     void  uppertriagonal();
//      void  syymterictriagonal();
// };

// void swezal::lowertriagonal()
// {
//     int size;
//     cout<<"enter the size of the array"<<endl;
//     cin>>size;
//     int max=(size*(size+1)/2);
//     cout<<"enter the matrix"<<endl;
//     int arr[max];
//     for(int c=0;c<max;c++)
//     {
//        cin>> arr[c];
//     }
//     int k=0;
//     for(i=0;i<size;i++)
//     {
//         for(j=0;j<size;j++)
//         {
//             if(i>=j)
//             {
//                 cout<<arr[k]<<" ";
//                 k++;
//             }
//             else{
//                 cout<<"0"<<" ";
//             }
            
//         }
//         cout<<endl;
//     }

// }
// void swezal::uppertriagonal()
// {
//      int size;
//     cout<<"enter the size of the array"<<endl;
//     cin>>size;
//     int max=(size*(size+1))/2;
//     cout<<"enter the matrix"<<endl;
//     int arr[max];
//     for(int c=0;c<max;c++)
//     {
//        cin>> arr[c];
//     }
//     int k=0;
//     for(i=0;i<size;i++)
//     {
//         for(j=0;j<size;j++)
//         {
//             if(i<=j)
//             {
//                 cout<<arr[k]<<" ";
//                 k++;
//             }
//             else{
//                 cout<<"0"<<" ";
//             }
            
//         }
//         cout<<endl;
//     }

// }
// void swezal::syymterictriagonal()
// {
//     int n, c=0;
//     cout << "Enter the size of symmetric  matrix :";
//     cin >> n;
//     int s = (n*(n + 1))/2;
//     int array[s];
//     cout << "Enter the elements present : " << '\n';
//     for (int i = 0; i < s; i++)
//     {
//         cin >> array[i];
//     }

//     for (int i = 0; i < n ; i++)
//     {
//         int r=1;
//         for (int j = 0; j< n ; j++)
//         {
//             if (i<=j)
//             {
                
//                 cout<<array[c]<<" ";
//                 c++;
//                    }
//             else
//             {
//                int m=r;
//                cout<<array[m]<<" ";
//                m=m+1;
//             }
            
            
//         }
        
//         cout<<endl;
// }
// }


  



// int main(){
//     swezal obj;
//      obj.lowertriagonal();
//      obj.uppertriagonal();
//     obj.syymterictriagonal();

// return 0;
// }




//  transpose of ther matrix
#include <iostream>
using namespace std;

int main() {
   int a[10][10], transpose[10][10], row, column, i, j;

   cout << "Enter rows and columns of matrix: ";
   cin >> row >> column;

   cout << "\nEnter elements of matrix: " << endl;

   // Storing matrix elements
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> a[i][j];
      }
   }

   // Printing the a matrix
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < row; ++i) {
      for (int j = 0; j < column; ++j) {
         cout << " " << a[i][j];
         if (j == column - 1)
            cout << endl << endl;
      }
   }

   // Computing transpose of the matrix
   for (int i = 0; i < row; ++i)
      for (int j = 0; j < column; ++j) {
         transpose[j][i] = a[i][j];
      }

   // Printing the transpose
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < column; ++i)
      for (int j = 0; j < row; ++j) {
         cout << " " << transpose[i][j];
         if (j == row - 1)
            cout << endl << endl;
      }

   return 0;
}