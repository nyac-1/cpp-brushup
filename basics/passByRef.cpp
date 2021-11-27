#include <iostream>

using namespace std;

void func(int *y){
    cout<<"The value of y is "<<y<<endl;
    *y = 100;
}

void func2(int &y){
    y = 420;
}

int main(){
    int x = 10;
    func2(x);
    cout<<"the value of x is "<<x<<endl;
    
    return 0;
}
