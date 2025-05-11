#include <vector>
#include <iostream>
//BruteForce->
#include <vector>
using namespace std;

bool isSorted(const vector<int>& nums) {
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < nums[i - 1]) return false;
    }
    return true;
}

bool checkBruteForce(vector<int>& nums) {
    int n = nums.size();
    for (int x = 0; x < n; ++x) {
        bool sorted = true;
        for (int i = 1; i < n; ++i) {
            if (nums[(x + i) % n] < nums[(x + i - 1) % n]) {
                sorted = false;
                break;
            }
        }
        if (sorted) return true;
    }
    return false;
}
//Optimal->
using namespace std;

bool checkOptimal(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    for (int i = 0; i < n; ++i) {
        if (nums[i] > nums[(i + 1) % n]) {
            count++;
            if (count > 1) return false;
        }
    }
    return true;
}

int main() {
    vector<int> nums = {3, 4, 5, 1, 2};

    cout << "Optimal: " << (checkOptimal(nums) ? "true" : "false") << endl;

    return 0;
}












