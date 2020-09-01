#include<iostream>
#include<utility>
#include<vector>
using namespace std;
long maxAreaArray (vector <int> & array);
int main (){
 int n;
 cin >> n;
 vector <int> height (n);
 for (int i = 0; i < n; i++) {
  cin >> height[i];
 }
 int max_area = (int) maxAreaArray(height);
 cout << max_area << "\n";
 return 0;
}

long maxAreaArray (vector <int> & array){
 long area;
 long max;
 bool store;
 int base_auxiliar;
 int l;
 vector < pair <int, int> > stack; // store the x, y in the array
 l = array.size();
 max = 0;
 for (int i = 0; i < l; i++) {
  store = true;
  if (!stack.empty()) {
   if (array[i] <= stack.back().first) {
    store = false;
    if (array[i] < stack.back().first) {
     while (!stack.empty()) {
      if (stack.back().first <= array[i]) {
       break;
      }
      base_auxiliar = stack.back().second;
      area = stack.back().first;
      area *= i - 1 - base_auxiliar;
      if (area > max) {
       max = area;
      }
      stack.pop_back();
     }
     stack.push_back(make_pair(array[i], base_auxiliar));
    }
   }
  }
  if (store) {
   stack.push_back(make_pair(array[i], i));
  }
 }
 while (!stack.empty()) {
  area = stack.back().first;
  area *= l - 1 - stack.back().second;
  if (area > max) {
   max = area;
  }
  stack.pop_back();
 }
 return max;
}
