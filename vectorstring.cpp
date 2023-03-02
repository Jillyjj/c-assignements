#include <iostream>
#include <string>
#include <vector>
using namespace std ;
void concatenate(vector<string>& v, const string& s){
  v.push_back(s);
  for(const auto& chick : v){
      cout << chick;
  }
  cout << endl;
}
int main() {
    string s ;
    vector <string> v;
    int i = 0;
    while (i < 20 ) {
        cin >> s;
        concatenate(v,s);
        i++;
    }
    return 0;
}
