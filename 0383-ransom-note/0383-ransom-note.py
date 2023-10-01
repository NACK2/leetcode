class Solution:
    def canConstruct(self, ransomNote: str, magazine: str) -> bool:
        """
        Notes:
        - [] and .get() can both access keys, h/e for [] it will return error if key DNE, but .get() will return None
        - H/e if you were to access the uninit'd key "a", you could have a second parameter that will be returned
        if the key DNE, so .get("a", 0) will return 0 instead of None if "a" is a key that DNE
        """
        letterCount = {}
    
        for i in ransomNote:
            letterCount[i] = letterCount.get(i, 0) + 1
            
        for i in magazine:
            letterCount[i] = letterCount.get(i, 0) - 1
        
        for i in letterCount:
            if letterCount[i] > 0:
                return False
            
        return True