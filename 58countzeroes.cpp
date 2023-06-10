#include<bits/stdc++.h>
using namespace std;

int countzero(int n){
    if (n==0)
    {
        return 0;
    }
    
    int smallans=countzero(n/10);
    int last_digit=n%10;
    if (last_digit==0)
    {
        return 1 + smallans;
    }
    else{
        return smallans;
    }
    


}

int main(){
    int n;
    cin>>n;

    int no_of_Zeroes = countzero(n);
    cout<<"Total Number of zeroes are: "<<no_of_Zeroes<<endl;
    return 0;
}