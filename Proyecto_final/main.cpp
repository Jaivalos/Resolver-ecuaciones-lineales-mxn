#include <iostream>
#include <stdlib.h>

using namespace std;

void ingreso();
void cyf();

double v[100][100];
int x,y;

int main()
{
    cyf();
    ingreso();
    return 0;
}

void ingreso(){

    for(int i =1; i<=x; i++){
        for(int j =1; j<=y; j++){
            cout << "\nIngrese el valor del vector en la posicion: V["<<i<<"]["<<j<<"]: ";cin>>v[i][j];
        }
    }

}

void cyf(){
    cout << "\nResolucion de sistemas de ecuaciones lineales por el metodo de Gauss Jordan \n\nIngrese el numero de columnas: ";
    cin >>x;
    cout << "\nIngrese el numero de Filas: ";
    cin >>y;
    system("cls");
}
