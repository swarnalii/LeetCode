class Solution:
    def arrayStringsAreEqual(self, word1: List[str], word2: List[str]) -> bool:
        s=""
        w1 = s.join(word1)
        w2 = s.join(word2)
        if(w1 == w2): 
            return True
        else:
            return False
        
        