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

void swap(int* p,int* q) {
   int temp = *p;
   *p=*q;
   *q=temp;  
}

int partition(int* arr, const int low, const int high) {
   int i{},pivot{}; 
   pivot = arr[high];
   i = low-1; //initially -1
   for(int j=low;j<high;j++) { //loop runs from low till high-1
      if(arr[j]<pivot) {
         i++;
         swap(&arr[i],&arr[j]);
      }  
   }
   swap(&arr[i+1],&arr[high]);
   return i+1;
}

void QuickSort(int* arr, const int low, const int high) {
   if(low<high) {
         int pi=partition(arr,low,high);
         QuickSort(arr,low,pi-1);
         QuickSort(arr,pi+1,high);  
   }       
}

int main() {
   int size{};
   cout<<"Enter Length of Array: ";
   cin>>size;
   int arr[size]{};
   acceptArray(arr,size);
   QuickSort(arr,0,size-1);
   cout<<"Sorted Array using Quick Sort is: ";
   printArray(arr,size);
} 
