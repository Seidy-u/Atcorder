#include<iostream>
main(){long n,k;std::cin>>n>>k;std::cout<<(n*n+n*k-2*k*k+n+2*k+6)*(n-k+2)/6%(int)(1e9+7);}