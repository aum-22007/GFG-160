class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int n = arr.size();
        int a1 = n-2;
        int a2 = n-1;
        
        while(a1>=0 && arr[a1] >= arr[a1+1])
        {
            a1--;
        }
        if(a1>=0)
        {
            while(arr[a1]>=arr[a2])
            {
                a2--;
            }
            swap(arr[a1],arr[a2]);
        }
        reverse(arr.begin()+a1+1,arr.end());
    }
};