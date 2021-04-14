#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the number: ";
    cin>>n;

    cout<<n;
    //calculate
    while(n!=1){
        if(n%2 == 1) n = 3*n+1; //odd
        else n = n/2; //even
        cout<<" "<<n;
    }
    cout<<endl;

    return 0;
}
