#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int factorial(int n) {
    if(n == 1 || n == 0)
        return 1;
    else
        return n* factorial(n-1);
}
int countAnagrams(std::string word) {
    int count = 0;
    sort(word.begin(), word.end());
    while (next_permutation(word.begin(), word.end())) {
        count++;
    }
    return count + 1;
}
bool control(const vector<string>& v, const string s){
    bool res = true ;
    for(const auto& ok : v)
       if (s == ok)
        res = false;
    return res;
}
void gramm(string& s, vector<string>& v){

    int n = countAnagrams(s);
    while (v.size() < n) {
        size_t l = rand() % s.length();
        size_t m = rand() % s.length();
        swap(s.at(l), s.at(m));
        if (control(v, s)) {
            v.push_back(s);
        }
    }
}
int main(){
    srand(time(NULL));
    string s;
    vector <string> v;
    cin >> s;
    gramm(s,v);
   for(auto& k : v){
        cout<< k << endl;
    }
    return 0;
}
