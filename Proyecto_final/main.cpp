#include <iostream>
#include <stdlib.h>

using namespace std;

void vinicial();
void ingreso();
void cyf();

double m[100][100], v[100];
int x,y;

int main()
{
    cyf();
    ingreso();
    vinicial();
    return 0;
}

void vinicial(){

for(int i =1; i<=y; i++){
    for(int j =1; j<=x; j++){
        cout << "   |  " << m[i][j];
    }
    cout << "   |  " << v[i] << "   |   " << endl;
}

}

void ingreso(){

    for(int i =1; i<=y; i++){
        for(int j =1; j<=x; j++){
            cout << "\nIngrese el valor de la matriz en la posicion: M["<<i<<"]["<<j<<"]: ";cin>>m[i][j];
        }
    }

    for(int i=1; i<=y; i++){
    cout << "\nIngrese el valor del vector resultante en la posicion: V["<<i<<"]:";cin>>v[i];
}

    system("cls");
}

void cyf(){
    cout << "\nResolucion de sistemas de ecuaciones lineales por el metodo de Gauss Jordan \n\nIngrese el numero de columnas: ";
    cin >>x;
    cout << "\nIngrese el numero de Filas: ";
    cin >>y;
    system("cls");
}
