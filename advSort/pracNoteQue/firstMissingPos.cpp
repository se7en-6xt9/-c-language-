#include<iostream>
#include<vector>
using namespace std;
int  firMIssingPOs(vector<int> &arr){
  int i=0;
  int n=arr.size();
  while(i<n){
  if(arr[i]>0){
  int correctIdx=arr[i]-1;
  if(i==correctIdx || arr[i]<=0 || arr[i]>n) i++;
  else swap(arr[i],arr[correctIdx]);
  } else i++;
}
int count=1;
for(int j=0; j<n; j++){
  if(arr[j]<=0) continue;
  else if (count == arr[j]) count++;
  else return count;
}
return -1;
}
int main(){
  vector<int> v={3,4,-1,1,2,6};
  cout<<firMIssingPOs(v)<<endl;
  return 0;
}
