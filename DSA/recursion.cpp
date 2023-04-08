// #include<bits/stdc++.h>                factorial of the number
// using namespace std;
// int factorial(int n)
// {
//     if(n==0)
//     return 1;
//     int small=factorial(n-1);
//     int big =n*small;
//     return big;
// }
// int main(){
// int n;
// cout<<"enter the value"<<endl;
// cin>>n;
// int ans=factorial(n);
// cout<<"the factorial of the number "<<ans<<endl;
// return 0;
// }

// print two ki power n
// #include<bits/stdc++.h>
// using namespace std;
// float power(int n)
// {
//     if(n==0)
//     return 1;   // base case
//     float power2= pow(2,n);  // recursive relation
//     return power2;
// }
// int main(){
//     int n;
//     cout<<"enter the power"<<endl;
//     cin>>n;
//     int ans=power(n);
//     cout<<"the powwer is"<<"  "<<ans<<endl;

// return 0;
// }

// count the number the print the all the number
// #include<bits/stdc++.h>
// using namespace std;
// void print(int n)
// {
//     if(n==0){
//     return ;
//     }
//     cout<<n<<endl;
//     print(n-1);  //recursion relation
// }
// int main(){
// int n;
// cin>>n;
// print(n);

// return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;                        // same code but little change
// void print(int n)
// {
//     if(n==0){
//     return ;
//     }
//     print(n-1);  //recursion relation
//     cout<<n<<endl;
// }
// int main(){
// int n;
// cin>>n;
// print(n);

// return 0;
// }

// fibanacci series
// #include<bits/stdc++.h>
// using namespace std;
// int fib(int n)
// {
//     if(n==0)
//     return 0;
//     if(n==1)
//     return 1;
//     int sum=fib(n-1)+fib(n-2);
//     return sum;

// }
// int main(){
//     int n;
//     int i=0;
//     cout<<"enter the number"<<endl;
//     cin>>n;
//     while(i<n){

//      cout<<"  "<<fib(i);
//      i++;
//     }

// return 0;
// }

// say digits
//  #include<bits/stdc++.h>
//  using namespace std;
//  void saydigits(int n, string arr[])
//  {
//      if(n==0)
//      return ;
//      int digit=n%10;
//      n=n/10;
//      saydigits(n,arr);
//      cout<<arr[digit]<<" ";
//  }
//  int main(){
//      string arr[10]={ "zero","one","two","arrswezal","four","five","six","seven","eight","nine" };
//      int n;
//      cout<<"enter the value"<<endl;
//      cin>>n;
//      saydigits(n,arr);

// return 0;
// }

// check wheather the number is sorted or not
// #include<bits/stdc++.h>
// using namespace std;
// bool isSorted(int *arr, int size)
// {
//     if(size==0||size==1)
//     {
//         return 1;
//     }
//     if(arr[0]>arr[1])
//     {
//     return false;

//     }else
//     {
//         bool reamingpart=isSorted(arr+1,size-1);
//         return reamingpart;
//     }
// }
// int main(){
//     int arr[100];
//     int size;
//     cout<<"enter the number of the array "<<endl;
//     cin>>size;
//     cout<<"ENTER THE SORTED ARRAY "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     bool ans=isSorted(arr,size);
//     if(ans)
//     {
//         cout<<"Array is sorted"<<endl;

//     }else{
//         cout<<"array is not sorted"<<endl;
//     }

// return 0;
// }

// sum of arr with the help of the  recursion

// #include<bits/stdc++.h>
// using namespace std;
// int sum(int size,int arr[100])
// {

//     if(size==0)
//     {
//         return 0;
//     }
//     if(size==1)
//     {
//         return arr[0];
//     }
//     int remainingPart=sum(size-1,arr+1);
//     int sum2=arr[0]+remainingPart;
//     return sum2;
// }
// int main(){
//         int arr[100];
//     int size;
//     cout<<"enter the number of the array "<<endl;
//     cin>>size;
//     cout<<"ENTER THE SORTED ARRAY "<<endl;
//     for(int i=0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//    int sum2=sum(size,arr);
//     cout<<sum2;

// return 0;
// }

// linear search with the help of recursion

// #include<bits/stdc++.h>
// using namespace std;
// bool linearsearch(int arr[],int size,int key)
// {
//     if(size==0)
//     return false;
//     if(arr[0]==key)
//     {
//         return true;
//     }
//     else{
//         bool remainingPart=linearsearch(arr+1,size-1,key);
//         return remainingPart;
//     }
// }
// int main(){
//     int arr[100];
//     int size;
//     int key;
//     cout<<"enter the sizer of the array "<<endl;
//     cin>>size;

//     cout<<"enetr the array "<<endl;
//     for(int i =0;i<size;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"enter the key to be found"<<endl;
//     cin>>key;
//     bool ans=linearsearch(arr,size,key);
//     if(ans)
//     {
//         cout<<"the key is found"<<endl;

//     }
//     else
//     {
//         cout<<"the key was not  found"<<endl;
//     }

// return 0;
// }

// binary search with the help of recusion

// #include <bits/stdc++.h>
// using namespace std;
// bool binarysearch(int arr[], int s, int e, int key, int size)
// {
//     if (s >e)
     
//      return false;
//     int mid = s + (e - s) / 2;
//     if (arr[mid] == key)
      
//        return true;
//     if (arr[mid] < key)
//     {
//        return  binarysearch(arr, mid + 1, e, key, size);
//     }
//     else
//     {
//         return binarysearch(arr, s, mid - 1, key, size);
//     }
// } 
// int main()
// {

//     int arr[100];
//     int size;
//     int key;
//     cout << "enter the sizer of the array " << endl;
//     cin >> size;

//     cout << "enetr the array " << endl;
//     for (int i = 0; i < size; i++)
//     {
//         cin >> arr[i];
//     }
//     cout << "enter the key to be found" << endl;
//     cin >> key;
//     cout << "present or not" <<endl<< binarysearch(arr, 0, size-1, key, size);

//     return 0;
// }


// print power set
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

void printSubSet(int s[], int size)
{
	string subSet;

	for (int i = 0; i < pow(2, size); i++)
	{
		subSet = "";
		for (int j = 0; j < size; j++)
		{
			if ((i & (1 << j)) != 0)
				subSet += to_string(s[j]) + ",";
		}

		if (subSet.length() > 2)
        {
			subSet = subSet.substr(0, subSet.size() - 1);
		}

		subSet += "";

		cout << subSet << endl;
		cout << "\n";
	}
}
int main()
{
	int size;

	cout << "Enter the size:" << endl;
	cin >> size;

	int s[size];
	cout << "Enter the numbers of the set one by one:" << endl;

	for (int i = 0; i < size; i++)
		cin >> s[i];

	cout << "\nSubsets of this set are: " << endl;
	printSubSet(s, size);

	return 0;
}

