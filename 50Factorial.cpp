#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    
    cout<<n<<" ";
    if (n==0)
    {
        return 1;
    }
    

    int smallans= fact(n-1);
    return n*smallans;
}

int main(){
    int n;
    cin>>n;

    int ans = fact(n);
    cout<<endl;
    cout<<ans<<endl;
    return 0;
}