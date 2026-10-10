class Solution {
public:
    bool checkBox(int i, int j, int n, int m, vector<vector<char>>& board) {
        vector<int> freq(10, 0);
        for (int k = i; k < n; k++) {
            for (int l = j; l < m; l++) {
                if (board[k][l] != '.')
                    freq[board[k][l] - '0']++;
            }
        }
        for (int k = 1; k <= 9; k++)
            if (freq[k] > 1){
                
                return false;}
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9, m = 9;
        for (int i = 0; i < n; i++) {
            bool x = true;
            vector<int> row_freq(10, 0), col_freq(10, 0);
            for (int j = 0; j < m; j++) {
                if (board[i][j] != '.')
                    row_freq[board[i][j] - '0']++;
                if (board[j][i] != '.')
                    col_freq[board[j][i] - '0']++;
                if (i % 3 == 0 && j % 3 == 0) {
                    x &= checkBox(i, j, i + 3, j + 3, board);
                }
            }
            cout << x << " ";
            for (int i = 1; i <= 9; i++)
                if (row_freq[i] > 1)
                    return false;
            for (int i = 1; i <= 9; i++)
                if (col_freq[i] > 1)
                    return false;
            if (!x)
                return false;
        }
        return true;
    }
};