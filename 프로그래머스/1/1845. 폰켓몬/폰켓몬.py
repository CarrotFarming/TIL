def solution(nums):
    dic = {int:'0' for int in nums}
    num = len(dic)
    pick = len(nums)/2
    
    if pick <= num:
        return pick
    else:
        return num