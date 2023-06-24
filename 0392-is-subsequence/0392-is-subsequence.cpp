class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s == t)
            return true;
        int sPtr = 0;
        int tPtr = 0;
        
        while (tPtr < t.length()) {
            if (s[sPtr] == t[tPtr])
                ++sPtr;
            if (sPtr == s.length())
                return true;
            ++tPtr;
        }
        
        return false;
    }
};