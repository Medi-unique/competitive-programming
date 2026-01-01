class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        num=''
        for d in digits:
            num+=str(d)
        res = int(num)+1
        res = str(res)
        result=[]
        for s in res:
            result.append(int(s))
        return result


        