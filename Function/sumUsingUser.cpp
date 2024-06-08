#include<iostream>
using namespace std;
int sum(int x,int y){
    return x+y;
}

int main(){
    int x,y;
    cout<<"Enter x :";
    cin>>x;
    cout<<"Enter y :";
    cin>>y;
    cout<<"sum is "<<sum(x,y);
}