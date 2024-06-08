#include<iostream>
using namespace std;
    void fun(int x,int y){
            cout<<"address of main x"<<&x<<endl;
    cout<<"address of funy "<<&y<<endl;
    }
int main(){
    int x = 3;
    int y = 7;
    cout<<"address of main x"<<&x<<endl;
    cout<<"address of funy "<<&y<<endl;
      fun(x,y);
      }



