class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) 
            return false;
        
        // if a key has a value that is NOT 0, that means it is not an anagram
        unordered_map<char, int> counts;
        for (int i=0; i<s.length(); ++i) {
            ++counts[s[i]];
            --counts[t[i]];
        }
        // for (int i=0; i<s.length(); ++i) {
        //     if (counts[s[i]] != 0) 
        //         return false;
        // }
        
        for (auto i : counts) {
            if (i.second != 0) 
                return false;
        }
        
        return true;
    }
};