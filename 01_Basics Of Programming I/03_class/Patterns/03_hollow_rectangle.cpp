#include <iostream>
using namespace std;

int main(){

    for (int i = 0; i<4; i = i+1){

        if (i==0 || i ==3){
            for(int i = 0; i<5; i = i+1){
                cout<<"* ";
            }
        }
        else{
            cout<<"* ";
            for(int i = 0; i<6; i = i+1){
                cout<<" ";
            }
            cout<<"* ";
        }
        cout<<endl;
    }
  
}