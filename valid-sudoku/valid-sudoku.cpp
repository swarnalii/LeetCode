class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row[9][9] = {0}, col[9][9] = {0}, box[9][9] = {0};
        for(int i = 0; i < 9 ; i++){
            for(int j = 0; j < 9; j++){
                if(board[i][j] != '.'){
                    int val = board[i][j] - '1',  k = i / 3 * 3 + j / 3;
                    if(row[i][val] or col[j][val] or box[k][val])
                        return false;
                    row[i][val] = col[j][val] = box[k][val] = 1;
                }
            }
        }
        return true;
    }
};

// visualising k
/**
0  0  0 | 1  1  1 | 2  2  2
0  0  0 | 1  1  1 | 2  2  2
0  0  0 | 1  1  1 | 2  2  2
--------+---------+---------
3  3  3 | 4  4  4 | 5  5  5
3  3  3 | 4  4  4 | 5  5  5
3  3  3 | 4  4  4 | 5  5  5
--------+----------+--------
6  6  6 | 7  7  7 | 8  8  8
6  6  6 | 7  7  7 | 8  8  8
6  6  6 | 7  7  7 | 8  8  8
**/