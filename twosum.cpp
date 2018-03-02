/***************************************

	You are given two non-empty linked lists representing two non-negative integers.
	The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
	You may assume the two numbers do not contain any leading zero, except the number 0 itself.
	
	Example:

	input: (2 -> 4 -> 3) + (5 -> 6 ->4)
	output: 7 -> 0 -> 8
	Explanation: 342 + 465 = 807
***************************************/


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