#include <iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the Value of n: ";
    cin>>n;

    int row = 1;
    while(row<=n){

        int value = row;
        int col = 1;

        while(col<=row){

            cout<<value<<" ";
            value++;
            col++;

        }
        cout<<endl;
        row++;
    }
}