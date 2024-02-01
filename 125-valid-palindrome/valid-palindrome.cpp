class Solution {
public:
    bool isPalindrome(string s) {
        string st="";
        for (int i=0;i<s.length();i++)
        {
            if ((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123) || (s[i]>47 && s[i]<58))
            {
                if((s[i]>64 && s[i]<91))
                {
                    s[i]=s[i]+32;
                }
                st+=s[i];
            }
        }
        int start=0;
        int end=st.length()-1;
        while(start<end)
        {
            if(st[start]!=st[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};