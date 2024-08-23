class Solution:
    def fillCups(self, amount: List[int]) -> int:
        sec = 0
        cups = sorted(amount, reverse=True)

        while sum(cups) != 0:
            if cups[0] == 0:  # 제일 큰 값이 0
                return sec + cups[2]
            elif cups[1] == 0:  # 중간 값이 0
                return sec + cups[0]
            else:
                cups[0] -= 1
                cups[1] -= 1
                sec += 1
            cups = sorted(cups, reverse=True)

        return sec
        