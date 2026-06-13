class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string result = words[0];
        vector<string> str;

        for(char ch : result) {
            int ind;

            for(int i = 1; i < words.size(); i++) {
                ind = words[i].find(ch);

                if(ind == -1) {
                    break;
                }
                else {
                    words[i].erase(ind, 1);
                }
            }

            if(ind != -1) {
                str.push_back(string(1, ch));
            }
        }

        return str;
    }
};