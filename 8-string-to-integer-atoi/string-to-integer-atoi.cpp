class Solution {
public:
    int myAtoi(string s) {
        long long int ans=0;
        int flag=9;
        for (int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if (i!=0 && s[i-1]!=' ')
                {
                    if(flag==1)
                    {
                        return -ans;
                    }
                    return ans;
                }
                continue;
            }
            if(s[i]=='-')
            {
                if(flag==0)
                {
                    return 0;
                }
                if(i!=0 && s[i-1]!=' ')
                {
                    if(flag==1)
                    {
                        return -ans;
                    }
                    return ans;
                }
                flag=1;
                continue;
            }

            if(s[i]=='+')
            {
                if(flag==1 && ans==0)
                {
                    return 0;
                } 
                if(i!=0 && s[i-1]!=' ')
                {
                    if(flag==1)
                    {
                        return -ans;
                    }
                    return ans;
                }
                flag=0;
                continue;
            }
            if(s[i]<48 || s[i]>57)
            {
                if(ans==0)
                {
                    return 0;
                }
                else
                {
                    break;
                }
                return 0;
            }
            else
            {
                cout<<ans<<endl;
                ans=ans*10;
                ans=ans+s[i]-48;
                if(ans>INT_MAX && (flag==0 || flag==9) )
                {
                    return INT_MAX;
                }
                else if (ans>INT_MAX && flag==1)
                {
                    return INT_MIN;
                }
            }

        }
        if(flag==1)
        {
            return -ans;
        }
        return ans;
    }
};