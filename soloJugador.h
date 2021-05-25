#ifndef SOLOJUGADOR_H_INCLUDED
#define SOLOJUGADOR_H_INCLUDED
#include "puntos.h"
#include "rlutil.h"
#include "maximo.h"
void jugador_uno(){
    int ops,puntos,puntosTotales=0,puntosRonda,cantidadFallidos=0,i,numeroRonda=0,lanzamientoTotal=0,bunco2=0,total=0,lanzamiento;
    bool cargado=false;
    char nombre[1][10];
    while (true){
            system("cls");
            tituloAnimado();
            menuJ1();
            cin>>ops;
            system("cls");
            switch (ops){

                case 1:
                    tituloAnimado();
                    nombreJ1();
                    cargarPalabras(nombre,1);
                    locate(41,11);
                        cargado=true;
                        system("pause");
                      break;

                case 2:if (cargado==true){
                    for(i=1;i<=6;i++){
                            puntos=0;
                            puntosRonda=0;
                            numeroRonda=i;
                            lanzamiento=0;
                            while(puntosRonda<21){
                                    lanzamientoTotal++;
                                    lanzamiento++;
                                    mostrarPalabras(nombre,1);cout<<" | "<<"RONDA: "<<numeroRonda;
                                    cout<<" | "<<"PUNTAJE DE LA RONDA: "<<puntosRonda;
                                    cout<<" | "<<"PUNTAJE ACUMULADO: "<<puntosTotales;
                                    cout<<" | "<<"VECES QUE HUBO BUNCO: "<<bunco2;
                                    cout<<" | "<<"LANZAMIENTO: "<<lanzamiento<<endl;
                                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    puntos=tirarDados(numeroRonda,1);
                                    if (puntos!=0){
                                    puntosTotales+=puntos;
                                    puntosRonda+=puntos;
                                    }
                                    else{
                                        cantidadFallidos++;
                                    }
                                    if (puntos==21){
                                        bunco2++;
                                    }
                                    system("pause");
                                    system("cls");
                        }
                        cout<<" RONDA: "<<numeroRonda<<endl;
                        cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                        cout<<" PUNTAJE";
                        mostrarPalabras(nombre,1);
                        cout<<": "<<puntosRonda<<" puntos"<<endl;
                        cout<<" BUNCOS: "<<bunco2<<endl;
                        cout<<" TIRADAS FALLIDAS ACUMULADAS: "<<cantidadFallidos<<endl;
                        cout<<" LANZAMIENTOS: "<<lanzamiento<<endl;
                        cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                        system("pause");
                        system("cls");
                }
                total=puntosTotales-(cantidadFallidos*2);
                mostrarPalabras(nombre,1);cout<<" | ";cout<<"FIN DEL JUEGO"<<endl;
                cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                cout<<" CANTIDAD DE BUNCOS REALIZADOS: "<<bunco2<<endl;
                cout<<" PUNTOS: "<<puntosTotales<<endl;
                cout<<" TOTAL DE TIROS FALLIDOS: "<<cantidadFallidos<<endl;
                cout<<" TOTAL DE LANZAMIENTOS: "<<lanzamientoTotal<<endl;
                cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                cout<<" PUNTUACION TOTAL: "<<total<<" puntos"<<endl;
                maximo(nombre,10,total,bunco2);
                system("pause");
                }
                else{
                    cout<<" INGRESE PRIMERO SU NOMBRE POR FAVOR"<<endl;
                }
                system("pause");
                    break;

                case 0: return;
                break;

                default:cout<<" EL NUMER0 INGRESADO ES INCORRECTO"<<endl;
                        system ("pause");
                    break;
                system("pause");
            }
        }
}

#endif // SOLOJUGADOR_H_INCLUDED
