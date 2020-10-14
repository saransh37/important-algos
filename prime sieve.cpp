#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//sieve prime algorithm used to find the prime number between given range and its derivative questions
void solve(int p[],int n){

//only odd number can be prime so  make 1 all odd
for(int i=3;i<=n;i+=2)
   p[i]=1;

//sieve algorithm for prime  numbers
 for(int i=3;i<=n;i+=2){
    for(int j=i*i;j<=n;j+=i)//we can use also 2*i instead of i*i
        p[j]=0;
 }

}

int main(){
int n;
cout<<"Enter the number up to which you want to print the prime numbers:";
cin>>n;

int p[n]={0};
p[2]=1;
solve(p,n);

for(int i=0;i<=n;i++){
    if(p[i]==1)
        cout<<i<<" ";
}
    return 0;
}
