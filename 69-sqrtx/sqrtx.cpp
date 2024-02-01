class Solution {
public:
    int mySqrt(int x) {
        long long int start=0;
        long long int end=x;
        while(start<=end)
        {
            long long int med = start+(end-start)/2;
            if (med*med < x)
            {
                if ((med+1)*(med+1)>x)
                {
                    return med;
                }
                start=med+1;
            }
            if(med*med > x)
            {
                if ((med-1)*(med-1)<x)
                {
                    return med-1;
                }
    
                end= med-1;
            }
            if (med*med==x)
            {
                return med;
            }

        }
        return 0;
    }
};

