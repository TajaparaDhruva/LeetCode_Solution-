class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxLength = 0,count = 1;

        for(int i = 0 ;i < sentences.size();i++){
            for(int j = 0;j < sentences[i].size();j++){
                if(sentences[i][j] == ' '){
                    count++;
                    cout << count << endl;
                }
            }
            maxLength = max(count,maxLength);
            count = 1;
        }
        return maxLength;
    }
};