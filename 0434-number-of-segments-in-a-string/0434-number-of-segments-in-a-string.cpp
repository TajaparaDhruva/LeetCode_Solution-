class Solution {
public:
    int countSegments(string s) {
    int count = 0;
    int inWord = false;

    for (int ch : s) {
        if (ch != ' ' && !inWord) {
            count++;
            inWord = true;
        } else if (ch == ' ') {
            inWord = false;
        }
    }
    return count;
    }
};