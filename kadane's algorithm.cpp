#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//kadane's algorithm used to find the largest sum of a contiguous sub-array in a given array.
int solve(int a[],int n){
    int sum_pre=INT_MIN;
    int sum_curr=0;
    for(int i=0;i<n;i++){
        sum_curr+=a[i];
        if(sum_pre<sum_curr)
            sum_pre=sum_curr;

        if(sum_curr<0)
            sum_curr=0;

    }
 return sum_pre;
}

int main(){
int n;
cin>>n;//element in the array
int a[n];
//element are positive and negative both
for(int i=0;i<n;i++)
    cin>>a[i];

cout<<"\n"<<"largest sum:"<<solve(a,n);


    return 0;
}
//time complexity= O(n)
//space complexity-O(1)
