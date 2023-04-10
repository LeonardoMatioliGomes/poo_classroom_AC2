#include <iostream>
using namespace std;

int main()
{
    //declara sua variavel
    int Var = 3;
    //* é usado para transforma em ponteiro
    int* pVar;
    pVar = &Var;
    
    //inerface que apare ao usuario, mostrando sua variavel
    cout<<Var<<endl;
    cout<<*pVar<<endl;
    //vai mostrar ao usuario o endereço de memoria 
    cout<<pVar<<endl;
}