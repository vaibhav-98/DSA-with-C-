#include <iostream>
using namespace std ;


// function declaretion


int add (int a,int b){

    int res = a+b;
    return res;
}

int main (){

    int a;
    cout <<"Enter the value of a"<<endl;
    cin >>a;
    int b;
    cout <<"Enter the value of b"<<endl;
  cin >> b;
   
// function call or invoked
    int sum = add (a,b);
    cout << sum << endl;

}



