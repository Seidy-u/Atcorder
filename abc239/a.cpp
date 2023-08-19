#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main(){
    float H;
    cin >> H;
    printf("%.2f",sqrt(H*(12800000+H)));
}