#include<iostream>
#include<algorithm>
using namespace std;

const int N = 1010;

int n,m;
int v[N],w[N];
int f[N][N];

int main(){
    for(int i = 0; i < n; i ++){
        cin >> v[i] >> w[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            f[i][j] = f[i-1][j];
            if(j >= v[i]) f[i][j] = max(f[i][j],f[i-1][j-v[i]]+w[i]);
        }
        cout << f[n][m] << endl;
    }
    return 0;
}