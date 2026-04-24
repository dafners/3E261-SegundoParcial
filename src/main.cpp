#include <iostream>
#include <Foco.hpp>

using namespace std;

int main(int argc, char const *argv[]) 
{
    Foco foquito;
    foquito.Encender();
    foquito.Apagar();

    cout << "Estado Foco:  " << foquito.LeerEstado() << endl;
    return 0;
}

