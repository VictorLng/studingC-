#include "iostream"
using namespace std;

int comPoneiro(int *x){
  ++*x;
  cout << *x << '\n'; 
  return 0;
}

int semPonteiro(int x){
    ++x;
    cout << x << '\n';
    cout << &x << '\n';
    return 0;
}



int main(){
    int x{10};
    semPonteiro(x);
    cout << x << '\n';
    cout << &x << '\n';
}
