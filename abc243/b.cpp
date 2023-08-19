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
    int n;
    cin >> n;
    int a[n],b[n];
    int hit=0;
    int blow=0;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++) cin >> b[i];

    for(int i=0; i<n; i++){
        if(a[i]==b[i]) hit++;
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i!=j){
                if(a[i]==b[j]) blow++;
            }
        }
    }

    cout << hit << endl << blow << endl;
}