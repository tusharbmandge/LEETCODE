class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> final_array;
        vector<int> array;
        int rows=mat.size();
        int element_count=mat.size()*mat[0].size();
        if (r*c != element_count)
        {
            return mat;
        }
        for (int i=0;i<mat.size();i++)
        {
            for (int j=0;j<mat[i].size();j++)
            {
                array.push_back(mat[i][j]);
                if (array.size()==c)
                {
                    final_array.push_back(array);
                    array.clear();
                }
            }
        }   
        return final_array;
    }
};

