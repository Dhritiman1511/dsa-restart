#include <iostream>
#include <vector>

using namespace std;

void printSubArray(vector<int>& nums, int start, int end) {
    if (start == nums.size()) {
        return;
    }

    if (end >= nums.size()) {
        printSubArray(nums, start + 1, start + 1);
        return;
    }

    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    printSubArray(nums, start, end + 1);
}


int main(){
    vector<int>nums{1,2,3,4,5};
    printSubArray(nums,0,0);
    return 0;
}