class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        // for (int i=0;i<mat.size();i++)
        // {
        //     for (int j=0;j<mat[i].size();j++)
        //     {
        //         if (i==j)
        //         {
        //             sum=sum+mat[i][j];
        //             if (j!=mat[i].size()-1-j)
        //             {
        //                 sum=sum+mat[i][mat[i].size()-1-j];
        //             }
        //         }
        //     }
        // }
        int i=0;
        int j=0;
        while(i<mat.size())
        {
            if (i==j)
            {
                sum=sum+mat[i][j];
                if (j!=mat[i].size()-1-j)
                {
                    sum=sum+mat[i][mat[i].size()-1-j];
                }
            }
                i++;
                j++;
        }

        return sum;
    }
};