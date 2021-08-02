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

void Merge(int* arr, const int low, const int mid, const int high) {
   int i{},j{},k{};
   int n1 = mid-low+1; 
   int n2 = high-mid; //This is done to prevent possible overflow  
   int leftArray[n1];
   int rightArray[n2];

   for(i=0;i<n1;i++)
   	leftArray[i]=arr[low+i]; //starts from low
   for(j=0;j<n2;j++)
        rightArray[j]=arr[j+mid+1]; //starts from mid+1

   i=0,j=0,k=low;
   
   while(i<n1 && j<n2) {
   	if(leftArray[i]<rightArray[j]) {
        	arr[k]=leftArray[i];
  	        i++;
        } else {
          	arr[k]=rightArray[j];
	        j++; 
        }
        k++;
   }

   //This will run if leftArray(sorted) is still not completely visited, which means the rightArray is fully visited.
   //In this case we simply copy the elements from the leftArray to the main array.
   while(i<n1) {
   	arr[k]=leftArray[i];
        i++;
        k++;
   }

   //This will run if rightArray(sorted) is still not completely visited, which means the leftArray is fully visited.
   //In this case we simply copy the elements from the rightArray to the main array.
   while(j<n2) {
   	arr[k]=rightArray[j];
	j++;
	k++;
   }
}

void MergeSort(int* arr, const int low, const int high) {
   if(low<high) {
        int mid = low+(high-low) / 2;
   	MergeSort(arr,low,mid);
        MergeSort(arr,mid+1,high);
        Merge(arr,low,mid,high);
   }
}

int main() {
   int size{};
   cout<<"Enter Length of Array: ";
   cin>>size;
   int arr[size]{};
   acceptArray(arr,size);
   MergeSort(arr,0,size-1);
   cout<<"Array after sorting it with Merge Sort: ";
   printArray(arr,size);
} 
