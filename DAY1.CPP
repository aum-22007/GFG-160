class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int first = INT_MIN, second = INT_MIN;\
        for(int num:arr)
        {
            if(num>first)
            {
                second = first;
                first = num;
            }git remote add origin https://github.com/aum-22007/GFG-160.git
            else if(num > second && num < first)
            {
                second = num;
            }
        }
        return second == INT_MIN ? -1:second;
    }
};