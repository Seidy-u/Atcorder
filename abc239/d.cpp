#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

bool IsPrime(int num)
{
    if (num < 2) return false;
    else if (num == 2) return true;
    else if (num % 2 == 0) return false;

    double sqrtNum = sqrt(num);
    for (int i = 3; i <= sqrtNum; i += 2)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main(){
    int A,B,C,D;
    bool flg=false;
    cin >> A >> B >> C >> D;
    for(int i=A;i<B+1;i++){
        for(int j=C;j<D+1;j++){
            flg = IsPrime(i+j);
            if(flg)
                break;
        }
        if(flg==false){
            cout << "Takahashi" << endl;
            return 0;
        }
    }

    cout << "Aoki" << endl;
}