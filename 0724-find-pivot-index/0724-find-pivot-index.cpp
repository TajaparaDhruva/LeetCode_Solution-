class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        int leftSum = 0;
        int rightSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            int currentEle = nums[i];

            rightSum = totalSum - leftSum - currentEle;

            if (leftSum == rightSum) {
                return i;
            }
            leftSum += nums[i];
        }
        
        return -1;
    }
};