
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n){

     int dp[n];
     dp[0]=1;
    for(int i=1;i<n;i++){
            dp[i]=1;
        for(int j=0;j<i;j++){
            if(a[i]>a[j])
                dp[j]=max(dp[j]+1,dp[i]);
                //involving or not involving
        }
    }
    int max=-1;
    for(int i=0;i<n;i++){
        if(dp[i]>max)
            max=dp[i];
    }
    return max;
}

int main(){
int n;
cin>>n;//element in the array
int a[n];

for(int i=0;i<n;i++)
    cin>>a[i];

cout<<"largest subsequence : "<<solve(a,n);


    return 0;
}
//time complexity= O(n^2)
//space complexity-O(n)
