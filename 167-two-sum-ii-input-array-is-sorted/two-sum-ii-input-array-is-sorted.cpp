class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int current_sum = numbers[left] + numbers[right];

            if (current_sum == target) {
                // 1-based indexing required hai
                return {left + 1, right + 1};
            } 
            else if (current_sum > target) {
                // Sum bada hai, toh right pointer ko peeche shift karein
                right--;
            } 
            else {
                // Sum chhota hai, toh left pointer ko aage badhayein
                left++;
            }
        }

        return {};
    }
};