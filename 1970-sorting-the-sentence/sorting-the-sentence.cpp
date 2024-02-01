class Solution {
public:
    string sortSentence(string s) {
        map<int,string> mt;
        string x="";
        int count=0;
        for (int i=0;i<s.length();i++)
        {
            int size;
            if(s[i]>='1' && s[i]<='9')
            {
                size=(int)s[i];
                cout<<size<<endl;
            }
            else if(s[i]!=' ')
            {
                x+=s[i];
            }
            else
            {
                mt[size]=x;
                x="";
                count++;
            }

        }
        int a=(int) s[s.length()-1];
        mt[a]=x;
        string ans="";
        for(auto it=mt.begin();it!= mt.end();it++)
        {
            ans+=it->second;
            if(count!=0)
            {
                ans+=" ";
                count--;
            }
            
        }

        return ans;
    }
};