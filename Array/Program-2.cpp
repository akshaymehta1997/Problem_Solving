#include <iostream>
#include <climits>
using namespace std;

void minMax(int &min, int &max, int arr[], int sizeOfArray)
{

  for (int i = 0; i < sizeOfArray; i++)
  {
    if (min > arr[i])
      min = arr[i];
    if (max < arr[i])
      max = arr[i];
  }
}

int main()
{
  int arr[] = {1000, 11, 445, 1, 330, 3000};
  int sizeOfArray = sizeof(arr) / sizeof(arr[0]);
  int min, max;
  min = INT_MAX;
  max = INT_MIN;
  minMax(min, max, arr, sizeOfArray);
  cout<<"Min="<<min<<" Max="<<max;
  return 0;
}