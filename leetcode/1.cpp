class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> _map;
        for (int i = 0; i < nums.size(); i++)
        {
            int value = nums[i];
            if (_map.find(target - value) != _map.end())
            {
                return {_map[target - value], i};
            }

            _map[value] = i;
        }

        return {-1,-1};
    }
};
