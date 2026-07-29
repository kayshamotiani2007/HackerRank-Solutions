#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n , q;
    cin >> n >> q;
    
    vector<vector<int>> arr0(n);
    for (int i=0 ; i<n ; i++) {
        int k;
        cin >> k;
        arr0[i].resize(k);
        
        for (int j=0 ; j<k ; j++){
            cin >> arr0[i][j];
        }
    }
    
    for (int t=0 ; t<q ; t++) {
        int i,j;
        cin >> i >> j;
        cout << arr0[i][j] << endl;
    }
    return 0;
}
