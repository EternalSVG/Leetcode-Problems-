class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexMap;

        for (int i = 0; i < nums.size(); i++) {
            int neededValue = target - nums[i];

            if (indexMap.count(neededValue)) {
                return {indexMap[neededValue], i};
            }

            indexMap[nums[i]] = i;
        }
        return {};
    }
};
