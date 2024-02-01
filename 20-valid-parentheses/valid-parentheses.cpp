class Solution {
public:
    int arr[10000];
    int top=-1;
    void push(char data)
    {
        arr[top+1]=data;
        top++;
    }
    bool pop()
    {
        if(top>-1)
        {
            top--;
            return true;
        }
        else
        {
            return false;    
        }
    }
    char peak()
    {
        return arr[top];
    }
    bool is_empty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isValid(string s) {
        if (s.size()%2==1)
        {
            return false;
        }
        for (int i=0;i<s.length();i++)
        {
            if (s[i]=='(' || s[i]=='[' || s[i]=='{' )
            {
                push(s[i]);
            }
            else
            {
                if(is_empty()==false)
                {
                    char ans=peak();
                    if((s[i]==')'&& ans=='(') || (s[i]==']'&& ans=='[') || (s[i]=='}'&& ans=='{'))
                    {
                        pop();
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        if (is_empty()==true)
        {
            return true;
        }
        return false;

    }
};