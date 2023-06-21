class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ret = "";
        int w1 = 0;
        int w2 = 0;
        while (w1 < word1.size() || w2 < word2.size()) {
            if (w1 < word1.size())
                ret += word1[w1];
            if (w2 < word2.size())
                ret += word2[w2];
            ++w1;
            ++w2;
        }
        
        return ret;
    }
};