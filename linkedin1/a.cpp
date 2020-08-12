#include<iostream>
#include<vector>
using namespace std;
vector <int> sum_combination(vector<int> A, int sum);
int main(){
 int N;
 int d;
 vector <int> A;
 cin >> N;
 for ( int i = 0; i < N; i++ ){
  cin >> d;
  A.push_back(d);
 }
 int sum;
 cin >> sum; 
 sum_combination(A, sum);
 return 0;
}
//

vector <int> sum_combination(vector<int> A, int sum){
 
}
