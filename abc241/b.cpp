#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m ;
    int a[n],b[m];
    bool flg = false;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        cin >> b[i];
    }

    for(int i=0;i<m;i++){
        flg = false;
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                a[j]=0;
                flg = true;
                break;
            }
        }
        if(flg == false){
            cout << "No" << endl;
            return 0;
        }
        
    }

    cout << "Yes" << endl;
}