#include<iostream>
#include<vector>
using namespace std;
int main(){
  int arr[]={1,2,3,4,56,7,7,3,6,5,5};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans[n];
  int sum=0;
  for(int i=0; i<n; i++){
    sum+=arr[i];
    ans[i]=sum+arr[i];
  }
  for(int i=0; i<n; i++){
    cout<<ans[i]<<" ";
  }
}
