class Solution {
public:
    int search(vector<int>& v, int target) {
        int b = 0, en = v.size() - 1;
        int mid = (b + en) / 2;
        int ans = -1;
        while (b <= en) {
            if (v[mid] == target) {
                ans = mid;
                break;
            } else if (v[mid] > target) {
                en = mid - 1;
            } else {
                b = mid + 1;
            }
            mid = (b + en) / 2;
        }
        return ans;
    }
};