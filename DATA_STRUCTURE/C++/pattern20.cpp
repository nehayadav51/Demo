/*

- - - * - - -
- - * - * - -
- * - - - * -
* - - - - - *
- * - - - * -
- - * - * - -
- - - * - - -

*/

#include <iostream>
using namespace std;
int main(){
    
    int n=4;
    
    // for top triangle
    for(int i=0; i<n; i++){
        
        // for spaces
        for(int j=0; j<(n-i-1); j++){
            cout<<" ";
            
        }
        cout<<"*";
        if(i!=0){
            // spaces
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    // for bottom triangle
    for(int i=0; i<n-i; i++){
        
        // for spaces
        for(int j=0; j<(i+1); j++){
            cout<<" ";
        }
        
        cout<<"*";
        
        if(i!=n-2){
            // spaces
            for(int j=0; j<2*(n-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
