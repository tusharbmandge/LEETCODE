class Solution {
public:
    string removeStars(string s) {
        stack<char> ans;
        string st="";
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]=='*')
            {
                ans.pop();
            }
            else
            {
                ans.push(s[i]);
            }
        }
        while(!ans.empty())
        {
            st.push_back(ans.top());
            ans.pop();
        }
        for (int i=0;i<st.length()/2;i++)
        {
            char temp=st[st.length()-1-i];
            st[st.length()-1-i]=st[i];
            st[i]=temp;
        }
        return st;

    }
};
