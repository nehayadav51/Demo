#include <iostream>
using namespace std;
int main(){
    int n=7;
    for(int i=1; i<=n; i++){
        cout<<i;
        if(i==5){
            break;
        }
    }

    return 0;
}