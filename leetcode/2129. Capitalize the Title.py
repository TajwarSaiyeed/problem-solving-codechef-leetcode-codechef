class Solution:
    def capitalizeTitle(self, title: str) -> str:
        w = title.split()
        ans = []
        
        for word in w:
            if len(word) <= 2:
                ans.append(word.lower())
            else:
                ans.append(word.capitalize())
        
        return ' '.join(ans)
    
    
# https://leetcode.com/problems/capitalize-the-title/
    