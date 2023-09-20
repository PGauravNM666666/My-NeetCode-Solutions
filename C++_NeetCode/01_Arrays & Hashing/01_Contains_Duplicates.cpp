class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> check;
        for(int i = 0; i < nums.size(); i++) {
            if(check.find(nums[i]) == check.end()) {
                check.insert(nums[i]);
            }
            else return true;
        }
        
        return false;
    }
};