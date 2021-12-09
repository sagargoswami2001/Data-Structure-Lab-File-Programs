// C++ Program for implementation of Bubble Sort.
#include<bits/stdc++.h>
using namespace std;

void swap(int *sg, int *mg)
{
    int temp = *sg;
    *sg = *mg;
    *mg = temp;
}

//A Function to implement bubble sort
void bubbleSort(int arr[],int n)
{
    int i, j;
    for(i=0;i<n-1;i++)

    //Last i elements are already in place
    for(j=0;j<n-i-1;j++)
        if(arr[j]>arr[j+1])
            swap(&arr[j],&arr[j+1]);
}

//Function to Print an Array
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
        cout<< arr[i] << " ";
    cout<< endl;
}

//Driver Code
int main()
{
    int arr[] = {64,34,25,12,22,11,90};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    cout<< "Sorted Array:\n";
    printArray(arr,n);
    return 0;
}
