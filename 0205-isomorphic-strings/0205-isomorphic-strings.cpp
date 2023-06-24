class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;
        
        // int sPtr = 0;
        // int tPtr = 0;
        unordered_map<char, char> sToT;
        
        for (int i=0; i<s.length(); ++i) {
            if (sToT.find(s[i]) == sToT.end()) {
                sToT[s[i]] = t[i];
            } 
            else if (sToT[s[i]] != t[i] ) 
                return false;
        }
        
        unordered_map<char, char> tToS;
        for (int i=0; i<t.length(); ++i) {
            if (tToS.find(t[i]) == tToS.end()) {
                tToS[t[i]] = s[i];
            } 
            else if (tToS[t[i]] != s[i] ) 
                return false;
        }
        
        
        
        return true;
    }
};