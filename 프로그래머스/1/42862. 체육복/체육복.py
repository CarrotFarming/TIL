def solution(n, lost, reserve):
    _lost = set(lost) - set(reserve)
    _reserve = set(reserve) - set(lost)
    
    answer = n - len(_lost)
    
    for student in _lost:
        if student - 1 in _reserve:
            answer += 1
            _reserve.remove(student - 1)
        elif student + 1 in _reserve:
            answer+= 1
            _reserve.remove(student + 1)

    return answer