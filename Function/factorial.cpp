#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter a factorial :";
    cin>>n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
        
    }
    cout<<fact;
}