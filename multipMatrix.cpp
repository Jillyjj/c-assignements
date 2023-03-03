#include <iostream>
#include <vector>
using namespace std;
void vector_multi(vector<vector<int>>& v, vector<vector<int>>& v1,vector<vector<int>>& v2,int n, int m, int n1, int m1){
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m1; ++j)
            for(int k = 0; k < m; ++k)
            {
                v[i][j] += v1[i][k] * v2[k][j];
            }

}
void inizializza(vector<vector<int>>& v, int n, int m){
    for(int i = 0; i < n; i++){
        int x = rand () % 3;
        for(int j = 0; j < m; j++){
            v[i][j] = x;
        }
    }
}
void printVetor(vector<vector<int>>& v, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}
int main(){
    srand(time(NULL));
    int n,m, n1, m1;
    bool magic;
    cout << "inserire numero righe prima matrice " << endl;
    cin >> n ;
    cout << "Inserire numero colonne prima matrice  " << endl;
    cin >> m;
    cout << "inserire numero righe seconda matrice " << endl;
    cin >> n1 ;
    cout << "Inserire numero colonne seconda matrice  " << endl;
    cin >> m1;
    vector<vector<int>> v(n, vector<int>(m));
    vector<vector<int>> v1(n, vector<int>(m1));
    vector<vector<int>> v2(n1, vector<int>(m1));
    if( n == m1 || m == n1 ){
        for(int i = 0; i < n; i++)
            v1.at(i).resize(m);
        for(int i = 0; i < n1; i++)
            v2.at(i).resize(m1);
        inizializza(v1, n,m);
        inizializza(v2, n1, m1);
        cout << "prima matrice" << endl;
        printVetor(v1,n,m);
        cout << "seconda matrice " << endl;
        printVetor(v2,n1,m1);
        vector_multi(v,v1,v2,n,m,n1,m1);
        cout << "risultato " << endl ;
        printVetor(v,n,m1);

    }

}
