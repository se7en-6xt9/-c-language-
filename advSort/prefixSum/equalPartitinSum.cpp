#include<iostream>
using namespace std;
int main(){
  //int arr[]={3,2,5,1,4,6,7,5,8,7,6,5,9,5};
  int arr[]={1,5,4,5,7,3,2,1,2};
  int n=sizeof(arr)/sizeof(arr[0]);
  int ans[n];
  int sum=0;
  for(int i=0; i<n; i++){
    sum+=arr[i];
    ans[i]=sum;
  }
  for(int i=0; i<n; i++){
    if(2*ans[i]==ans[n-1]){
      cout<<"Partition index is : "<<i<<endl;
    }
  }
  cout<<"End ...\n";
  return 0;
}
