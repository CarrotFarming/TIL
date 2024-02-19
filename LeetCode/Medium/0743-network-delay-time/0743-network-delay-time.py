class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        graph = defaultdict(list)
        for u, v, w in times:
            graph[u].append((v, w))

        q = []
        heapq.heappush(q, (0, k))

        distance = [float("inf")] * (n + 1)
        distance[k] = 0

        while q:
            time, node = heapq.heappop(q)
            if time > distance[node]:
                continue

            for v, w in graph[node]:
                if time + w < distance[v]:
                    tmp = time + w
                    distance[v] = tmp
                    heapq.heappush(q, (tmp, v))

        dist = distance[1:]
        if max(dist) == float('inf'):
            return -1
        return max(dist)
