#ifndef MOD_SIMULADO_H_INCLUDED
#define MOD_SIMULADO_H_INCLUDED
#include "puntos.h"
#include "rlutil.h"
void simulado(){
    int ops,puntos,puntosTotales=0,puntosRonda,cantidadFallidos=0,i,numeroRonda=0,lanzamiento,bunco2=0,total=0,lanzamientoTotal=0;
    bool cargado=false;
    char nombre[7][10];
while (true){
            system("cls");
            tituloAnimado();
            menuJ1();
            cin>>ops;
            system("cls");
            switch (ops){
                case 1:tituloAnimado();
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
                                    mostrarPalabras(nombre,1);
                                    cout<<"  |  "; cout<<"RONDA: "<<numeroRonda;
                                    cout<<"  |  ";cout<<"PUNTAJE ACUMULADO: "<<puntosTotales<<endl;
                                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    cout<<"VECES QUE HUBO BUNCO: "<<bunco2<<endl;
                                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    cout<<"LANZAMIENTO: "<<lanzamiento<<endl;
                                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    puntos= tirarDados(numeroRonda,4);
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
                        cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                        cout<<" PUNTAJE: "<<puntosRonda<<" puntos"<<endl;
                        cout<<" BUNCOS: "<<bunco2<<endl;
                        cout<<" TIRADAS FALLIDAS ACUMULADAS: "<<cantidadFallidos<<endl;
                        cout<<" LANZAMINETOS: "<<lanzamiento<<endl;
                        cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                        system("pause");
                        system("clear");
                }
                total=puntosTotales-(cantidadFallidos*3);
                mostrarPalabras(nombre,1);cout<<" | ";cout<<"FIN DEL JUEGO"<<endl;
                cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                cout<<" CANTIDAD DE BUNCOS REALIZADOS: "<<bunco2<<endl;
                cout<<" PUNTOS: "<<puntosTotales<<endl;
                cout<<" TOTAL DE TIROS FALLIDOS: "<<cantidadFallidos<<endl;
                cout<<" TOTAL DE LANZAMIENTOS: "<<lanzamientoTotal<<endl;
                cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                cout<<" PUNTUACION TOTAL: "<<total<<" puntos"<<endl;
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
                    break;
                system("pause");
            }
        }
}
#endif // MOD_SIMULADO_H_INCLUDED
