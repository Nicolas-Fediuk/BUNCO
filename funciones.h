#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include "TestDados.h"

///PROTOTIPO DE FUNCIONES
///DECLARACION DE LA FUNCION
///valorDevuelto nombre(tipo de cad parámetro que recibe)

void nombreJ2();

void nombreJ1();

void menuJ1();

int maximoVector(int v[], int tam);

void cargarPalabras (char pal[7][10],int filas);

void mostrarPalabras (char pal[7][10],int filas);

void cargarAleatorio(int v[], int tam, int limite);

void cargarVector(int [],int );

void mostrarVector(int v[],int tam);

int sumarVector(int v[], int tam);

float calcularPromedioVector(int v[], int tam);

void cambiaraElValor(int edad, int i);

int contarMayores(int v[], int tam, int valor);

int contarNumerosRepetidos(int v[], int tam , int numero);

int buscarRepetidos (int v[],int tam,int numero);

void ordenarVector(int v[], int tam );


///FIN PROTOTIPOS


void menuJ2(){
            locate(41,8);cout<<"1. INGRESAR SUS NOMBRES"<<endl;
            locate(41,9);cout<<"2. LANZAR DADOS"<<endl;
            locate(41,10);cout<<"0. VOLVER AL MENU PRINCIPAL"<<endl;
            locate(41,12);cout<<"OPCION: ";
}

void nombreJ1(){
                    locate(41,8);cout<<"INGRESE SU NOMBRE"<<endl;
                    locate(41,9);cout<<"NOMBRE: ";
}

void menuJ1(){
            locate(41,8);cout<<"1. INGRESAR SU NOMBRE"<<endl;
            locate(41,9);cout<<"2. LANZAR DADOS"<<endl;
            locate(41,10);cout<<"0. VOLVER AL MENU PRINCIPAL"<<endl;
            locate(41,12);cout<<"OPCION: ";
}

int maximoVector(int v[], int tam){
    int i, posMax=0;
    for(i=1;i<tam;i++){
        if(v[i]>v[posMax]) {
                posMax=i;
        }
    }
    return posMax;
}

void mostrarPalabras (char pal[7][10],int filas){
int i;
for (i=0;i<filas;i++){
    cout<<" "<<pal[i];
}
}

void cargarPalabras (char pal[1][10],int filas){
int i;
for (i=0;i<filas;i++){
    cin>>pal[i];
}
}

void ordenarVector(int v[], int tam ){
    int i,j, posmin, aux;
    for(i=0;i<tam-1;i++){
        posmin=i;
        for(j=i+1;j<tam;j++){
            if(v[j]<v[posmin]) posmin=j;
        }
        aux=v[i];
        v[i]=v[posmin];
        v[posmin]=aux;
    }
}

int buscarRepetidos (int v[],int tam,int numero){
int i,c=0;
cout<<"INGRESE EL NUMERO QUE DESEA BUSCAR: ";
cin>>numero;
for (i=0;i<tam;i++){
    if (numero==v[i]){
        c++;
    }
}
    if (c>=1){
            cout<<"EL NUMERO INGRESADO EXISTE EN EL VECTOR"<<endl;
    }
    else{
        cout<<"EL NUMERO INGRESADO NO EXISTE EN EL VECTOR"<<endl;
    }
}

int contarNumerosRepetidos(int v[], int numero, int tam){
    int i, cant=0;
    for(i=0;i<tam;i++){
        if(v[i]==numero) cant++;
        }
    return cant;
}

void cargarVector(int v[],int tam){
    int i;
    for(i=0;i<tam;i++){
        cout<<"INGRESE DADO "<<i+1<<": ";
        cin>>v[i];
    }
}

void mostrarVector(int v[],int tam){
    int i;
    for(i=0;i<tam;i++){

        MenuDeDados(v);

    }
}

int sumarVector(int v[], int tam){
    int suma=0, i;
    for(i=0;i<tam;i++){
        suma+=v[i];
    }
    return suma;
}

float calcularPromedioVector(int v[], int tam){
    int suma=sumarVector(v, tam);
    float promedio;
    promedio=(float)suma/tam;
    return promedio;
}

void cambiaraElValor(int edad, int i){
    edad=140;
    i=140;
}


int contarMayores(int v[], int tam, int valor){
    int i, c=0;
    for(i=0;i<tam;i++){
        if(v[i]>valor) c++;
    }
    return c;
}
void cargarAleatorio(int v[], int tam, int limite){
  int i;
  srand(time(NULL));
  for( i=0; i<tam; i++ ){
        v[i]=(rand()%limite)+1;

  }
}




#endif // FUNCIONES_H_INCLUDED
