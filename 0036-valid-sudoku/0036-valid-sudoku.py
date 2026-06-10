class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        rows = [set() for _ in range (9)]
        cols = [set() for _ in range (9)]
        subs = [set() for _ in range (9)]

        for r in range(9):
            for c in range(9):
                if board[r][c] == ".":
                    pass
                else:
                    if board[r][c] in rows[r]:
                        return False
                    else:
                        rows[r].add(board[r][c])

                    if board[r][c] in cols[c]:
                        return False
                    else:
                        cols[c].add(board[r][c])

                    if board[r][c] in subs[(r//3)*3+c//3]:
                        return False
                    else:
                        subs[(r//3)*3+c//3].add(board[r][c])

        return True       