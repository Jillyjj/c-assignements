#include <iostream>
#include <string>
#include <vector>
using namespace std ;
string concatenate(vector<string>& v){
    string s;
    for (auto& el : v){
        s += el;
    }
    return s;
}
int main() {
string s ;
   vector <string> v = {"kakao", "cacao", "cacao"};
   s = concatenate(v);
   cout << s;
    return 0;
}
