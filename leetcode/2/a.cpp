#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> twoSum(vector<int>& nums, int target);
int main() {
 int n;
 int target;
 cin >> n;
 vector <int> nums (n);
 for(int i = 0; i < n; i++) {
  cin >> nums[i];
 }
 cin >> target;
 vector <int> answer = twoSum(nums, target);
 cout << "[" << answer[0] << "," << answer[1] << "]\n";
 return 0;
}
vector<int> twoSum(vector<int>& nums, int target) {
 vector <int> answer; // 2 numbers only
 int possible_position;
 map <int, int> positions;
 for(int i = 0; i < nums.size(); i++) { 
  positions[nums[i]] = i;
 }
 std::map<int, int>::const_iterator got;
 /*
 for(int i = 0; i < nums.size(); i++) {
  cout << nums[i] << " : " << positions[nums[i]] << "\n";
 }
 cout << "0 : " << positions[0] << "\n";
 */
 for(int i = 0; i < nums.size(); i++) {
  if (positions.find(target - nums[i]) != positions.end()) {
   possible_position = positions[target - nums[i]];
   if (possible_position != i){
    if (i < possible_position) {
     answer.push_back(i);
     answer.push_back(possible_position);
    } else {
     answer.push_back(possible_position);
     answer.push_back(i);
    }
    break;
   }
  }
 }
 return answer;
}
