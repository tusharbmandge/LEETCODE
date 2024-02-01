class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int row;
        int column;
        for (int i=0;i<8;i++)
        {
            for (int j=0;j<8;j++)
            {
                if(board[i][j]=='R')
                {
                    row=i;
                    column=j;
                }
            }
        }
        int count=0;
        int original_row=row;
        int row1=row;
        int column1=column;
        while(row<8)
        {
            if(board[row][column]=='B')
            {
                break;
            }
            if(board[row][column]=='p' )
            {
                count++;
                break;
            }
            row++;
        }
        while(row1>=0)
        {
            if(board[row1][column]=='B')
            {
                break;
            }
            if(board[row1][column]=='p' )
            {
                count++;
                break;
            }
            row1--;
        }
        while(column<8)
        {
            if(board[original_row][column]=='B')
            {
                break;
            }
            if(board[original_row][column]=='p' )
            {
                count++;
                break;
            }
            column++;
        }
        while(column1>=0)
        {
            if(board[original_row][column1]=='B')
            {
                break;
            }
            if(board[original_row][column1]=='p' )
            {
                count++;
                break;
            }
            column1--;
        }
        return count;
    }
};