class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        if(nums.size()>=1 && nums.size()<=1000){
            vector<int> ans(2*(nums.size()));
            for(int i=0; i<nums.size(); i++){
                ans[i] = nums[i];
                ans[i+nums.size()]=nums[i];
            }
            return ans;
        }
        return {};
    }
};