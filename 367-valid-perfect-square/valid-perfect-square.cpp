class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int start=0;
        long long int end=num;
        while(start<=end)
        {
            long long int mid=  start+(end-start)/2;
            if (mid*mid<num)
            {
                start=mid+1;
            }
            if (mid*mid>num)
            {
                end=mid-1;
            }
            if (mid*mid==num)
            {
                return true;
            }
        }
        return false;
    }
};