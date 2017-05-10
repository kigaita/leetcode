class Solution {
	public:
		int singleNumber(vector<int> &nums) {
			if(nums.empty())
				return -1;
			
			int result = 0, sum = 0;
			
			for(int i = 0; i != 8 * sizeof(int); ++i) {
				sum = 0;
				
				for(int j = 0; j != nums.size(); ++j) {
					sum += (nums[j] >> i & 1);
				}
				result |= ((sum % 3) << i)
			}
			
			return result;
		}
};