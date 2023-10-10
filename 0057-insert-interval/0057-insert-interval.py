class Solution:
    def insert(self, intervals: List[List[int]], newInterval: List[int]) -> List[List[int]]:
        res = []
        intervalIndex = 0
        
        for i in range(len(intervals)):
            if newInterval[1] < intervals[i][0]: # nothing overlapping
                res.append(newInterval)
                return res + intervals[i:]
            elif newInterval[0] > intervals[i][1]: # start of newInterval and end of curr interval dont overlap
                res.append(intervals[i])
            else: # some sort of overlap, take min of curr and newInterval start, and max of curr and newInterval end
                newInterval = [min(newInterval[0], intervals[i][0]), max(newInterval[1], intervals[i][1])]
            
        res.append(newInterval) # adding updated interval or possible case where newInterval > all intervals
                
        return res