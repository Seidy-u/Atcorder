#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

typedef pair<string, string> P;

int main(){
    int N;
    cin >> N;

    set<P> st;
    P input;
    for (int i= 0;i < N;i++) {
        cin >> input.first >> input.second;
        st.insert(input);
    }

    cout << (st.size() == N ? "No" : "Yes") << endl;

    return 0;
}