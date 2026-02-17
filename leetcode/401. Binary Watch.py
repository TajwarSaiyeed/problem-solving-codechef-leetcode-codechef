from typing import List


class Solution:
    def readBinaryWatch(self, turnedOn: int) -> List[str]:
        ans = []
        for i in range(12):
            for j in range(60):
                if i.bit_count() + j.bit_count() == turnedOn:
                    x = str(i)
                    y = str("0" + str(j) if j < 10 else j)
                    ans.append(f"{x}:{y}")

        return list(ans)


# https://leetcode.com/problems/binary-watch/
