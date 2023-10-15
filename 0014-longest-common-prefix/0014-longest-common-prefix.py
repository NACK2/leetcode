class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        strs.sort()
        n = len(strs)-1
        prefix = ""
        
        for i in range(len(strs[0])):
            if strs[0][i] == strs[n][i]: # comparing first and last strings, because list is sorted
                prefix += strs[0][i]
            else:
                break
            
        return prefix