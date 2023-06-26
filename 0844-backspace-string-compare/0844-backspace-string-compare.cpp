class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string newS = "";
        string newT = "";
        int count = 0;
        
        for (int i=s.length()-1; i>=0; --i) {
            if (s[i] == '#')
                ++count;
            else if (count > 0)
                --count;
            else 
                newS += s[i]; 
            // newS will be backwards but doesnt matter because so will newT
        }
        
        count = 0;
        for (int i=t.length()-1; i>=0; --i) {
            if (t[i] == '#')
                ++count;
            else if (count > 0)
                --count;
            else 
                newT += t[i]; 
        }
        
        return newS == newT;
    }
};