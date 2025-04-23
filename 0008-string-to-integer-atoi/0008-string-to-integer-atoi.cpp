class Solution {
public:
    int myAtoi(string s) {
        string x="";
        int flag=0,dlag=0,mlag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ' && !flag && !mlag && !dlag) 
            {
                continue;
            }
            if(s[i]=='-' && !flag && !dlag && !mlag)
            {
                dlag=1;
                continue;
            }
             if(s[i]=='+' && !flag && !mlag && !dlag)
            {
                mlag=1;
                continue;
            }
            if(!isdigit(s[i]))
            {
                break;
            }
            x+=s[i];
            flag++;
        }
        long long sk=0;
        for(int i=0;i<x.size();i++)
        {
            int d = x[i]-'0';
            sk = sk*10+d;
            if(dlag)
            {
                if((sk*-1)<INT_MIN)
                {
                    return INT_MIN;
                }
            }
            if(sk>INT_MAX && !dlag)
            {
                return INT_MAX;
            }
        }
        if(dlag)
        {
            return sk*-1;
        }
        return sk;
    }
};