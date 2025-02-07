// Check if a number is Prime or not

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    bool isPrime = true;

    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<"Prime Number\n";
    }else{
        cout<<"Non-Prime Number\n";
    }

    return 0;
}