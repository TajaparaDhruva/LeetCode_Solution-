class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0,right = 0;

        for(int i = 0; i < nums.size();i++){
                if(nums[left] == target){
                    return left;
                }
                else if(nums[left] < target ){
                    right++;
                }

                left++;
        }
        return right;
    }
};