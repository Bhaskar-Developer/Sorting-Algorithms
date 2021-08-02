#include<bits/stdc++.h>

using namespace std;

void swap(int* p, int* q) {
  int temp=*p;
  *p=*q;
  *q=temp;  
}

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

void BubbleSort(int* arr, const int size) {
  for(int i=0;i<size-1;i++) 
    for(int j=0;j<size-i-1;j++) {
      if(arr[j]>arr[j+1])
        swap(&arr[j], &arr[j+1]);  
    }    
}

int main() {
   int size{};
   cout<<"Enter Length of Array: ";
   cin>>size;
   int arr[size]{};
   acceptArray(arr,size);
   cout<<"Array after sorting using Bubble Sort: ";
   BubbleSort(arr,size);
   printArray(arr,size);
}