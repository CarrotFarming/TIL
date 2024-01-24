class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:

        # endi 기준 정렬
        intervals.sort(key=lambda x: x[1])
        
        removeCount = 0 
        end = intervals[0][1]

        for interval in intervals[1:]:
            if end > interval[0]:
                # 현재의 endi가 다음의 starti와 겹칠 경우 제거 카운트 증가
                removeCount += 1
            else:
                # 겹치지 않는 경우 endi 업데이트
                end = interval[1]

        return removeCount
