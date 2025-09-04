class Solution:
    def reverse(self, x: int) -> int:
        k=str(x)
        if k[0]!="-":
            if int("".join(k)[::-1])>=(2**31)-1:
                return 0
            return int("".join(k)[::-1])
        else:
            if -1*int("".join(k)[:0:-1])<=(-2**31)-1:
                return 0
            return -1*int("".join(k)[:0:-1])