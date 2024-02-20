class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        graph = defaultdict(list)
        for f, t, p in flights:
            graph[f].append((t, p))

        q = [(0, src, 0)]

        # 싸이클이 도는 그래프가 주어지기 때문에 시간초과 발생 -> 방문 체크 필요
        # key: 노드, value: 경유 횟수
        visit = defaultdict(int)

        while q:
            cost, node, stopover = heapq.heappop(q)
            if node == dst:
                return cost

            # 우선순위 큐를 이용했기 때문에 어차피 cost는 최소
            # 따라서 재방문의 경우에는 이미 저장되어 있던 경유 횟수보다 현재 루트의 경유 횟수가 더 적은 경우가 최적임
            if node not in visit or visit[node] > stopover:
                visit[node] = stopover
                if stopover <= k:
                    for to, price in graph[node]:
                        heapq.heappush(q, (price+cost, to, stopover+1))
        
        return -1
