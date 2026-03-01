class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int i=0;
        vector<int> ans;
        int n=nums.size();
        while(i<n){
            int correctIdx=nums[i]-1;
            if(i==correctIdx || nums[i]==nums[correctIdx]) i++;
            else swap(nums[i],nums[correctIdx]);  
        }
        for(int j=0; j<n; j++){
            if(nums[j]!=j+1){
                ans.push_back(nums[j]);
                ans.push_back(j+1);
                return ans;
            }
        }
        return ans;
    }
};
