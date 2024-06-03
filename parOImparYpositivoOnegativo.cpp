
//Programa funcion para saber si un numero es par o impar y si es positivo o negativo

#include <iostream>
using namespace std;

string parOimpar(int x){
    if (x%2==0){
        return "par";
    } else if (x==0){
        return "no es par o impar: es 0";
    } else {
        return "impar";
    }
}

string tipo(int x){
    if (x==0){
        return "es 0"
    } 
else if (x>0){
    return "su numero es mayor a 0";
}
else {
    return "su numero es menor a 0";
}

}


int main(){
    int n;
cout << "Escriba un numero: ";
cin >> n;

string tipo= tipo(n); 
string parOimpar = parOimpar(n);
cout << "El numero " << n << " es " << tipo << " y es " << parOimpar;
    
    return 0;
}