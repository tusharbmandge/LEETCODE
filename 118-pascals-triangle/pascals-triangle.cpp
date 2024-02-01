class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>  ans;
        vector<int> first;
        first.push_back(1);

        for (int i=0;i<numRows;i++)
        {
            
            ans.push_back(first);
            vector<int> temp=first;
            for (int j=0;j<first.size()-1;j++)
            {
                first[j+1]=temp[j]+temp[j+1];
            }
            first.push_back(1);
      
        }
        
        return ans;
    }
};