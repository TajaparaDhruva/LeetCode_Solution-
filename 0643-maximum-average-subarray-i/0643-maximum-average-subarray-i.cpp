class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int left = 0, right = 0,sum = 0,max_value = INT_MIN;

        while (right < k) {
            sum += nums[right];
            right++;
        }

        max_value = max(max_value, sum);

        while (right < nums.size()) {
            sum -= nums[left];
            left++;

            sum += nums[right];
            right++;

            max_value = max(max_value, sum);
        }

        return (double)max_value / k;
    }
};