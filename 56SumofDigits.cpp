#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if (n==0){
        return 0;
    }

    int smallOutput= sum(n/10);

    int lastdigit = n%10;
    return smallOutput+lastdigit;
            
}

int main(){
    int n;
    cin>>n;

    int ans=sum(n);
    cout<<ans<<endl;
    return 0;
}