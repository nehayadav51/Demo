// SUM OF ALL ODD NUMBERS FROM 1 TO N

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i=i+2){
        sum+=i;
    }
    cout<<"Sum = "<<sum;
    return 0;

}