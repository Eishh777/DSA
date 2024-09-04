#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int findDuplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for (int num : nums) {
        // If the number is already in the set, it's the duplicate
        if (seen.find(num) != seen.end()) {
            return num;
        }
        // Otherwise, add the number to the set
        seen.insert(num);
    }
    
    // If no duplicate is found (which shouldn't happen given the problem constraints)
    return -1;
}

int main() {
    vector<int> nums1 = {1, 3, 4, 2, 2};
    vector<int> nums2 = {3, 1, 3, 4, 2};

    cout << "The duplicate number in nums1 is: " << findDuplicate(nums1) << endl;  // Output: 2
    cout << "The duplicate number in nums2 is: " << findDuplicate(nums2) << endl;  // Output: 3

    return 0;
}
