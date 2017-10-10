#include<stdio.h>
#include<iostream>
#define MAX 50
using namespace std;
int dp[MAX][MAX];
int nCr(int a,int b){
    if(a==b) return 1;
    if(b==1) return a;
    if(dp[a][b]!=-1) return dp[a][b];
    dp[a][b]=nCr(a-1,b)+nCr(a-1,b-1);
    return dp[a][b];
}
int main(){
    int n,r;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    cout<<"Enter the value of r :"<<endl;
    cin>>r;
    for(int i=0;i<MAX;i++)
    {
        for(int j=0;j<MAX;j++){
            dp[i][j]=-1;
        }
    }
    int result=nCr(n,r);
    cout<<"Result : "<<result<<endl;
    return 0;
}

