class Solution {
public:
    string reversePrefix(string word, char ch) {
        int index = 0;
        while (index < word.length()) {
            if (word[index] == ch)
                break;
            ++index;
        }
        if (index == word.length()) { // no changes
            return word;
        }
        
        char tmp;
        for (int i=0; i<=index/2; ++i) {
            tmp = word[i];
            word[i] = word[index-i];
            word[index-i] = tmp;
        }
        
        return word;
    }
};