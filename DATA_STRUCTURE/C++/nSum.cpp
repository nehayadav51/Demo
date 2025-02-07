// Sum of numbers from 1 to n

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