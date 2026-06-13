class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector <int> result;
    
        int ind;

        for(int i = 0;i<words.size();i++){
            ind = words[i].find(x);

            if(ind != -1){
                result.push_back(i);
            }
        }
        return result;
    }
};