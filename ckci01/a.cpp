#include<iostream>
#include<vector>
using namespace std;
vector <int> solution(vector <int> list1, vector <int> list2);
int main(){
 int n1, n2;
 pass
 cin >> n1;
 vector <int> list1 (n1);
 for(int i = 0; i < n; i++) {
  cin >> list1[i];
 }
 cin >> n2;
 vector <int> list2 (n2);
 for(int i = 0; i < n; i++) {
  cin >> list2[i];
 }
 vector <int> result = solution(list1, list2);
 for(int i = 0; i < result.size(); i++) {
  cout << result[i] << " ";
 }
 cout << "\n";
 return 0;
}

vector <int> solution(vector <int> list1, vector <int> list2){
 vector <int> answer;
 for (int i = 0; i < list
}
/*
 1 -> 2 -> 3 -> 4 -> 5 -> 7
 2 -> 3 -> 6 -> 7 -> 8

*/
/*
 for i in list1
  for j in list2
   if i == j
    anser.push_back(j)
 
*/
