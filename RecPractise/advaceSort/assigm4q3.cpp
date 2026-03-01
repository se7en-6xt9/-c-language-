#include<iostream>
using namespace std;

  int main(){
    int n=8;
    int arr[]={1,5,3,4,5,2,7,8};
    int idx=0;
    for(int i=0; i<n-1; i++){
      if(arr[i]<arr[i+1]) idx=i;
    }
    int count=0;
    for(int j=0; j<n-1; j++){
      if(j==idx) continue;
      if(arr[j]<arr[idx]) count++;
    }
    swap(arr[idx],arr[count]);
    for(int i=0; i<n; i++){
      cout<<arr[i]<<" ";
    }
    return 0;
  }






























