// SUM OF NUMBERS FROM 1 TO N

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++){
        sum+=i;
    } 
    cout<<"Sum = "<<sum<<endl;
    return 0;
}