#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int N;
    cin >> N;
    long double x[N],y[N];
    for(int i = 0; i < N; i++)
        cin >> x[i] >> y[i];
    long double ans=0,check=0;
    for(int i = 0; i < N; i++){
        for(int j=i+1; j < N; j++){
            check = (x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]);
            check = sqrt(check);
            if(check>ans)
                ans = check;
        }
    }

    cout << fixed << setprecision(10) << ans << endl;
    
}