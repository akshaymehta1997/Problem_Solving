#include <iostream>
using namespace std;

void printArray(int arr[], int sizeOfArray)
{
  for (int i = 0; i < sizeOfArray; i++)
    cout << arr[i] << "";
  cout << endl;
}

void reverseArray(int arr[], int sizeOfArray)
{
  for (int i = 0; i < sizeOfArray / 2; i++)
  {
    int temp = arr[i];
    arr[i] = arr[sizeOfArray - i - 1];
    arr[sizeOfArray - i - 1] = temp;
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6};
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  cout << "Size of Array:" << sizeOfArray << endl;
  cout << "Array that need to be reversed:" << endl;
  printArray(arr, sizeOfArray);
  reverseArray(arr, sizeOfArray);
  cout << "Reversed Array is:" << endl;
  printArray(arr, sizeOfArray);
  return 0;
}