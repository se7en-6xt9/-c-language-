#include<iostream>
#include<vector>
using namespace std;
int dupNum(vector<int> &arr){
int i=0;
int n=arr.size();
while(i<n){
  int correctIdx=arr[i]-1;
  if(i==correctIdx || arr[i]==arr[correctIdx]) i++;
  else swap(arr[i],arr[correctIdx]);
}
for(int j=0; j<n; j++){
  if(arr[j]!=j+1) return arr[j];
}
return -1;
}
  int main(){
    vector<int> v={5,2,4,1,2,3};
    cout<<dupNum(v)<<endl;
    return 0;
  }
