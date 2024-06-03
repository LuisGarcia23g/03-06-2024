//Clase 3 de junio Calculadora

#include <iostream>
using namespace std;

//las funciones se declaran antes del main, suma, resta, multiplicacion y division
int suma(int x, int y){
    return x+y;
}

int resta(int x, int y){
    return x-y;
}

int multiplicacion(int x, int y){
    return x*y;
}

float division(float x, float y){
    return x/y;
}


int main(){
    int num1, num2, opcion; //variables
    
cout << "Calculadora normal \n";
cout << " 1. si quiere sumar \n 2. si quiere restar \n 3. si quiere multiplicar \n 4. si quiere dividir \n 5. si quiere salir: ";
cin >> opcion;
cout << "Escriba su primer numero: ";
cin >> num1;
cout << "Escriba su segundo numero: ";
cin >> num2;

switch (opcion){
    case 1: 
    cout << "La suma es: " << suma(num1, num2) ;
    break;
    
    case 2: 
    cout << "La resta es: " << resta(num1, num2);
    break;
    
    case 3:
    cout << "La multiplicacion es: " << multiplicacion(num1, num2);
    break; 
    
    case 4: 
    cout << "La division es: " << division(num1, num2);
    break;
    
    case 5: 
    cout << "Ok adios";
    break;
}

    return 0;
}
