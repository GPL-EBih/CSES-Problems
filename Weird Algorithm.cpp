#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        if(n%2==0){
            n = n *0.5;
            cout<<n<<" ";
        }
        else{
            n = 3*n + 1;
            cout<<n<<" ";
        }
    }
}