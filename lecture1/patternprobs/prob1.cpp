#include<iostream>
using namespace std;

int main(){
    // printing solid rectangle pattern ;
    int row,col;
    cin>>row>>col;

    for(int i=0; i<row; i++){
        for(int j=0; j<col;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}