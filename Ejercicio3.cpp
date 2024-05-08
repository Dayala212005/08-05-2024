#include <iostream>

using namespace std;

int main(){

    int n,modulo=0;

  cout<<"Ingrese un numero entero n: \n";
  cin>>n;
  int primo=1;//hipotesis
  for(int i=n-1;i>=2;i--){
     modulo=n%i;
    if(modulo==0){
        cout<<"El numero "<<n<<" no es primo\n";
        primo = 0;
        break;
    }
  }
if(primo==1){
    cout<<"El numero "<<n<<" es primo\n";
}
    return 0;
}