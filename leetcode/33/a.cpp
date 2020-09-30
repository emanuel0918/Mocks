#include<bits/stdc++.h>
using namespace std;
int search(vector<int>& nums, int targe);
int main () {
 int n;
 int target;
 cin >> n;
 vector <int> nums (n);
 for (int i = 0; i < n; i++) {
  cin >> nums[i];
 }
 cin >> target;
 cout << search(nums, target) << "\n";
 return 0;
}

    
    int search(vector<int>& nums, int target) {
        int pivot;
        int length = nums.size();
        int left, right;
        int leftLimit = nums[0];
        int rightLimit = nums[length - 1];
        if (target == leftLimit) return 0;
        if (target == rightLimit) return length - 1;
        if (target > rightLimit && target < leftLimit) return -1;
        left = 0;
        right = length - 1;
        if (target < rightLimit) {
            //
            while (left <= right) {
                pivot = right - (right - left) / 2;
                if (nums[pivot] == target) return pivot;
                if (target > nums[pivot]) {
                    left = pivot;
                } else {
                    if (nums[pivot] > rightLimit) {
                        left = pivot;
                    } else {
                        right = pivot;
                    }
                    
                }
            }
        }
        if (target > leftLimit) {
            //
            while (left <= right) {
                pivot = left - (right - left) / 2;
                if (nums[pivot == target]) return pivot;
                if (target < nums[pivot]) {
                    right = pivot;
                } else {
                    if (nums[pivot] < leftLimit) {
                        right = pivot;
                    } else {
                        left = pivot;
                    }
                }
            }
        }
        return -1;
    }
