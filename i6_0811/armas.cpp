#include<iostream>
#include<vector>
using namespace std;
int main(){
 return 0;
}


vector<string> letterCombinations(string digits) {
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
  			/*
        for(int i=0; i<256;i++){
         printf("%d < - %c\n",i,(char)i);
        }
        */
 				//CODE
  			vector <string> output;
       	char c;
       	int index = digits[0] - '0';//char /// A <- 65
  																				 //  B 
       	//letters[index]
  			if(index == 0){ output.push_back(""); }
        for(int i=0; i< letters[index]/*[i]*/.size(); i++){
          output[j] +=letters[index][i];
        }
l    
    }

/*
"23" - > 
Output: ["ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf"]

Output: ["ad", "bd", "cd", "ae", "be", "ce", 

"0123456789"

"22" //string digits, int i = 0
// int c = digits[i]
// c = 106 - 104 // c = 2 // '2'
letters[0] = ""
letters[1] = ""
letters[2] = "abc"
*/
