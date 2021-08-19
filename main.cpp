/*
* Estrucrutra de Datos.
* Autor: Estudiante Torres LLivipuma Romulo Jesus <rtorresll@est.ups.edu.ec>
* Universidad Politecnica Salesiana
* Fecha: 28-04-2021
* METODO DE ORDENAMIENTO SHELL
*/
#include <iostream>
using namespace std;
void shell (int[], int);
void imprimir (int[], int);

int main(){
    int t;

    cout << "-- METODO DE ORDENACION POR SHELL --" << endl;
    cout << "\n Tamanio del vector: ";

    cin >> t;
    int lista[t];

    for (int i=0; i<t; i++){

    cout<<"POSICION "<<"["<<i<<"]"<<" : ";

    cin >> lista[i];
    }
cout<< "\n\nincremento \ti \tj \tlista[j]  lista[j*increment] \taux \tlista[j] \tlista[j*incremento] \tlista"<<endl;
    shell(lista,t);
    return 0;
}
void shell (int lista[], int t){
    int j,incremento,aux;
    incremento=t/2;
    while(incremento>0){
        cout << incremento;
        for (int i=incremento; i<t; i++){
            j=i-incremento;
            cout << "\t\t" << i << "\t"<< j << "\t" << lista [j] << "\t\t\t" << lista[j+incremento];
            if(lista [j]>lista [j+incremento])
            {
                aux=lista[j];
                lista[j] = lista[j+incremento];
                lista[j+incremento] =aux;
                cout << "\t" << aux << "\t" << lista[j] << "\t\t" << lista[j+incremento] << "\t";
            }else{
                cout << "\t \t\t \t\t ";
        }
            imprimir(lista,t);
    }
        incremento/=2;
}

}
void imprimir (int lista[] , int t){
cout<< "\t\t";
for(int i=0;i<t;i++){
    cout<< lista[i]<<"-";

}
cout<<endl;
}

