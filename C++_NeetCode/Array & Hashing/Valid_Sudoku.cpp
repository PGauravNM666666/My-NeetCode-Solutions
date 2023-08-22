class Solution {

// hashMap for rows with row as key and row as set
// hashMap for coloums with column as key and column as set
// hashMap for 3x3 squares with key = (r/3)*3 + c/3..
//initially thought -> just r/3+c/3 whicih makes 9x9 cube into 3x3, but their sum coincides with someother row and column sum....so we have to do *3 for one of them.

public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        unordered_map<int, set<char>> rows;
        unordered_map<int, set<char>> cols;
        unordered_map<int, set<char>> squares;
        for(int i=0;i<9;i++)
            for(int j=0;j<9;j++)
            {
                int something = (i/3)*3 + (j/3);
                if(board[i][j] == '.')
                    continue;
                if((rows[i].find(board[i][j]) != rows[i].end()) || 
                    (cols[j].find(board[i][j]) != cols[j].end()) || 
                    (squares[something].find(board[i][j]) != squares[something].end()))
                    return false;
                else
                {
                    rows[i].insert(board[i][j]);
                    cols[j].insert(board[i][j]);
                    squares[something].insert(board[i][j]);
                }
            }
        

        return true;
    }
};