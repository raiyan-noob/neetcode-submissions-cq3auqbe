class Solution {
public:
int subarrayExtremumSum(vector<int>& a, bool isMax) {
    int n = a.size();
    vector<int> L(n), R(n), st;
    st.reserve(n);
    // Previous strictly greater/smaller
    for (int i = 0; i < n; i++) {
        while (!st.empty() &&
               (isMax ? a[st.back()] <= a[i]
                      : a[st.back()] >= a[i])) {
            st.pop_back();
        }
        L[i] = st.empty() ? -1 : st.back();
        st.push_back(i);
    }
    st.clear();
    // Next greater-or-equal / smaller-or-equal
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() &&
               (isMax ? a[st.back()] < a[i]
                      : a[st.back()] > a[i])) {
            st.pop_back(); }
        R[i] = st.empty() ? n : st.back();
        st.push_back(i);}
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int left = i - L[i];
        int right = R[i] - i;
        ans += a[i] * left * right;
    }
    return ans;}

    int maxSubArray(vector<int>& nums) {
         int cur = nums[0];
        int ans = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            cur = max(nums[i], cur + nums[i]);
            ans = max(ans, cur);
        }

        return ans;
    }
};
