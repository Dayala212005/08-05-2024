#include <iostream>

using namespace std;

int main(){

char opcion;

do{
    cout<<"Menu"<<"\n";
    cout<<"A. Carne asada\n";
    cout<<"B. Pollo\n";
    cout<<"C. Cerdo\n";
    cout<<"Seleccionar una opcion: \n";
    cin>>opcion;
    cout<<"Opcion seleccionada "<<opcion<<"\n";

}
while(opcion!='A'&&opcion!='B'&&opcion!='C');
    return 0;
}