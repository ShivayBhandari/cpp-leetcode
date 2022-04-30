class Solution
{
public:
    vector<int> buildArray(vector<int> &nums)
    {
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            nums[i] += n * (nums[nums[i]] % n);
        }
        for (int i = 0; i < n; i++)
        {
            nums[i] /= n;
        }
        return nums;
    }
};
/*
Used the equation nums[i]+=n*(nums[nums[i]]%n)
so there is no need for a second array to store elements (hence saving the space)
Then used nums[i]/=n to store the answer in the same array
*/