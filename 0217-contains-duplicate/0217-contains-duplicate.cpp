class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> uniq;

        for(int i = 0;i<nums.size();i++){
            uniq.insert(nums[i]);
        }

        return nums.size() != uniq.size();
    }
};