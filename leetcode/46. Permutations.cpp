#define vi vector<int>
#define fr(i, ivalue, n) for (int i = ivalue; i < n; i++)

vector<vi> ans;

class Solution
{

private:
    void f(vi &nums, vi &a, int freq[])
    {
        if (nums.size() == a.size())
        {
            ans.push_back(a);
            return;
        }

        fr(i, 0, nums.size())
        {
            if (freq[i] == 0)
            {
                a.push_back(nums[i]);
                freq[i] = 1;
                f(nums, a, freq);
                freq[i] = 0;
                a.pop_back();
            }
        }
    }

public:
    vector<vector<int>> permute(vector<int> &nums)
    {
        ans.clear();
        vi a;
        int freq[nums.size()];
        fr(i, 0, nums.size()) 
            freq[i] = 0;
        f(nums, a, freq);
        return ans;
    }
};