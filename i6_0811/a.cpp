#include<iostream>
#include<vector>
using namespace std;
vector<string> letterCombinations(const string digits);
int main(){
 string digits;
 cin >> digits;
 vector<string> result = letterCombinations(digits);
 cout << "[";
 for(int i = 0; i < result.size(); i++){
  if(i != result.size()-1){
   cout << "\"" << result[i] << "\", ";
  } else{
   cout << "\"" << result[i] << "\"";
  }
 }
 cout << "]\n";
 return 0;
}
vector<string> letterCombinations(const string digits){
	vector <string> letters;
        //
        letters.push_back("");
        letters.push_back("");
        letters.push_back("abc");
        letters.push_back("def");
        letters.push_back("ghi");
        letters.push_back("jkl");
        letters.push_back("mno");
        letters.push_back("pqrs");
        letters.push_back("tuv");
        letters.push_back("wxyz");
        //
 //CODE
 vector <string> result;
 vector <string> aux; //auxiliar
 char c;
 for(int index = digits.size() - 1; index >= 0; index--){
  if(result.size() == 0){ result.push_back(""); }
  c = digits[index] - '0';
  for(int j = 0; j < letters[c].size(); j++){
   for(int i = 0; i < result.size(); i++){
    string x = result[i];
    //x += letters[c][j];
    x = letters[c][j] + x;
    aux.push_back(x);
   }
  }
  result.erase(result.begin(), result.end());
  //while(!result.empty()){ result.pop_back(); }
  result=aux;
  aux.erase(aux.begin(), aux.end());
  //while(!aux.empty()){ aux.pop_back(); }
 }
 return result;
}
