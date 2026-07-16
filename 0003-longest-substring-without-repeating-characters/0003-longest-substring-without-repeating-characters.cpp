class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        set<char> freq;

        int left = 0, right = 0,max_length = 0;

        while (right < s.length()) {

            while (freq.find(s[right]) != freq.end()) {
                freq.erase(s[left]);
                left++;
            }

            freq.insert(s[right]);

            max_length = max(max_length, right - left + 1);

            right++;
        }

        return max_length;
    }
};