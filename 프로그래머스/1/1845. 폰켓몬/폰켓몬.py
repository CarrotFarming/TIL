def solution(nums):
    dic = {int:'0' for int in nums}
    num = len(dic)
    
    if len(nums)/2 <= num:
        return len(nums)/2
    else:
        return num