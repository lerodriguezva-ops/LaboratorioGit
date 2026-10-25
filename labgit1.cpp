#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
int main (){
    ifstream archivoEntrada("input1/archivoEntrada.txt");
    ofstream archivoSalida("output1/archivoSalida.txt");

    if (archivoEntrada.is_open() && archivoSalida.is_open()) {
        cout<<"Archivo abierto"<<endl;
        string linea;

        while (getline(archivoEntrada, linea)) {
            archivoSalida << linea;
        }
        cout<<"Archivo copiado correctamente"<<endl;
    }
}


