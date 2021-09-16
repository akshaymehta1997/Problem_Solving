#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int arr[]={12,3,5,7,19};
  int sizeOfArray = sizeof(arr)/sizeof(arr[0]);
  int k=3;
  sort(arr,arr+sizeOfArray);
  cout<<"Kth smallest Element is: "<<arr[k-1]<<endl;
  return 0;
}