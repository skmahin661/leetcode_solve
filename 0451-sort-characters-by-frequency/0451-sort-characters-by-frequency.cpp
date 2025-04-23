class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>p;
        map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
            mp[s[i]]++;
        }
         for(int i=0;i<s.size();i++)
        {
            p.push_back({mp[s[i]],s[i]});
        }
        sort(p.rbegin(),p.rend());
        string x ="";
        for(int i=0;i<p.size();i++)
        {
            x+=p[i].second;
        }
        return x;
    }
};