class Solution {
public:
    vector<int> searchRange(vector<int>&v, int target) {
        vector<int>u,p;
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==target)
            {
                u.push_back(i);
            }
        }
        if(u.empty())
        {
            p.push_back(-1);
            p.push_back(-1);
        }
        else
        {
            p.push_back(u[0]);
            p.push_back(u[u.size()-1]);
        }
        return p;
    }
};