// MERGE TWO ARRAY

// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {
//     int arr1[10];
//     int arr2[10];
//     int arr3[100] = {0};
//     int size1;
//     int size2;

// public:
//     void input();
//     void merge();
//     void print();
// };
// void swezal::input()
// {
//     cout << "ENTER THE SIZE OF  FIRST THE ARRAY" << endl;
//     cin >> size1;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size1; i++)
//     {
//         cin >> arr1[i];
//     }
//     cout << "ENTER THE SIZE OF SECOND ARRAY" << endl;
//     cin >> size2;
//     cout << "enter the another arary " << endl;
//     for (int j = 0; j < size2; j++)
//     {
//         cin >> arr2[j];
//     }
// }
// void swezal::merge()
// {
//     int i = 0;
//     int j = 0;
//     int k = 0;
//     while (i < size1 && j < size2)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//         }
//     }
//     // copy first array into the elemnt
//     while (i < size1)
//     {
//         arr3[k++] = arr1[i++];
//     }
//     // copy second elemnt
//     while (j < size2)
//     {
//         arr3[k++] = arr2[j++];
//     }
// }
// void swezal::print()
// {
//     int ans[100];
//     int size = size1 + size2;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "THE MERGE ARRAY IS " << arr3[i] << endl;
//     }
// }
// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.merge();
//     obj.print();

//     return 0;
// }

//  shifted the zero to the last position

// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {

//     int arr[10];
//     int size;

// public:
//     void input();
//     void shift();
//     void print();
// };
// void swezal::input()
// {
//     cout << "ENTER THE SIZE OF  FIRST THE ARRAY" << endl;
//     cin >> size;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
// }
// void swezal::shift()
// {
//     int i = 0;
//     for (int j = 0; j < size; j++)
//     {
//         if (arr[j] != 0)
//         {
//             swap(arr[j], arr[i]);
//             i++;
//         }
//     }
// }
// void swezal::print()
// {
//     cout << "the zero shifted" << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout <<"  "<< arr[i];
//     }
// }

// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.shift();
//     obj.print();

//     return 0;
// }

//  ROTATED THE ARRAY
// #include <bits/stdc++.h>
// using namespace std;
// class swezal
// {

//     int arr[10];
//     int size;
//     int temp[10];
//     int k;

// public:
//     void input();
//     void shift();
//     void print();
// };
// void swezal::input()
// {
//     cout << "ENTER THE SIZE OF  FIRST THE ARRAY" << endl;
//     cin >> size;

//     cout << "enter the array" << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];

//     }
//     cout<<"enter the number you to shift"<<endl;
//     cin>>k;
// }
// void swezal::shift()
// {
//     int i;
//     for( i=0;i<size;i++)
//     {
//         temp[(i+k)%size]=arr[i];
//     }
//     arr[i]=temp[i];
// }
// void swezal::print()
// {
//     cout << "the zero shifted" << endl;

//     for (int i = 0; i < size; i++)
//     {
//         cout <<"  "<< temp[i];
//     }
// }

// int main()
// {
//     swezal obj;
//     obj.input();
//     obj.shift();
//     obj.print();

//     return 0;
// }

//         ADDING TWO ARRAY

#include <bits/stdc++.h>
using namespace std;
class swezal
{
    int arr1[10];
    int arr2[10];
    int arr3[10];
    int size1;
    int size2;

public:
    void input();
    void add();
    void display();
};
void swezal::input()
{
    cout << "ENTER THE SIZE OF FIRST ARRAY" << endl;
    cin >> size1;
    cout << "ENTER THE ARARAY " << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    cout << "ENTER THE SIZE OF SECOND ARRAY" << endl;
    cin >> size2;
    cout << "enter the array" << endl;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
}
void swezal::add()
{
    int i = size1 - 1;
    int j = size2 - 1;
    int carry = 0;
    int sum=0;
    while (i <= 0 && j >= 0)
    {
        int val1 = arr1[i];
        int val2 = arr2[j];
        int sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3[10] = sum;
        i--;
        j--;
    }
    // first  case
    while (i >= 0)
    {
        int sum = arr1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3[10] = sum;
        i--;
    }
    // second case
    while (j >= 0)
    {
        int sum = arr1[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        arr3[101] = sum;
        j--;
    }
    // third case
    while (carry != 0)
        int sum = carry;
    carry = sum / 10;
    sum = sum % 10;
    arr3[10] = sum;
}
void swezal::display()
{
    for (int i = 0; i < size1; i++)
    {
        cout << arr3[i];
    }
}
int main()
{
    swezal obj;
    obj.input();
    obj.add();
    obj.display();

    return 0;
}