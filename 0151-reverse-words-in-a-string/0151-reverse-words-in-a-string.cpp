class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        string x = "";
        for(int i=0;i<s.size();i++)
        {
            //string x = "";
            if(s[i]==' ')
            {
                if(!x.empty())
                {
                    v.push_back(x);
                }
                x = "";
            }
            else
            {
                x+=s[i];
            }
            
        }
        if(!x.empty())
        {
            v.push_back(x);
        }
        reverse(v.begin(),v.end());
        string u="";
        for(int i=0;i<v.size();i++)
        {
            u+=v[i];
            if(i!=(v.size()-1)) u+=" ";
            //u+=" ";
        }
        return u;
    }
};