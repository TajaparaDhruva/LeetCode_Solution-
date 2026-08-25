class Solution { 
public: 
    bool validDigit(int n, int x) { 
        string nums = to_string(n); 
        char digit = x + '0';

        if (nums[0] == digit) { 
            return false; 
        } 

        for (int i = 0; i < nums.size(); i++) { 
            if (nums[i] == digit) { 
                return true; 
            } 
        } 

        return false; 
    } 
};