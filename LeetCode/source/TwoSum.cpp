// TwoSum
// 2021.10.21
// Easy
class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> maps;
        for (int i = 0; i < nums.size(); i++)
        {
            if (maps.find(target - nums[i]) != maps.end())
            {
                return { maps[target - nums[i]], i };
            }
            else
            {
                maps[nums[i]] = i;
            }
        }
        return {};
    }
};
