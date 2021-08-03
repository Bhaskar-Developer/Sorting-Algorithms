#include<bits/stdc++.h>

using namespace std;

void acceptArray(int* arr,const int size) {
   cout<<"Enter the Array Elements: ";
   for(int i=0;i<size;i++) 
        cin>>arr[i];
}

void printArray(int* arr, int size) {
   cout<<"Array: ";
   for(int i=0;i<size;i++) 
   	cout<<arr[i]<<" ";
   cout<<endl;
}

void InsertionSort(int* arr, const int size) {
   int i{},j{},key{};
   for(i=1;i<size;i++) { //this starts from the second element till the last element
    key=arr[i];
    j=i-1;
    //move all elements of array from 0 to i-1 that are greater than key by one position ahead
    while(j>=0 && arr[j]>key) {
      arr[j+1]=arr[j];
      j=j-1;  
    }
    arr[j+1]=key;  
   }
}

int main() {
   int size{};
   cout<<"Enter Length of Array: ";
   cin>>size;
   int arr[size]{};
   acceptArray(arr,size);
   cout<<"The array after Sorting it with Insertion Sort: ";
   InsertionSort(arr,size);
   printArray(arr,size);
}