class Solution {
public:
    int arrangeCoins(int n) {
        int sum = 0;
        int count = 0;
        // :D
        while (n > 0) {
            ++count;
            n -= count;
        }
        if (n != 0) 
            --count;
        
        return count;
    }
};