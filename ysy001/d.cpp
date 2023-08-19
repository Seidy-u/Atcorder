#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cstdlib>
using namespace std;

string capitalizeString(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return toupper(c); });
    return s;
}

int main(){
    string C;
    int N;
    string M[N];

    cin >> C >> N;
    C=capitalizeString(C);

    for(int i=0; i<N; i++)
        cin >> M[i];
    
    
    for(int i=0; i<N;i++){
        M[i]=capitalizeString(M[i]);
        if (M[i].find(C) != std::string::npos) {
            
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}