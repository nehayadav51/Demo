// SUM OF ALL EVEN NUMBERS

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;

    int sum=0;
    for(int i=2; i<=n; i=i+2){
        sum+=i;
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}