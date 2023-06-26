#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

// O(n)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0)
                return true;
            seen.insert(num);
        }
        return false;
    }
};

/*
O(n^2)
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int count = 0;
            for (int j = 0; j <= nums.size() - 1; j++){
                int target = nums[j]; //target = 1
                for(int i = j + 1; i <= nums.size() -1; i++){
                    if(nums[i] == target){ //1. no, 2. no, 3. yes
                        return true;
                    }
                    else{
                        continue;
                    }
                }
            }
            return false;
    }
};
*/