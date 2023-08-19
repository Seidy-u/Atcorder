#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> pizza;
    int sum = 0;
    pizza.push_back(0);
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        sum += tmp;
        if(sum >= 360) sum -= 360;
        pizza.push_back(sum);
    }
    pizza.push_back(360);

    sort(pizza.begin(), pizza.end());

    int ans = 0;
    for(int i = 0; i < pizza.size() - 1; i++) ans = max(ans, pizza[i+1]-pizza[i]);

    cout << ans << endl;

    return 0;
}