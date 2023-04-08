//! input and print the array
// #include<bits/stdc++.h>
// using namespace std;

// void print(int size,int arr[])
// {
//     for(int i=0;i<size;i++)
//     {
//         cout<<arr[i];
//     }
// }
// int main(){
//     int si;
//     int arr[10];
//     cout<<"enter the size of the aarrya"<<endl;
//     cin>>si;
//     cout<<"enter the array "<<endl;
//     for(int i=0;i<si;i++)
//     {
//         cin>>arr[i];
//     }
//     // input(si,arr);
//     print(si,arr);

// return 0;
// }

//! input and print the class
// #include<bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int size;
//     int arr[10];
//     public:
//     void input();
//     void print();
// };
// void swezal::input()
// {
//      cout<<"enter the size of the aarrya"<<endl;
//     cin>>size;
//     cout<<"enter the arry"<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }

// }
// void swezal::print()
// {
//     cout<<"the size of the array    "<<size<<endl;
//     cout<<"the array is "<<endl;
//      for(int i=0;i<size;i++)
//     {
//         cout<<arr[i];
//     }

// }
// int main(){
//     swezal obj;
//     obj.input();
//     obj.print();

// return 0;
// }

// ! swaaping the elemnt into the array
// #include<bits/stdc++.h>
// using namespace std;
// void swap(int size, int arr[])
// {
//     int temp;
//     for(int i=0;i<size;i+=2)
//     {
//         if(i+1<size)
//         {

//          temp=arr[i];
//         arr[i]=arr[i+1];
//         arr[i+1]=temp;
//         }
//     }

// }
// void print(int size,int arr[])
// {
//     cout<<"the swapping array"<<endl<<endl<<endl;
//      for(int i=0;i<size;i++)
//      {
//          cout<<arr[i]<<endl;
//      }

// }
// int main(){
//        int si;
//     int arr[10];
//     cout<<"enter the size of the aarrya"<<endl;
//     cin>>si;
//     cout<<"enter the array "<<endl;
//     for(int i=0;i<si;i++)
//     {
//         cin>>arr[i];
//     }

//     swap(si,arr);
//     print(si,arr);

// return 0;
// }

// ! reverse the array
// #include <bits/stdc++.h>
// using namespace std;
// void sw(int size, int arr[])
// {
//     int i = 0;
//     int j = size - 1;
//     while (j >= i)
//     {
//         swap(arr[i], arr[j]);
//         i++;
//         j--;
//     }
// }
// void print(int size, int arr[])
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];
//     }
// }
// int main()
// {
//     int si;
//     int arr[10];
//     cout << "enter the size of the aarrya" << endl;
//     cin >> si;
//     cout << "enter the array " << endl;
//     for (int i = 0; i < si; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "the reverse array is" << endl;
//     sw(si, arr);
//     print(si, arr);

//     return 0;
// }

//! sum and product of the array
// #include <bits/stdc++.h>
// using namespace std;
// void print(int size, int arr[])
// {
//     int sum = 0;
//     int pro = 1;
//     for (int i = 0; i < size; i++)
//     {
//         sum = sum + arr[i];
//         pro = pro * arr[i];
//     }
//     cout << "the sum of the array" << sum << endl;
//     cout << "the product of the array" << pro << endl;
// }

// int main()
// {
//     int si;
//     int arr[10];
//     cout << "enter the size of the aarrya" << endl;
//     cin >> si;
//     cout << "enter the array " << endl;
//     for (int i = 0; i < si; i++)
//     {
//         cin >> arr[i];
//     }

//     print(si,arr);

//     return 0;
// }

//! check the array is palindrome ro not

// #include <bits/stdc++.h>
// using namespace std;
// void sw(int size, int arr[])
// {
//     int temp;
//     int i = 0;
//     int j = size - 1;
//     while (i<=j)
//     {
//          temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//         i++;
//         j--;
//     }
//     if(temp==arr[i])
//     {
//         cout <<"the array is palindrome"<<endl;
//     }
//     else{
//         cout<<"the array is not is palindrome"<<endl;
//     }
// }
// void print(int size, int arr[])
// {
//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i];
//     }
// }
// int main()
// {
//     int si;
//     int arr[10];
//     cout << "enter the size of the aarrya" << endl;
//     cin >> si;
//     cout << "enter the array " << endl;
//     for (int i = 0; i < si; i++)
//     {
//         cin >> arr[i];
//     }

//     cout << "the reverse array is" << endl;
//     sw(si, arr);
//     print(si, arr);

//     return 0;
// }
//! find the max and min elemnt in the array

// #include<bits/stdc++.h>
// using namespace std;
// int getmax(int size,int arr[])
// {
//     int max=INT_MIN;
//     for(int i=0;i<size;i++)
//     {
//         if(arr[i]>max)
//         {
//             max=arr[i];
//         }
//     }
//     return max;
// }
// int getmin(int size,int arr[])
// {
//     int min=INT_MAX;
//      for(int i=0;i<size;i++)
//      {
//          if(arr[i]<min)
//          {
//              min=arr[i];
//          }
//      }
//      return min;

// }
// int main(){
//       int si;
//     int arr[10];
//     cout << "enter the size of the aarrya" << endl;
//     cin >> si;
//     cout << "enter the array " << endl;
//     for (int i = 0; i < si; i++)
//     {
//         cin >> arr[i];
//     }

//     cout<<"the maximum elemnt in the array "<<getmax(si,arr)<<endl<<endl;
//     cout<<"the minimum elemnt in the arry "<<getmin(si,arr)<<endl<<endl;

//     return 0;

// }

//! find the unique in htre array
// #include<bits/stdc++.h>
// using namespace std;
// void unique(int size,int arr[])

// {
//     int ans;
//     for(int i=0;i<size;i++)
//     {
//         ans=ans^arr[i];
//     }
//         cout <<"the unique elemnt is "<<ans<<endl;

// }
// int main(){

//       int si;
//     int arr[10];
//     cout << "enter the size of the aarrya" << endl;
//     cin >> si;
//     cout << "enter the array " << endl;
//     for (int i = 0; i < si; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < si; i++)
//     {
//         cout << arr[i];
//     }

//     unique(si,arr);

//     return 0;
// }

//! duplicate of the array and count it
// #include<bits/stdc++.h>
// using namespace std;
// void duplicate(int size,int arr[])
// {
//     int count=0;
//     int i=0;
//     for( i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                  cout<<"the duplicte elemnt is "<<arr[i]<<endl<<endl<<endl;
//                 count++;
//                 break;
//             }

//         }

//     }

//     cout<<"the total number of duplicate elemnt is "<<count<<endl<<endl<<endl;
// }
// int main(){
//         int si;
//     int arr[10];
//     cout << "enter the size of the aarrya" << endl;
//     cin >> si;
//     cout << "enter the array " << endl;
//     for (int i = 0; i < si; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0; i < si; i++)
//     {
//         cout << arr[i]<<endl;
//     }

//     duplicate(si,arr);

// return 0;
// }

//! sum of two diffternt array
// #include<bits/stdc++.h>
// using namespace std;
// void sum(int size1,int arr1[],int size2,int arr2[])
// {
//     int sum1=0;
//      int sum2=0;
//       int sum3=0;
//       int pro1=1;
//       int pro2=1;
//       int pro3=1;

//     for(int i=0;i<size1;i++)
//     {
//         sum1=sum1+arr1[i];
//         pro1=pro1*arr1[i];

//     }
//     for(int j=0;j<size2;j++)
//     {
//         sum2=sum2+arr2[j];
//         pro2=pro2*arr2[j];

//     }

//         sum3=sum3+sum2+sum1;
//         pro3=pro3*pro2*pro1;
//         cout<<"the product of the first array is "<<pro1<<endl;
//          cout<<"the product of the second array is "<<pro2<<endl;
//           cout<<"the total product of the element "<<pro3<<endl;
//         cout<<"the sum of the first array is "<<sum1<<endl;
//          cout<<"the sum of the second array is "<<sum2<<endl;
//          cout<<"the total sum of the is "<<sum3<<endl;
// }
// int main(){
//      int si1;
//      int si2;
//     int arr1[10];
//     int arr2[10];
//     cout << "enter the size of the aarrya1" << endl;
//       cin >> si1;

//     cout << "enter the array " << endl;
//     for (int i = 0; i < si1; i++)
//     {
//         cin >> arr1[i];
//     }

//     cout<<"enter the size of the array 2"<<endl;
//     cin>>si2;

//     cout<<"enter the second elemnt "<<endl;
//     for(int i = 0; i < si2; i++)
//     {
//         cin>>arr2[i];
//     }

//     for (int i = 0; i < si1; i++)
//     {
//         cout << arr1[i]<<endl;
//     }
//     for (int i = 0; i < si2; i++)
//     {
//         cout << arr2[i]<<endl;
//     }

//     sum(si1,arr1,si2,arr2);
// return 0;
// }

//!   linear search in the array
// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[100];
//     int key;
//     int flag = 0;
//     int size;

// public:
//     void input();
//     void print();
// };
// void swezal::input()
// {
//     cout << "enter the size of the array" << endl;
//     cin >> size;
//     cout << "enter the size of the array " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "enter the elemnt tobe found" << endl; // linear searchmai hmai sorted array nahi dalna hota
//     cin >> key;
// }
// void swezal::print()
// {
//     int i = 0;
//     for (i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             flag = 1;
//             break;
//         }
//         else
//             continue;
//     }
//     if (flag == 1)
//     {
//         cout << "the lemnet is found at the positon of " << i + 1 << endl;
//         cout << "the lemnet is found at the index of " << i << endl;
//     }
//     else
//     {
//         cout << "the lemnt is not found " << endl;
//     }
// }

// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.print();

//     return 0;
// }

//! binary search
// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr[100];
//     int key;
//    
//     int size;
//     int loc;

// public:
//     void search();
//     void input();
//     void print();
// };
// void swezal::input()
// {
//     cout << "enter the size of the array" << endl;
//     cin >> size;
//     cout << "enter the size of the array " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "enter the elemnt tobe found" << endl;
//     cin >> key;
// }
// void swezal::search()
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             loc = mid;
//             break;
//         }
//         else
//         {
//             if (key > arr[mid])
//             {
//                 start= mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//             mid = start + (end - start) / 2;
//         }
//     }
// }
// void swezal::print()
// {
    
//         if (loc >= 0)
//         {
//             cout << "the elemnt is found at index" << loc << endl;
//             cout<<"the  elemnt at postion by layman    "  <<loc+1<<endl;
//         }
//         else
//         {
//             cout << "the elemnt is not found" << endl;
//         }
//     }

// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.search();
//     obj.print();

//     return 0;
// }


//! first and last occurence in the array 
// #include<bits/stdc++.h>
// using namespace std;

// class swezal
// {
//     int arr[100];
//     int key;
//     int first_loc;
//     int last_loc;
   
//     int size;
    
   

// public:
//    void input();
//    void first();
//    void last();
//    void first_display();
//    void last_display();
// };
// void swezal::input()
// {
//     cout << "enter the size of the array" << endl;
//     cin >> size;
//     cout << "enter the  array " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "enter the elemnt tobe found" << endl;
//     cin >> key;
// }
// void swezal::first()
// {
//     int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             first_loc = mid;
//             end=mid-1;
//         }
//         else
//         {
//             if (key > arr[mid])
//             {
//                 start= mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//             mid = start + (end - start) / 2;
//         }
//     }
// }
// void swezal::first_display()
// {
    
//         if (first_loc >= 0)
//         {
//             cout << "the elemnt is found at index" << first_loc << endl;
//             cout<<"the  elemnt at postion by layman    "  <<first_loc+1<<endl;
//         }
//         else
//         {
//             cout << "the elemnt is not found" << endl;
//         }
//     }
//     void swezal::last()
//     {
//         int start = 0;
//     int end = size - 1;
//     int mid = start + (end - start) / 2;
//     while (start <= end)
//     {
//         if (arr[mid] == key)
//         {
//             last_loc = mid;
//             start=mid+1;
//         }
//         else
//         {
//             if (key > arr[mid])
//             {
//                 start= mid + 1;
//             }
//             else
//             {
//                 end = mid - 1;
//             }
//             mid = start + (end - start) / 2;
//         }
//     }

//     }
//     void swezal::last_display()
//     {
//           if (last_loc >= 0)
//         {
//             cout << "the elemnt is found at index" << last_loc << endl;
//             cout<<"the  elemnt at postion by layman    "  <<last_loc+1<<endl;
//         }
//         else
//         {
//             cout << "the elemnt is not found" << endl;
//         }

//     }

// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.first();
//     obj.last();
//     obj.first_display();
//     obj.last_display();

//     return 0;
// }

//! rest question is done 

