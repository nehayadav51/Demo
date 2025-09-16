// CHECK IF A NUMBER IS PRIME OR NOT

#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter n\n";
    cin>>n;

    bool isPrime = true;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime==false){
        cout<<"Non-Prime\n";
    }
    else{
        cout<<"Prime Number\n";
    }

    return 0;
}