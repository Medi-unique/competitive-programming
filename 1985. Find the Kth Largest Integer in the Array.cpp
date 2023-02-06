
class Solution {
    bool isLessThan(string &a, string &b) {
        int N = a.size();
        for (int i = 0; i < N; ++i) {
            if (a[i] == b[i]) continue;
            return a[i] < b[i];
        }
        return false;
    }
public:
    string kthLargestNumber(vector<string>& A, int k) {
        sort(begin(A), end(A), [&](auto &a, auto &b) {
            return a.size() != b.size() ? a.size() < b.size() : isLessThan(a, b);
        });
        return A[A.size() - k];
    }
};
