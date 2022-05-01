class Solution
{
public:
    int countDistinct(vector<int>& nums, int k, int p)
    {
        set<vector<int>> visited;
        int count = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            count=0;
            vector<int> sub_arr;

            for (int j = i; j < nums.size(); j++)
            {
                sub_arr.push_back(nums[j]);
                if (nums[j] % p == 0)
                {
                    count++;
                }
                if (count > k)
                    break;

                visited.insert(sub_arr);
            }
        }

        return visited.size();
    }
};