class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mpp;
        int idx = 0;
        for(int i = 0; i < nums.size(); i++){
            mpp[nums[i]]++;
            if(mpp[nums[i]] == 1){
                nums[idx] = nums[i];
                idx++;
            }
        }
        return idx;
    }
};
//Leetcode 26
