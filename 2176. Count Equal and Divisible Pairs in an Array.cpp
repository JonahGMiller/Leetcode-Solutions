class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int result = 0, numsSize = nums.size();
        for(int i = 0; i < numsSize-1; i++){
            for(int j = i+1; j < numsSize; j++){
                if(nums[i] == nums[j] && (i * j) % k == 0) result++;
            }
        }
        //O(n^2)
        return result;
    }
};
