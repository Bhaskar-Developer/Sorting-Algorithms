#include<bits/stdc++.h>

using namespace std;

void swap(int* p, int* q) {
   int temp = *p;
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

void SelectionSort(int* arr,const int size) {
   int min_index{};
   for(int i=0;i<size-1;i++) {
     min_index = i;
     for(int j=i+1;j<size;j++) { 
       if(arr[j]<arr[min_index]) 
         min_index=j;
     }
    swap(&arr[min_index], &arr[i]);         
   }   
}

int main() {
   int size{};
   cout<<"Enter Length of Array: ";
   cin>>size;
   int arr[size]{};
   acceptArray(arr,size);
   SelectionSort(arr,size);
   cout<<"Array after sorting it using Selection Sort: ";
   printArray(arr,size);
}