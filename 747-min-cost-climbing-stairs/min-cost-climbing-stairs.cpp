class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int sum=0;
        cost.push_back(0);
        int first=cost[0];
        int second=cost[1];
        for (int i=2;i<cost.size();i++)
        {
            if(first<second)
            {
                sum=first+cost[i];
            }
            else
            {
                sum=second+cost[i];
            }
            first=second;
            second=sum;
        }
        return sum;

    }
};