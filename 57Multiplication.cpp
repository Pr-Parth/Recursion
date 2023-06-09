#include<bits/stdc++.h>
using namespace std;

int multi(int m,int n){
    if (n==0){
        return 0;
    }

    int smallOutput=multi(m,n-1);
    return smallOutput+m;
}

int main(){
    int m;
    int n;
    cin>>m>>n;

    int ans= multi(m,n);
    cout<<ans<<endl;
    return 0;
}