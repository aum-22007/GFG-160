class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int maxProd = arr[0];
        int maxvalue = arr[0],minvalue = arr[0];
        for(int i = 1;i<arr.size();++i)
        {
            if(arr[i]<0)
            {
                swap(maxvalue,minvalue);
            }
            maxvalue = max(arr[i],maxvalue*arr[i]); 
            minvalue = min(arr[i],minvalue*arr[i]);
            maxProd= max(maxProd,maxvalue);
        }
        return maxProd;
    }
};