// C++ Program for Implementation of Selection Sort.
#include<bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    //One by one move boundary of unsorted subarray
    for(i = 0; i < n-1; i++)
    {
        //Find the minimum element in unsorted array
        min_idx = i;
        for(j = i+1; j < n; j++)
        if(arr[j] < arr[min_idx])
           min_idx = j;

        //Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}

//Function to Print an Array
void printArray(int arr[], int size)
{
    int i;
    for(i=0; i < size; i++)
        cout<< arr[i] << " ";
    cout<< endl;
}

//Driver Program to test above functions
int main()
{
    int arr[] = {128,2,64,4,32,8,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    cout<< "Sorted Array:\n";
    printArray(arr,n);
    return 0;
}
