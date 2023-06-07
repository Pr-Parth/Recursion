#include<bits/stdc++.h>
using namespace std;

int power(int x, int n){
        if(x==0){
            return 0;
        }
        if(n==0){
            return 1;
        }

        int smallOutput= power(x, n-1);
        return smallOutput*x;

}
int main(){
    int x;
    cin>>x;

    int n;
    cin>>n;

    int ans= power(x,n);
    cout<<ans<<endl;
    return 0;
}