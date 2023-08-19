#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <algorithm>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <unordered_map>
#include <cmath>
using namespace std;

int main(){
    string s,t,u;
    int a,b;
    cin >> s >> t >> a >> b >> u;

    if(s==u){
        cout << --a << " " << b << endl;
    }
    else{
        cout << a << " " << --b << endl;
    }
}