class Solution:
    def updateBoard(self, board: List[List[str]], click: List[int]) -> List[List[str]]:
        if not board:
            return []

        m, n = len(board), len(board[0])
        row, col = click

        # 지뢰 클릭 시
        if board[row][col] == 'M':
            board[row][col] = 'X'
            return board
        
        def dfs(r, c):
            # 범위 밖이거나 이미 클릭된 경우
            if r < 0 or r >= m or c < 0 or c >= n or board[r][c] != 'E':
                return
            
            # 주변(8칸) 지뢰 개수 세기
            mine = 0
            for dr in [-1, 0, 1]:
                for dc in [-1, 0, 1]:
                    if dr == 0 and dc == 0:
                        continue
                    nr, nc = r + dr, c + dc
                    if 0 <= nr < m and 0 <= nc < n and board[nr][nc] == 'M':
                        mine += 1
            
            # 지뢰 발견
            if mine > 0:
                board[r][c] = str(mine)
                return
            else:
                board[r][c] = 'B' 
                for dr in [-1, 0, 1]:
                    for dc in [-1, 0, 1]:
                        if dr == 0 and dc == 0:
                            continue
                        dfs(r + dr, c + dc)
        
        dfs(row, col)
        return board
