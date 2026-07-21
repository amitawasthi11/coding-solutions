class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
       set<int>mpp;
        for(int i=0;i<arr.size();i++){
            if(mpp.find(target-arr[i]) != mpp.end()){
                return true;
            }
            mpp.insert(arr[i]);
        }
        return false;
    }
};