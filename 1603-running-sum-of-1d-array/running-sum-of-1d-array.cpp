class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        if(nums.size()<=1000 && nums.size()>=1){
            for(int i=1; i<nums.size(); i++){
                nums[i]+=nums[i-1];
            }
            return nums;
        }
        return {};
    }
};