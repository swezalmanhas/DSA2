//! inputin gand printuing of the two d array
// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10][10];
//     int size1;
//     int size2;
//     public:
//     void input();
//     void display();
// };
// void swezal::input()
// {
//     cout<<"enter the size of row"<<endl;
//     cin>>size1;
//     cout<<"enter the size of column"<<endl;
//     cin>>size2;
//     cout<<"enter the array"<<endl;
//     for(int i=0;i<size1;i++)
//     {
//         for(int j=0;j<size2;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
// }
// void swezal::display()
// {
//     cout<<"the array is"<<endl;
//      for(int i=0;i<size1;i++)
//     {
//         for(int j=0;j<size2;j++)
//         {
//            cout<<"  "<<arr[i][j];
//         }
//         cout<<endl;
//     }

// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.display();

// return 0;
// }

//! linear search in 2d array
// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10][10];
//     int size1;
//     int size2;
//     int key;

// public:
//     void input();
//     void search();
//     void display();
// };
// void swezal::input()
// {
//     cout << "enter the size of row" << endl;
//     cin >> size1;
//     cout << "enter the size of column" << endl;
//     cin >> size2;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "enter the key" << endl;
//     cin >> key;
// }
// void swezal::search()
// {
//     int j;
//     for (int i = 0; i < size1; i++)
//     {
//         for (j = 0; j < size2; j++)
//         {
//             if (arr[i][j] == key)
//             {
//                 cout << " the number is found " << endl;
//             }
//             else
//             {

//                 cout << "number is not found" << endl;
//             }
//         }
//     }
// }
// void swezal::display()
// {
//     cout << "the array is" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cout << "  " << arr[i][j];
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.search();
//     obj.display();

//     return 0;
// }

//! sum of the row in 2 d array  and largest row and column

// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10][10];
//     int size1;
//     int size2;
//     int key;

// public:
//     void input();
//     void search();
//     void sum();
//     void sumcolumn();
//     void largrow();
//      void largcol();
//     void display();
// };
// void swezal::input()
// {
//     cout<<endl<<endl;
//     cout << "enter the size of row" << endl;
//     cin >> size1;
//     cout << "enter the size of column" << endl;
//     cin >> size2;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout << "enter the key" << endl;
//     cin >> key;
// }
// void swezal::search()
// {
//     cout<<endl<<endl;
//     int j;
//     for (int i = 0; i < size1; i++)
//     {
//         for (j = 0; j < size2; j++)
//         {
//             if (arr[i][j] == key)
//             {
//                 cout << " the number is found on " << endl;
//             }
//             else
//             {

//                 cout << "the number is not found " << endl;
//             }
//         }
//     }
// }
// void swezal::sum()
// {
//     cout<<endl<<endl;
//     for (int i = 0; i < size1; i++)
//     {
//     int sum=0;
//         for (int j = 0; j < size2; j++)
//         {
//             sum=sum+arr[i][j];

//         }
//         cout<<"the sum of the row elemnt is "<<"  "<<sum<<endl;
//     }
//     cout<<endl;

// }
// void swezal::sumcolumn()
// {
//     cout<<endl<<endl;

//     for (int j = 0; j < size2; j++)
//     {
//        int sum=0;
//         for (int i = 0; i < size1; i++)
//         {
//            sum=sum+arr[i][j];
//         }
//         cout <<"the sum of the column "<<"  "<<sum<< endl;
//     }
// }
// void swezal::largrow()
// {
//     cout<<endl<<endl;
//     int maxi=INT16_MIN;
//     int rowindex=-1;
//     int row;
//       for ( row = 0; row < size1; row++)
//     {
//        int sum=0;
//         for (int col = 0; col < size2; col++)
//         {
//            sum=sum+arr[row][col];
//         }
//        if(sum>maxi)
//        {
//            maxi=sum;
//            rowindex=row;
//        }
//     }
//     cout<<"the largest row sum  we found"<<" "<<maxi<<endl;
//     cout<<"the index of the row is"<<" "<<rowindex<<endl;

// }
// void swezal::largcol()
// {
//     cout<<endl<<endl;
//     int maxi=INT16_MIN;
//     int colindex=-1;
//     int col;
//       for ( col = 0; col < size2; col++)
//     {
//        int sum=0;
//         for (int row = 0; row < size1; row++)
//         {
//            sum=sum+arr[row][col];
//         }
//        if(sum>maxi)
//        {
//            maxi=sum;
//            colindex=col;
//        }
//     }
//     cout<<"the largest col sum  we found"<<" "<<maxi<<endl;
//     cout<<"the index of the col is"<<" "<<colindex<<endl;

// }
// void swezal::display()
// {
//     cout<<endl<<endl;
//     cout << "the array is" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cout << "  " << arr[i][j];
//         }
//         cout << endl;
//     }
// }

// int main()
// {
//     swezal obj;
//     obj.input();
//     // obj.search();
//     obj.sum();
//     obj.sumcolumn();
//     obj.largrow();
//     obj. largcol();
//     obj.display();

//     return 0;
// }

//!  print the matrix in the wave order

// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10][10];
//     int size1;
//     int size2;

// public:
//     void input();
//     void wave();
//     void display();
// };
// void swezal::input()
// {
//     cout << "enter the size of row" << endl;
//     cin >> size1;
//     cout << "enter the size of column" << endl;
//     cin >> size2;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
// }
// void swezal::wave()
// {
//     for (int col = 0; col < size2; col++)
//     {
//         if (col%2!=0)
//         {
//             for (int row = size1; row >= 0 ; row--)
//             {
//                 cout << arr[row][col] << "  ";
//             }
//         }
//             else

//                 for (int row = 0; row < size1; row++)
//                 {
//                     cout << arr[row][col]<<"  ";
//                 }

//     }
// }
// void swezal::display()
// {
//     cout << "the array is" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cout << "  " << arr[i][j];
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.display();
//     obj.wave();

//     return 0;
// }

//!  spiral print
// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10][10];
//     int size1;
//     int size2;

// public:
//     void input();
//     void spiral();
//     void display();
// };
// void swezal::input()
// {
//     cout << "enter the size of row" << endl;
//     cin >> size1;
//     cout << "enter the size of column" << endl;
//     cin >> size2;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
// }
// void swezal::spiral()
// {
//     cout<<endl<<endl<<endl;
//     int count = 0;
//     int total = size1*size2;
//     int startingrow = 0;
//     int startingcol = 0;
//     int endrow = size1 - 1;
//     int endcol = size2 - 1;
//     cout<<endl;
//     cout<<"the spiral matix is"<<endl;
//     while (count < total)
//     {
    
//         for (int index = startingcol; index <= endcol; index++)
//         {
//             cout <<arr[startingrow][index]<<" ";
//             count++;
//         }
    
//         startingrow++;
//         for (int index = startingrow; index <= endrow; index++)
//         {
//             cout<< arr[index][endcol]<<" ";
//              count++;
//         }
        
//         endcol--;
//         for (int index = endcol; index >= startingcol; index--)

//         {
//             cout<<arr[endrow][index]<<" ";
//              count++;
//         }
       
//         endrow--;
//         for (int index = endrow; index >= startingrow; index--)
//         {
//             cout<<arr[index][startingcol]<<" ";
//              count++;
//         }
        
//         startingcol++;
         
//     }
// }
// void swezal::display()
// {
//     cout << "the array is" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cout << "  " << arr[i][j];
//         }
//         cout << endl;
//     }
// }
// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.display();
//     obj.spiral();

//     return 0;
// }

//!   rotate the array by 90 degree and anticlockwise

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10][10];
//     int size1;
//     int size2;
//     public:
//     void input();
//     void rotate();
//     void display();
// };
// void swezal::input()
// {
//      cout << "enter the size of row" << endl;
//     cin >> size1;
//     cout << "enter the size of column" << endl;
//     cin >> size2;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }

// }
// void swezal::rotate()
// {
//     for(int i=0;i<size2/2;i++)
//     {
//         for (int j=i;j<size2-i-1;j++)
//         {
//             int temp=arr[i][j];
//             arr[i][j]=arr[j][size2-1-i];
//             arr[j][size2-1-i]=arr[size2-1-i][size2-1-j];
//             arr[size2-1-i][size2-1-j]=arr[size2-1-j][i];
//             arr[size2-1-j][i]=temp;

//         }

//     }
// }
// void swezal::display()
// {
//     cout << "the array is" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         for (int j = 0; j < size2; j++)
//         {
//             cout << "  " << arr[i][j];
//         }
//         cout << endl;
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.rotate();
//     obj.display();

// return 0;
// }


//!     Binary search in 2d array 
// #include<bits/stdc++.h>
// using namespace std;
// class swezal 
// {
//     int arr[10][10];
//     int row;
//     int col;
//     int key;
//     int loc;
//     public:
//     void input();
//     void search();
//     void display();
// };
// void swezal::input()
// {
    
//     cout << "enter the size of row" << endl;
//     cin >> row;
//     cout << "enter the size of column" << endl;
//     cin >> col;

//     cout << "enter the array" << endl;
//     for (int i = 0; i <row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     cout<<"enter the elemnt to be found"<<endl;
//     cin>>key;

// }
// void swezal::search()
// {
//     int start=0;
//     int end=row*col-1;
//     int mid=start+(end-start)/2;
//     while(start<end)
//     {
//         int element=arr[mid/col][mid%col];
//         if(element==key)
//         {
//             loc=mid;
//         }
//         if(element<key)
//         {
//             start=mid+1;
//         }else
//         end=mid-1;
//     }
//     mid=start+(end-start)/2;
// }

//     void swezal::display()
// {
//    if(loc>0)
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






//!  saddle point in 2d matrix

// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int row;
//     int col;
//     int arr[3][3];
//     public:
//     void input() ;
//     void saddle();
    
// };
// void swezal::input()
// {
//     cout<<"enter the number of row "<<endl;
//     cin>>row;
//     cout<<"enter the number of columns"<<endl;
//     cin>>col;
//     cout<<"enter the matrix"<<endl;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
// }

// void swezal::saddle()
// { 
//     int i;
//     int j;

//     for( i=0;i<row;i++)
//     {
//         for( j=0;j<col;j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }
//     cout<<" "<<endl;
//     }
//     for( i=0;i<row;i++)
//     {
//         int min_row=arr[i][0];
//         int col_ind=0;
//         for( j=1;j<col;j++)
//         {
//             if(min_row>arr[i][j])
//             {
//                 min_row=arr[i][j];
//                 col_ind=j;
//             }
//         }
//         int k;
//         for(k=0;k<row;k++)
//         if(min_row<arr[k][col_ind])
//         break;
//         if(k==row);
//         {

//         cout<<"the saddle point is "<<"  "<<min_row<<endl;
//         }
//     }
// }

    

// int main(){
//     swezal obj;
//     obj.input();
//     obj.saddle();

// return 0;
// }


// #include <bits/stdc++.h>
// using namespace std; 
// const int MAX = 100;
// bool Saddle(int a[MAX][MAX], int n)
// {
//  for (int i = 0; i < n; i++)
//  {
//  int min_row = a[i][0], col = 0;
//  for (int j = 1; j < n; j++)
//  {
//  if (min_row > a[i][j])
//  {
//  min_row = a[i][j];
//  col = j;
//  }
//  }
//  int k;
//  for (k = 0; k < n; k++)
//  if (min_row < a[k][col])
//  break;
//  if (k == n)
//  {
//  cout << "Value of Saddle Point " << min_row;
//  return true;
//  }
//  }
//  return false;
// }
// int main()
// {
//  int mat[MAX][MAX] = {{1, 2, 3},
//  { 4, 5, 6},
//  {7, 8, 9}};
//  int n = 3;
//  if (Saddle(mat, n) == false)
//  cout << "No Saddle Point ";
//  return 0;
// }



//! addintion of two array
// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int row;
//     int col;
//     int arr1[10][10];
//     int arr3[10][10];
//     int arr2[10][10];
//     public:
//     void input();
//     void add();
// };
// void swezal::input()
// {
//     cout<<"enter the number of row"<<endl;
//     cin>>row;
//     cout<<"enter the number of columns"<<endl;
//     cin>>col;
//     cout<<"enter the elemnt in the array"<<endl;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cin>>arr1[i][j];
//         }
//     }
//      cout<<"enter the elemnt in the second array"<<endl;
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             cin>>arr2[i][j];
//         }
//     }
// }
// void swezal::add()
// {
//     int i,j;
//      for(i=0; i<row; i++)
//     {
//         for(j=0; j<col; j++)
//             arr3[i][j] = arr1[i][j]+arr2[i][j];
//     }
//     cout<<"Addition Result of Two Given Matrix is:\n";
//     for(i=0; i<row; i++)
//     {
//         for(j=0; j<col; j++)
//             cout<<arr3[i][j]<<" ";
//         cout<<endl;
//     }
// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.add();

// return 0;
// }


//!   multiplication of matrix 
// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int row1;
//     int row2;
//     int col1;
//     int col2;
//     int arr1[10][10];
//     int arr2[10][10];
//     public:
//     void input();
//     void multi();
// };
// void swezal::input()
// {
//     cout<<"enter the number of row of first matrix"<<endl;
//     cin>>row1;
//      cout<<"enter the number of col of first matrix"<<endl;
//     cin>>col1;
//     cout<<"enterthe elemnt of firest matrix"<<endl;
//      for(int i=0;i<row1;i++)
//     {
//          for(int j=0;j<col1;j++)
//          {
//              cin>>arr1[i][j];
//          }
//      }
    
//      cout<<"enter the number of row of second matrix"<<endl; 
//     cin>>row2;
//      cout<<"enter the number of  of col2 first matrix"<<endl;
//     cin>>col2;
//     cout<<"enter the elemnt in the second array"<<endl;
//      for(int i=0;i<row2;i++)
//     {
//          for(int j=0;j<col2;j++)
//          {
//              cin>>arr2[i][j];
//          }
//      }
    
// }
//  void swezal::multi()
// {
//     int k,i,j;
//     int product[10][10];
//     if (col1 != row2) {
//       cout<<"Column of first matrix should be equal to row of second matrix"<<endl;
// }else{
//     {
//       cout<<"The first matrix is:"<<endl;     // pehle matrix ko show kiya hai 
//       for(i=0; i<row1; ++i) {
//          for(j=0; j<col1; ++j)
//          cout<<arr1[i][j]<<" ";
//          cout<<endl;
//       }
//       cout<<endl;
//       cout<<"The second matrix is:"<<endl;          // second matrix ko show kiya hai 
//       for(i=0; i<row2; ++i) {
//          for(j=0; j<col2; ++j)
//          cout<<arr2[i][j]<<" ";
//          cout<<endl;
//       }
//       cout<<endl;
      
//       for(i=0; i<row1; ++i)
//       for(j=0; j<col2; ++j) {
//          product[i][j] = 0;
//       }
//       for(i=0; i<row1; ++i)
//       for(j=0; j<col2; ++j)
//       for(k=0; k<col1; ++k) {
//          product[i][j]+=arr1[i][k]*arr2[k][j];
//       }
//       cout<<"Product of the two matrices is:"<<endl;
//       for(i=0; i<row1; ++i) {
//          for(j=0; j<col2; ++j)
//          cout<<product[i][j]<<" ";
//          cout<<endl;
//       }
//    }

// }
// }

// int main(){
//     swezal obj;
//     obj.input();
//     obj.multi();

// return 0;
// }



#include<iostream>
using namespace std;

#define max 100

int main()
{
    int r,c;
    cin>>r>>c;

    int a[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }

    int data[100][3];

    int k=0;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j])
            {
                data[k][0]=i;
                data[k][1]=j;
                data[k][2]=a[i][j];
                k++;
            }
        }
    }

    cout<<"Row"<<"      "<<"Col     "<<"        "<<"Val"<<endl;

    for(int i=0;i<k;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<data[i][j]<<"     ";
        }
        cout<<endl;
    }

}



#include<iostream>
using namespace std;

void printSparse(int k, int data[100][3])
{
    for(int i=0;i<k;i++)
    {
        cout<<data[i][0]<<"     "<<data[i][1]<<"    "<<data[i][2]<<endl;
    }
}

int main()
{
    int m1[3][3],m2[3][3];
    
    // matrix1
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m1[i][j];
        }
    }

    
    
    // matrix 2
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>m2[i][j];
        }
    }
    
    int data1[100][3],data2[100][3];
    
    int k1=0,k2=0;
    
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(m1[i][j]!=0)
            {
                data1[k1][0]=i;
                data1[k1][1]=j;
                data1[k1][2]=m1[i][j];
            
                k1++;
            }
        }
    }
    
    printSparse(k1,data1);

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(m2[i][j]!=0)
            {
                data2[k2][0]=i;
                data2[k2][1]=j;
                data2[k2][2]=m2[i][j];
            
                k2++;
            }
        }
    }
    
    cout<<endl;
    printSparse(k2,data2);

    int i=0,j=0;
    
    int sum[100][3];
    
    int l=0;
    
    while(i<=k1 and j<=k2)
    {
        if(data1[i][0]==data2[j][0])        // Rows are eq
        {
            if(data1[i][1]==data2[j][1])        // col are eq
            {
                sum[l][0]=data1[i][0];  
                sum[l][1]=data1[i][1];
                sum[l][2]=data1[i][2]+data2[j][2];      // adding data
                
                i++;j++;
                
                if(sum[l][2]!=0)
                {
                    l++;
                }
            }
            else 
            {
                if(data1[i][1]<data2[j][1])    
                {
                    sum[l][0]=data1[i][0];
                    sum[l][1]=data1[i][1];
                    sum[l][2]=data1[i][2];
                    i++;
                    l++;
                }
                else
                {
                    sum[l][0]=data2[j][0];
                    sum[l][1]=data2[j][1];
                    sum[l][2]=data2[j][2];
                    l++;
                    j++;
                }
            }
            
                
        }
        
        else
            {
                if(data1[i][0]<data2[j][0])
                {
                    sum[l][0]=data1[i][0];
                    sum[l][1]=data1[i][1];
                    sum[l][2]=data1[i][2];
                    i++;
                    l++;
                }
                else 
                {
                    sum[l][0]=data2[j][0];
                    sum[l][1]=data2[j][1];
                    sum[l][2]=data2[j][2];
                    j++;
                    l++;
                }
            }
        
    }
    
    while(i<=k1)
    {
        sum[l][0]=data1[i][0];
        sum[l][1]=data1[i][1];
        sum[l][2]=data1[i][2];
        l++;
        i++;
    }
    
    while(j<=k2)
    {
        sum[l][0]=data1[j][0];
        sum[l][1]=data1[j][1];
        sum[l][2]=data1[j][2];
        l++;
        j++;
    }
    
    // printSparse(l,sum);

    cout<<endl;

    for(int i=0;i<l-2;i++)
    {
        cout<<sum[i][0]<<"  "<<sum[i][1]<<"  "<<sum[i][2]<<endl;
    }
    
}




