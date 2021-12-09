// Binary Search in C++.
#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
  while (left <= right)
  {
    int mid = left + (right - left) / 2;

    if (arr[mid] == x)
    {
      return mid;
    }
    else if (arr[mid] < x)
    {
      left = mid + 1;
    }
    else
    {
      right = mid - 1;
    }
  }

  return -1;
}

int main()
{
 int myarr[10];
 int num;
 int output;

 cout << "Enter 10 Elements:" << endl;
 for (int i = 0; i < 10; i++)
 {
   cin >> myarr[i];
 }
 cout << "\nEnter an Element to Search: ";
 cin >> num;

 output = binarySearch(myarr, 0, 9, num);

 if (output == -1)
 {
   cout << "\nNo Match Found" << endl;
 }
 else
 {
   cout << "\nMatch Found At Position: " << output << endl;
 }
 return 0;
}
