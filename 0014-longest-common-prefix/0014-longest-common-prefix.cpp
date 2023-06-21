class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        string prefix = "";
        int n=strs.size();
        
        for (int i=0; i<strs[0].length(); ++i) {
            // since vector is sorted, compare each letter in first and last string
            if (strs[0][i] != strs[n-1][i]) 
                return prefix;
            prefix += strs[0][i];
            
        }
        return prefix;
    }
};