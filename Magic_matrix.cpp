#include <iostream>
#include <vector>
using namespace std;
bool check_vector(vector<vector<int>>& v, int n, int m){
    int rowsum, diagonalsum, columnsum;
    bool d = true;
    diagonalsum = 0;
		for(int z=0; z<n; z++) {
			for(int j=0; j<m; j++) {
                if (z == j)
                    diagonalsum = diagonalsum + v[z][j];
            }
			}
		// calculate row sum
		for(int i=0; i<n; i++) {
			rowsum = 0;
			for(int j=0; j<m; j++) {
				rowsum = rowsum + v[i][j];
			}
            if(rowsum != diagonalsum) {
             d = false;
            }
		}

		// calculate column sum
		for(int i=0; i<n ; i++) {
			columnsum = 0;
			for(int j=0; j<m; j++) {
				columnsum =  columnsum + v[j][i];
			}
            if(columnsum != diagonalsum)
                d = false;
		}

    return d;
}
int main(){
    int n,m;
    bool magic;
    cout << "inserire numero righe" << endl;
    cin >> n ;
    cout << "Inserire numero colonne ";
    cin >> m;
    vector<vector<int>> v(n, vector<int>(m));
    if( n == m){
        for(int i = 0; i < n; i++){
            v.at(i).resize(m);
        }
        for(int i = 0; i < n; i++){
            int x = rand () % 3;
            for(int j = 0; j < m; j++){
                v[i][j] = x;
            }
        }
        magic = check_vector(v,n,m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cout << v[i][j] << " ";
            }
            cout<<endl;
        }
        cout << magic << endl;
    }else {
        cout << "merda deve essere matrice quadrata";
    }

}
