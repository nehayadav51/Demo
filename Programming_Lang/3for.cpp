// FACTORIAL OF N

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n\n";
    cin>>n;

    int fact=1;
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    cout<<"Factorial = "<<fact<<endl;
    return 0;
}