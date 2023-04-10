#include <iostream>
using namespace std;

int main()
{
    //declaração do ponteiro
    int *ptr = new int;
    *ptr = 7;
    
    cout << *ptr << endl;
    cout << ptr << endl;
    
    //deleta o endereço de memoria
    delete ptr;
    ptr = nullptr;
    
    //por conta do NULLPTR, não aparece o endereço
    cout << *ptr << endl;
    cout << ptr << endl;
}