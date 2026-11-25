class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int maxh = 0,maxf = INT_MIN;
        for(auto num : arr)
        {
            maxh = std::max(num+maxh,(int)num);
            maxf = std::max(maxf,maxh);
        }
        return maxf;
    }
};