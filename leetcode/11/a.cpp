#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int maxArea (vector <int> & height);
long maxAreaArray (vector <int> & array);
int main (){
 int n;
 cin >> n;
 vector <int> height (n);
 for (int i = 0; i < n; i++) {
  cin >> height[i];
 }
 int max_area = maxArea(height);
 cout << max_area << "\n";
 return 0;
}
int maxArea (vector <int> & height){
 int max;
 int maxLR, maxRL; // Greater auxiliar variable to store in both lists
 int minimum_height; // Of both greater heights from left to right
                     // and from right to left choose the lower
 int length;
 length = height.size();
 vector <int> LR (length); // Greater from Left to Right
 vector <int> RL (length); // Greater from Right to Left
 vector <int> maximum_height (length);
 // Initialize the area to zero
 max = 0;
 maxLR = maxRL = 0;
 for (int i = 0; i < length; i++) {
  if ( height[i] > maxLR ) {
   maxLR = height[i];
  }
  LR[i] = maxLR;
 }
 for (int i = length - 1; i >= 0; i--) {
  if ( height[i] > maxRL) {
   maxRL = height[i];
  }
  RL[i] = maxRL;
 }
 for (int i = 0; i < length; i++) {
  minimum_height = (LR[i] > RL[i])? RL[i] : LR[i];
  maximum_height[i] = minimum_height;
 }
 /*
 //cout << "[";
 for (int i = 0; i < length; i++) {
  cout << maximum_height[i];
  if (i != length - 1) {
   //cout << ", ";
   cout << " ";
  }
 }
 //cout << "]\n";
 cout << "\n";
 */
 max = (int) maxAreaArray(maximum_height);
 return max;
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
