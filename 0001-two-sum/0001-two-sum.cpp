class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    //complement = target - current value;


    //current = 7;
    //target = 9;
    //complement = 9 -7 = 2;

    unordered_map <int,int> mp;// 2

    for(int i = 0;i<nums.size();i++){

        int complement = target - nums[i];

        if(mp.find(complement) != mp.end()){
            return {mp[complement] , i};
        }

        mp[nums[i]] = i;
    }

    return {};

    }

};