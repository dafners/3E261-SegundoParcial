#include <iostream>
#include <Foco.hpp>
#include <SerieFocos.hpp>

using namespace std;

int main(int argc, char const *argv[]) 
{
    SerieFocos serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();
    serie.MostrarFocos();

    return 0;
}

