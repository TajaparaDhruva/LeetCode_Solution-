class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
                unordered_map <int,int> freq;

        for(int val : arr){
            freq[val]++;
        }

        unordered_set <int> result;

        for(auto it : freq){
            result.insert(it.second);
        }
        
        return result.size() == freq.size();
    }
};