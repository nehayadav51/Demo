// Sum of all odd numbers from 1 to n

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n\n";
    cin>>n;

    int sum=0;
    for(int i=1; i<=n; i++){
        if(i%2!=0){
            sum+=i;
        }
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}