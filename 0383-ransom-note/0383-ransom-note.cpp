class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map<char, int> counts;
        
        for (int i=0; i<ransomNote.length(); ++i) {
            ++counts[ransomNote[i]];
        }
        
        for (int i=0; i<magazine.length(); ++i) {
            --counts[magazine[i]];            
        }
        
        for (auto count : counts) {
            // value for each key must <= 0 for possible ransomNote combination
            if (count.second > 0) { 
                return false;
            }
        }
        
        return true;
    }
};