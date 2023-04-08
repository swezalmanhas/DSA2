//   !  printing of 2d and inptutin find sum of the row and column , large col and large row,
  
  
//   #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[10][10];
//     int size1;
//     int size2;
//     int key;
//     public:
//     void input();
//     void print();
//     void search();
//     void sumrow();
//     void sumcol();
//     void wave();

// };
// void swezal::input()
// {
//     cout<<"enter the size of the array "<<endl;
//     cin>>size1;
//     cout<<"enter the size of the array 2 "<<endl;
//     cin>>size2;
//     cout<<"enter the array  "<<endl;
//     for(int i=0;i<size1;i++)
//     {
//         for(int j=0;j<size2;j++)
//         {
//               cin>>arr[i][j];
//         }
//     }
//     cout<<"enter the key to be found"<<endl;
//     cin>>key;
// }
// void swezal::search()
// {
//     for(int i=0;i<size1;i++)
//     {
//         for(int j=0;j<size2;j++)
//         {
//             if(arr[i][j]==key)
//             {
//                 cout<<"the elemnt is fouund here at"<<arr[i][j]<<endl;
//             }
//             else
//             cout<<"elemnt is not found"<<endl;
//         }
//     }
// }

// void swezal::sumrow()
// {
//       for(int i=0;i<size1;i++)
//     {
//     int sum=0;
//         for(int j=0;j<size2;j++)
//         {
//               sum=sum+arr[i][j];
//         }
//         cout<<"the sum of the row is "<<sum<<endl;
//     }
//     cout<<endl;
// }
// void swezal ::sumcol()
// {
//     for(int j=0;j<size2;j++)
//     {
//     int sum=0;
//         for(int i=0;i<size1;i++)
//         {
//             sum=sum+arr[i][j];
//         }
//         cout<<"the sum of the col"<<sum<<endl;
//     }
// }

// void swezal::wave()
// {
//     for(int col=0;col<size2;col++)
//     {
//         if(col%2!=2)
//         {
//             for(int row=size1;row>=0;row--)
//             {
//                 cout<<arr[row][col]<<"  ";
//             }
//         }
//         else{
//             for(int row=0;row<size1;row++)
//             {
//                 cout<<arr[row][col];
//             }
//         }
//     }
// }
// void swezal::print()
// {
//     for(int i=0;i<size1;i++)
//     {
//         for(int j=0;j<size2;j++)
//         {
//               cout<<arr[i][j]<<"  ";
//         }
//         cout<<endl;
//     }

// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.print();
//     obj.search();
//     obj.sumrow();
//     obj.sumcol();
//     obj.wave();

// return 0;
// }




//!  spiral print
#include <bits/stdc++.h>
using namespace std;
class swezal
{
    int arr[10][10];
    int size1;
    int size2;

public:
    void input();
    void spiral();
    void display();
};
void swezal::input()
{
    cout << "enter the size of row" << endl;
    cin >> size1;
    cout << "enter the size of column" << endl;
    cin >> size2;

    cout << "enter the array" << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cin >> arr[i][j];
        }
    }
}
void swezal::spiral()
{
    cout<<endl<<endl<<endl;
    int count = 0;
    int total = size1*size2;
    int startingrow = 0;
    int startingcol = 0;
    int endrow = size1 - 1;
    int endcol = size2 - 1;
    cout<<endl;
    cout<<"the spiral matix is"<<endl;
    while (count < total)
    {
    
        for (int index = startingcol; index <= endcol; index++)
        {
            cout <<arr[startingrow][index]<<" ";
            count++;
        }
    
        startingrow++;
        for (int index = startingrow; index <= endrow; index++)
        {
            cout<< arr[index][endcol]<<" ";
             count++;
        }
        
        endcol--;
        for (int index = endcol; index >= startingcol; index--)

        {
            cout<<arr[endrow][index]<<" ";
             count++;
        }
       
        endrow--;
        for (int index = endrow; index >= startingrow; index--)
        {
            cout<<arr[index][startingcol]<<" ";
             count++;
        }
        
        startingcol++;
         
    }
}
void swezal::display()
{
    cout << "the array is" << endl;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            cout << "  " << arr[i][j];
        }
        cout << endl;
    }
}
int main()
{
    swezal obj;
    obj.input();
    obj.display();
    obj.spiral();

    return 0;
}