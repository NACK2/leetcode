class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        prefix = strs[0]
        length = len(strs)
        
        for i in range(1, length):
            prefixLen = 0
            for c in range(min(len(prefix), len(strs[i]))):
                if prefix[c] == strs[i][c]:
                    prefixLen += 1
                else:
                    break
            prefix = prefix[:prefixLen]
            
        return prefix