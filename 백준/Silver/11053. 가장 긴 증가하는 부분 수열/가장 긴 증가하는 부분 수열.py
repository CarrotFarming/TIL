n = int(input()) # 수열 A의 크기 N (1 ≤ N ≤ 1,000)
a = list(map(int, input().split())) # 수열 A 입력받기

D = [1] * n # LIS 탐색을 위한 DP
for i in range(1, n): 
    for j in range(i):
        if a[j] < a[i]:
            D[i] = max(D[i], D[j]+1)

print(max(D))