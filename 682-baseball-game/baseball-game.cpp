class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int ans=0;
        for (int i=0;i<operations.size();i++)
        {
            if(operations[i]=="C")
            {
                st.pop();
            }
            else if(operations[i]=="D")
            {
                int mul;
                mul=2*st.top();
                st.push(mul);
            }
            else if(operations[i]=="+")
            {
                int sum;
                int temp=st.top();
                sum=st.top();
                st.pop();
                sum=sum+st.top();
                st.push(temp);
                st.push(sum);
            }
            else
            {
                st.push(stoi(operations[i]));
            } 
        }
        while(!st.empty())
        {
            ans=ans+st.top();
            st.pop();
        }
        return ans;
    }
};