#ifndef PUNTOS_H_INCLUDED
#define PUNTOS_H_INCLUDED
#include "soloJugador.h"
#include "rlutil.h"
#include "TestDados.h"

void tirarDados();
int bunco(int v[],int tam,int numeroRonda);
int repetidos(int v[],int tam);
int divisibles(int v[],int tam);
int escalera(int v[],int tam);
int igualesRonda(int v[],int tam,int numeroRonda);


int tirarDados(int numeroRonda,int ops){
int dados[3],puntaje[5],pos,puntos;
if (ops==4){
    cargarVector(dados,3);
}
else{
cargarAleatorio(dados,3,6);
mostrarVector(dados,3);
}
puntaje[0]=bunco(dados,3,numeroRonda);
puntaje[1]=repetidos(dados,3);
puntaje[2]=divisibles(dados,3);
puntaje[3]=escalera(dados,3);
puntaje[4]=igualesRonda(dados,3,numeroRonda);
pos=maximoVector(puntaje,5);
if(puntaje[pos]!=0){
switch(pos){
    case 0: cout<<"\n";
            cout<<" SACASTE BUNCO!!!"<<endl;
            cout<<"\n";
            cout<<" *************************"<<endl;
            cout<<" |"<<"PUNTAJE DE LA TIRADA: "<<puntaje[0]<<"|"<<endl;
            cout<<" *************************"<<endl;
            cout<<"\n";

            return puntaje[0];

        break;
    case 1: cout<<"\n";
            cout<<" REPETIDOS"<<endl;
            cout<<"\n";
            cout<<" ************************"<<endl;
            cout<<" |"<<"PUNTAJE DE LA TIRADA: "<<puntaje[1]<<"|"<<endl;
            cout<<" ************************"<<endl;
            cout<<"\n";

            return puntaje[1];
        break;
    case 2: cout<<"\n";
            cout<<" DIVISIBLES 5"<<endl;
            cout<<"\n";
            cout<<" ************************"<<endl;
            cout<<" |"<<"PUNTAJE DE LA TIRADA: "<<puntaje[2]<<"|"<<endl;
            cout<<" ************************"<<endl;
            cout<<"\n";

            return puntaje[2];
        break;
    case 3: cout<<"\n";
            cout<<" ESCALERA"<<endl;
            cout<<"\n";
            cout<<" ************************"<<endl;
            cout<<" |"<<"PUNTAJE DE LA TIRADA: "<<puntaje[3]<<"|"<<endl;
            cout<<" ************************"<<endl;
            cout<<"\n";

            return puntaje[3];
        break;
    case 4: cout<<"\n";
            cout<<" COINCIDE CON RONDA"<<endl;
            cout<<"\n";
            cout<<" ************************"<<endl;
            cout<<" |"<<"PUNTAJE DE LA TIRADA: "<<puntaje[4]<<"|"<<endl;
            cout<<" ************************"<<endl;
            cout<<"\n";

            return puntaje[4];
        break;

}
}
else{cout<<"\n";
    cout<<" JUGADA FALLIDA"<<endl;
    cout<<"\n";
    cout<<" ************************"<<endl;
    cout<<" |"<<"PUNTAJE DE LA TIRADA: 0"<<"|"<<endl;
    cout<<" ************************"<<endl;
    cout<<"\n";


}
system("pause");

}





int bunco(int v[],int tam,int numeroRonda){
    int cant,c;
    cant=contarNumerosRepetidos(v,numeroRonda,tam);
    if (cant==3)return 21;
    return 0;

}




int repetidos(int v[],int tam){
    int i,c=0;
    for (i=0;i<=2;i++){
        if (v[0]==v[1] && v[1]==v[2])return 5;
        return 0;

}
}


int divisibles(int v[],int tam){
    int i,suma=0;
    suma=sumarVector(v,tam);
    if (suma%5==0)return 3;
    return 0;
}


int escalera(int v[],int tam){
    int i,p,s,t;
    ordenarVector(v,tam);
    for (i=0;i<=2;i++){
            p=v[0]+1;
            s=v[1];
            t=v[2];
        if(p==s){
                s=v[1]+1;
        if (s==t){
            return 3;
        }
}
    return 0;

    }
}
int igualesRonda(int v[],int tam,int numeroRonda){
int i,c=0;
for (i=0;i<=2;i++){
    if (v[i]==numeroRonda){
        c++;
    }
}
if (c==1){
    return 1;}

else if (c==2){
    return 2;
}


    return 0;

}




#endif // PUNTOS_H_INCLUDED
