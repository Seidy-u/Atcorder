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
    long long A,B,X;
    cin >> A >> B >> X;
    long long start = 0;
    long long end = 1000000001;

    while(end - start > 1){
        long long N = (start+end)/2;
        long long keta = to_string(N).length();
        long long value = A * N + B * keta;
        if(value <= X){
            start = N;
        }
        else{
            end = N;
        }
    }
    cout << start << endl;
}