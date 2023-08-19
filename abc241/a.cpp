#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    int a[10];
    int tmp = 0;
    for(int i=0; i<10; i++){
        cin >> a[i];
    }
    cout << a[a[a[0]]] << endl;
}