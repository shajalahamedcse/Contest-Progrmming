#include<stdio.h>
#include<iostream>
using namespace std;
#define MAX 10006
long long int dp[MAX];
/*
long long int a, b, c, d, e, f;
long long int fn(long long int n ) {
    if(dp[n]!=-1) return dp[n];
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    
    else{
    dp[n]= (fn(n-1) + fn(n-2) + fn(n-3) + fn(n-4) + fn(n-5) + fn(n-6))%10000007 ;
    return dp[n];
    }
}*/
int main() {
    long long int  n, caseno = 0, cases;
    cin>>cases;
    while( cases-- ) {
       // scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &n);
        cin>>dp[0]>>dp[1]>>dp[2]>>dp[3]>>dp[4]>>dp[5]>>n;
        for(long long int i=6;i<=n;i++)
        {
            dp[i]=(dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6])%10000007;
        }
        cout<<"Case "<<++caseno<<": "<<dp[n]%10000007<<endl;
    }
    return 0;
}


