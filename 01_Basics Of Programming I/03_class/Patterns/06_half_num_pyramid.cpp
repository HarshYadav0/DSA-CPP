#include <iostream>
using namespace std;

int main(){
    
    for(int row = 0 ; row<6; row = row+1){

        for (int col = 1; col<=row; col = col+1){
            cout<<col;
        }
        cout<<endl;
    }
}