class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int ans=0;
        int index=0;
        queue<int> st;
        for (int i=0;i<students.size();i++)
        {
            st.push(students[i]);
        }
        int i=0;
        while(i<=st.size() && index<sandwiches.size())
        {
            if(st.front()==sandwiches[index])
            {
                index++;
                i=0;
            }
            else
            {
                st.push(st.front());
            }
            st.pop();
            i++;
        }
        return st.size();
    }
};