class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ret(candies.size());
        int max = *max_element(candies.begin(), candies.end());
        
        for (int i=0; i<candies.size(); ++i) {
            if (candies[i]+extraCandies >= max) 
                ret[i] = true;
            else
                ret[i] = false;
        }
        
        return ret;
    }
};