#include<iostream>
#include<vector>
using namespace std;

vector<int> repeatedNumber( vector<int> A);
int main(){
 vector <int> result;
 int n;
 cin >> n;
 vector <int> A;
 int aux;
 for(int i=0;i<n;i++){
  cin>>aux;
  A.push_back(aux);
 }
 result=repeatedNumber(A);

 cout << "[" << result[0] << ", " << result[1] << " ]\n";
 return 0;
}
vector<int> repeatedNumber( vector<int> A) {
    long long length=A.size();
    
    long long first_formula=length;
    first_formula*=(first_formula+1);
    first_formula/=2;
    long long second_formula=length;
    second_formula*=(second_formula+1);
    long long auxiliar_for_second_formula=length;
    auxiliar_for_second_formula*=2;
    auxiliar_for_second_formula++;
    second_formula*=auxiliar_for_second_formula;
    second_formula/=6;
    
    long long sum=0;
    long long sum_s=0;//sum of squares
    long long sum_aux=0;
    for(int i=0;i<A.size();i++){
        sum+=(long long)A[i];
        sum_aux=(long long)A[i];
        sum_aux*=sum_aux;
        sum_s+=sum_aux;
        
    }
    
    
    //cout << sum_s << "-" << second_formula <<"\n";
    long long dif1=sum;
    dif1-=first_formula;
    dif1*=-1;
    long long dif2=sum_s;
    dif2-=second_formula;
    dif2*=-1;
    
    //TCP (a+b)^2
    
    long long dif12=dif1;
    dif12*=2;
    long long dif22=dif1;
    dif22*=dif22;
    long long n1=dif2;
    n1+=dif22;
    n1/=dif12;
    
    vector<int> result;
    long long n2=n1;
    n2-=dif1;
    result.push_back((int)n2);
    result.push_back((int)n1);
    return result;
    
    // [2,2]
    // 0 -1
}


