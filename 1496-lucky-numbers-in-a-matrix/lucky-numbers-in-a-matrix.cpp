class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> max_in_column(matrix[0].size());
        vector<int> min_in_row;
        vector<int> ans;

        for (int i=0;i<matrix.size();i++)
        {
            int min_number=100000000;
            for (int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j]<min_number)
                {
                    min_number=matrix[i][j];
                }
                if (matrix[i][j]>max_in_column[j])
                {
                    max_in_column[j]=matrix[i][j];
                }
            }
            min_in_row.push_back(min_number);
        }
        unordered_map<int,int> mt;
        // for (int i=0;i<min_in_row.size();i++)
        // {
        //     for (int j=0;j<max_in_column.size();j++)
        //     {
        //         if(min_in_row[i]==max_in_column[j])
        //         {
        //             ans.push_back(min_in_row[i]);
        //         }
        //     }
        // }

        for (int i=0;i<min_in_row.size();i++)
        {
            mt[min_in_row[i]]++;
        }
        for (int i=0;i<max_in_column.size();i++)
        {
            if (mt[max_in_column[i]]!=0)
            {
                ans.push_back(max_in_column[i]);
            }
        }
        return ans;
    }
};
