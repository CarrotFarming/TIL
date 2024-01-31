from bisect import bisect_left

class Solution:
    def triangleNumber(self, nums: List[int]) -> int:
        nums.sort() # 이진탐색을 위한 정렬
        cnt, len_nums = 0, len(nums)

        # 이중 for문: 삼각 부등식을 위한 두 개의 변을 선택
        for i in range(len_nums - 2):
            if nums[i] == 0:
                continue
            for j in range(i + 1, len_nums - 1):
                tmp = nums[i] + nums[j]
                index = bisect_left(nums, tmp, j + 1)
                cnt += (index - (j + 1))

        return cnt
