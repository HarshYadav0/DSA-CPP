#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //row 
    for(int i = 0; i<n;i++){
        for(int i=0; i<n+2;i++){
            cout<<" * ";
        }
        cout<<endl;
    }
}