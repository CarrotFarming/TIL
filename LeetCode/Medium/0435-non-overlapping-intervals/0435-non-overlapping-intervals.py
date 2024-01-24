class Solution:
    def eraseOverlapIntervals(self, intervals: List[List[int]]) -> int:

        intervals.sort(key=lambda x: x[1]) # endi 기준 정렬
        
        overlap = 0
        end = intervals[0][1]
        for i in range(1, len(intervals)):
            if end <= intervals[i][0]:
                end = intervals[i][1]
            else:
                overlap += 1
                 
        return overlap
    