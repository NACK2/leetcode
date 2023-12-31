class Solution {
public:
    bool checkIfPangram(string sentence) {
        // sorting will speed up looping through the alphabet characters later
        sort(sentence.begin(), sentence.end());
        unordered_map<char, int> counts;
        
        for (int i=0; i<sentence.length(); ++i) {
            ++counts[sentence[i]];
        }
        
        char tmp = 'a';
        while (tmp <= 'z') {
            if (!counts[tmp]) 
                return false;
            ++tmp;
        }
        
        return true;
    }
};