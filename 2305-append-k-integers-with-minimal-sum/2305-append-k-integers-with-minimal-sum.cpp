class Solution {
public:
    long long minimalKSum(vector<int>& v, int k) {
        sort(v.begin(), v.end());
        v.erase(unique(v.begin(), v.end()), v.end());

        int ut = min(k, v[0] - 1);
        k -= ut;
        long long sum = 1LL * ut * (ut + 1) / 2;

        for (int i = 1; i < v.size(); i++) {
            if (k <= 0) break;

            int diff = v[i] - v[i - 1] - 1;
            int sk = min(diff, k);
            k -= sk;
            int a = v[i - 1] + sk;

            sum += (1LL * a * (a + 1)) / 2 - (1LL * v[i - 1] * (v[i - 1] + 1)) / 2;
        }

        if (k > 0) {
            long long b = 1LL * v[v.size() - 1] + k;
            long long c = 1LL * v[v.size() - 1];
            sum += (b * (b + 1)) / 2 - (c * (c + 1)) / 2;
        }

        return sum;
    }
};
