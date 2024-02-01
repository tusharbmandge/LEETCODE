class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> row;
        set<int> column;
        for (int i=0;i<matrix.size();i++)
        {
            for (int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    row.insert(i);
                    column.insert(j);
                }
            }
        }
        
        for (int i=0;i<matrix.size();i++)
        {
            auto pos = row.find(i);
            if (pos != row.end())
            {
                for(int j=0;j<matrix[i].size();j++)
                {
                    matrix[i][j]=0;
                }
            }
        }
        for (int i=0;i<matrix[0].size();i++)
        {
            auto pos=column.find(i);
            if (pos != column.end())
            {
                for(int j=0;j<matrix.size();j++)
                {
                    matrix[j][i]=0;
                }
            }
 
        }

        
        
    }
};