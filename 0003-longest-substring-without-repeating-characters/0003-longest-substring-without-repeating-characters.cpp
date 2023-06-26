class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> counts;
        int max = 0;
        int count = 0;
        
        for (int i=0; i<s.length(); ++i) {
            for (int j=i; j<s.length(); ++j) {
                ++counts[s[j]];
                if (counts[s[j]] > 1) { // char alr exists
                    counts.clear();
                    break;
                }
                ++count;
            }
            if (count > max)
                max = count;
            
            count = 0;
        }
        
        return max;
    }
};