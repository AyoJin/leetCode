#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class twosum {
  public:
	vector<int> twoSum(std::vector<int>& nums, int target) {
		unordered_map<int, int> map;
		std::vector<int> res;
		for ( int i = 0; i < nums.size(); i++) {
			if (map.find(target - nums[i]) != map.end()) {
				res.push_back(i);
				res.push_back(map[target - nums[i]]);
				return res;
			}
			map[nums[i]] = i;
		}
		return res;
	}
};
int main () {
	twosum app;
	std::vector<int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	vector<int> res = app.twoSum(nums, 9);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << endl;
	}
	return 0;
}