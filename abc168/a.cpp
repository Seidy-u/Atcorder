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
#include <math.h>
using namespace std;

int main(){
    string n;
    cin >> n;
    if(n[(n.length())-1] == '3') cout << "bon" << endl;
    else if(n[(n.length())-1] == '0' || n[(n.length())-1] == '1' || n[(n.length())-1] == '6' || n[(n.length())-1] == '8') cout << "pon" << endl;
    else cout << "hon" << endl;
    return 0;
}