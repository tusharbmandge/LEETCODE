class Solution {
public:
    bool isPalindrome(int x) {
        int rem;
        long long int num=0;
        int original_num;
        original_num=x;
        if (x<0){
            return false;
        }
        if (x<10)
        {
            return true;
        }
        while(x!=0)
        {
            rem=x%10;
            num=num*10+rem;
            x=x/10;
        }
        if(original_num==num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};