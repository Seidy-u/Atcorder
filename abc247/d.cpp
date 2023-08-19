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
#include <climits>
using namespace std;

int main(){
    long long q;
    cin >> q;
    vector<pair<long long, long long> > box;

    int idx = 0;
    long long sum;
    
    for(long long i=0; i<q; i++){
        long long num,x,c;
        cin >> num;

        if(num == 1){
            cin >> x >> c;
            box.push_back(make_pair(x,c));
            continue;
        }

        if(num == 2){
            cin >> c;
            sum = 0;
            while(c>0){
                if(box[idx].second <= c){
                    sum += box[idx].first * box[idx].second;
                    c -= box[idx].second;
                    idx++;
                }
                else{
                    sum += box[idx].first * c;
                    box[idx].second -= c;
                    c = 0;
                }
            }
            cout << sum << endl;
        }

    }
}