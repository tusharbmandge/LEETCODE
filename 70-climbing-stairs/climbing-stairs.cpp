class Solution {
public:
    int arr[46]={0};
    int climbStairs(int n) {
        if (n<=2)
        {
            return n;
        }
        if(arr[n]!=0)
        {
            return arr[n];
        }
        arr[n]=climbStairs(n-1)+climbStairs(n-2);
        return arr[n];
    }
};

        // if (n<=2 )
        // {
        //     return n;
        // }
        // int first=1;
        // int second=2;

        // for (int i=3;i<=n;i++)
        // {
        //     int sum=first+second;
        //     first=second;
        //     second=sum;
        // }
        // return second;

// 1   1
// 2   2
// 3   3
// 4   5