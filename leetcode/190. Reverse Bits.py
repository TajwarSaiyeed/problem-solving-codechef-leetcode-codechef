class Solution:
    def int_to_bits(self, n: int) -> str:
        if n < 0:
            n = (1 << 32) + n

        bits = []

        for i in range(32):
            bit = n & 1
            bits.append(str(bit))

            n >>=1
        
        bits.reverse()
        return "".join(bits)


    def reverseBits(self, n: int) -> int:
        # x = format(n & 0xFFFFFFFF, '032b')
        x = self.int_to_bits(n)
        x = x[::-1]
        return int(x, 2)