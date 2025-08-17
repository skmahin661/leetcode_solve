class Solution {
public:
    string longestCommonPrefix(vector<string>&s) {
        map<string,int>mp;
        for(int i=0;i<s.size();i++)
        {
            string x = s[i];
            string y="";
            for(int j=0;j<x.size();j++)
            {
                y+=x[j];
                mp[y]++;
            }
        }
        int mx = 0;
        vector<string>sk;
        for(auto k:mp)
        {
            if(k.second>=s.size())
            {
                sk.push_back(k.first);
            }
        }
        sort(sk.rbegin(),sk.rend());
        if(sk.empty())
        {
            return "";
        }
        return sk[0];
    }
};