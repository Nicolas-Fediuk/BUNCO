#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<ctime>
#include<windows.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <dos.h>
using namespace std;
#include "funciones.h"
#include "soloJugador.h"
#include "puntos.h"
#include "rlutil.h"
#include "TestDados.h"
#include "mod_simulado.h"
#include "instrucciones.h"
#include "dos_jugadores.h"
#include "maximo.h"
#include "sumulado1.h"
using namespace rlutil;
int main(){
    int ops;
    bool bandera=false;
    while (true){
        setBackgroundColor(MAGENTA);
        system("cls");
        MenuPrincipalGenerala();
        cin>>ops;
        switch(ops){
            case 1:jugador_uno();
                    bandera=true;
                break;

            case 2:dos_jugadores();
                    bandera=true;
                break;

            case 3:if (bandera==true){
                    maximo2();}
                    else{
                       locate (40,18);cout<<" NO HAY PUNTUACIONES MAXIMAS"<<endl;
                       locate (41,19);
                    }
                break;

            case 4:simulado();
                break;

            case 6:instrucciones();
                break;

            case 5:simulado2();

            case 0: return 0;
                break;

            default:cout<<" OPCION INCORRECTA"<<endl;

        }
        system ("pause");

    }
    return 0;
}
