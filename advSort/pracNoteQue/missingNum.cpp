#include<iostream>
#include<vector>
using namespace std;
int missingNum(vector<int> &v){
  int i=0;
  int n=v.size();
  while(i<n){
    int correctIdx=v[i]-1;
    if(i==correctIdx || correctIdx>=n) i++;
    else swap(v[i],v[correctIdx]);
  }
  for(int i=0; i<n; i++){
    if(v[i]!=i+1) return i+1;
  }
  return -1;
}
int main(){
  vector<int> v = {4,1,2,6,3,8,5,7,10};
  cout<<missingNum(v)<<endl;
  return 0;
}
