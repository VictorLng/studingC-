#include "iostream"
using namespace std;

int main(){
    string name = "eduardo";
    string * PointerVar = new string;
    *PointerVar = "eduardo";

    cout << "show var: " << name << endl;
    cout << "show pointer: " << PointerVar << endl;
    cout << "show pointer.value: " << *PointerVar << endl;
    cout << "show size of var: " << sizeof(name) << endl;
    cout << "show size of pointer: " << sizeof(PointerVar) << endl;
    cout << "show size of pointer.values: " << sizeof(*PointerVar) << endl;
    delete(PointerVar);
}
