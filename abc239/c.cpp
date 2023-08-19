#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    unsigned long long x1,y1,x2,y2;
    bool flg = false;
    cin >> x1 >> y1 >> x2 >> y2;

    unsigned long long x_1[8]={x1+1,x1+2,x1+2,x1+1,x1-1,x1-2,x1-2,x1-1};
    unsigned long long y_1[8]={y1+2,y1+1,y1-1,y1-2,y1-2,y1-1,y1+1,y1+2};
    unsigned long long x_2[8]={x2+1,x2+2,x2+2,x2+1,x2-1,x2-2,x2-2,x2-1};
    unsigned long long y_2[8]={y2+2,y2+1,y2-1,y2-2,y2-2,y2-1,y2+1,y2+2};

    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(x_1[i]==x_2[j] && y_1[i]==y_2[j]){
                flg = true;
            }
        }
    }

    cout << (flg ? "Yes" : "No") << endl;
}