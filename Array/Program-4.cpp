#include <iostream>
using namespace std;

void printArray(int arr[], int sizeOfArray)
{
  for (int i = 0; i < sizeOfArray; i++)
    cout << arr[i] << "";
  cout << endl;
}

void count0s1s2s(int arr[], int sizeOfArray, int &count0, int &count1, int &count2)
{
  for (int i = 0; i < sizeOfArray; i++)
    if (arr[i] == 0)
      count0++;
    else if (arr[i] == 1)
      count1++;
    else if (arr[i] == 2)
      count2++;
}

void GenerateArray(int count0, int count1, int count2, int sizeOfArray, int result[])
{
  for (int i = 0; i < sizeOfArray; i++)
    if (i < count0)
      result[i] = 0;
    else if (i < count0 + count1)
      result[i] = 1;
    else
      result[i] = 2;
}

int main()
{
  int arr[] = {0, 2, 1, 2, 0};
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  int count0 = 0, count1 = 0, count2 = 0;
  cout << "Array before Sorting:" << endl;
  printArray(arr, sizeOfArray);
  count0s1s2s(arr, sizeOfArray, count0, count1, count2);
  cout << count2 << count1 << count0;
  cout << "size:" << sizeOfArray << endl;
  GenerateArray(count0, count1, count2, sizeOfArray, arr);
  cout << "Array after Sorting:" << endl;
  printArray(arr, sizeOfArray);
  return 0;
}