#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//swap sort for finding  missing no and duplicate numbers
void solve(int a[],int n){
 int i=0;
 while(i<n){
    if(a[i]!=a[a[i]-1]){
        int temp=a[i];
        a[i]=a[temp-1];
        a[temp-1]=temp;
    }
    else
        i++;
 }
}


int main(){
int n;
cin>>n;//no of element in the array
//element in the array are ranging from 1 to n but some are duplicate and some are missing
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}

solve(a,n);
cout<<"duplicate"<<"   "<<"missing"<<"\n";
for(int i=0;i<n;i++){
    if(a[i]!=i+1){
        cout<<"   "<<a[i]<<"\t\t"<<i+1<<"\n";
    }
}
    return 0;
}
