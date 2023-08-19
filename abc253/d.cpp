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
#include <numeric>
#include <climits>
using namespace std;

int main() {
    long long  n, a, b;
    cin >> n >> a >> b;

    long long N = (n * (n + 1)) / 2;

    long long cnt_a = n / a;
    long long last_a = cnt_a * a;
    long long A = (cnt_a * (last_a + a)) / 2;

    long long cnt_b = n / b;
    long long last_b = cnt_b * b;
    long long B = (cnt_b * (last_b + b)) / 2;

    long long ab = lcm(a, b);
    long long cnt_ab = n / ab;
    long long last_ab = cnt_ab * ab;
    long long AB = (cnt_ab * (last_ab + ab)) / 2;

    cout << N - A - B + AB << endl;
}