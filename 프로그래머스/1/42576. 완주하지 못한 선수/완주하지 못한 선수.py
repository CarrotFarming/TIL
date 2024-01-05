def solution(participant, completion):
    answer = ''
    hashTable = {}
    sumHash = 0
    
    for i in participant:
        hashTable[hash(i)] = i
        sumHash += hash(i)
        
    for i in completion:
        sumHash -= hash(i)
    
    answer += hashTable[sumHash]
    
    return answer