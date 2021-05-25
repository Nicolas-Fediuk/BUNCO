#ifndef DOS_JUGADORES_H_INCLUDED
#define DOS_JUGADORES_H_INCLUDED

void dos_jugadores(){
int ops,puntos,puntosTotales=0,puntosRonda,cantidadFallidos=0,i,numeroRonda=0,lanzamiento,bunco2=0,total=0;
int puntos2,puntosTotales2=0,puntosRondas2,cantidadFallidos2=0,lanzamientos2,bunco3=0,total2=0;
    bool cargado=false;
    int cortar=0;
    char nombre1[1][10];
    char nombre2[1][10];
    while (true){
            system("cls");
            tituloAnimado();
            menuJ2();
            cin>>ops;
            system("cls");
            switch (ops){
                case 1:tituloAnimado();
                        locate(41,8);cout<<"INGRESE NOMBRE DEL JUGADOR 1: ";
                        locate(41,9);cout<<"NOMBRE: ";
                            cargarPalabras(nombre1,1);
                        locate(41,11);cout<<"INGRESE NOMBRE DEL JUGADOR 2: ";
                        locate(41,12);cout<<"NOMBRE: ";
                            cargarPalabras(nombre2,1);
                        locate(41,14);
                        cargado=true;
                        system("pause");
                      break;
                case 2:if (cargado==true){
                    for(i=1;i<=6;i++){
                            puntos=0;
                            puntos2=0;
                            puntosRonda=0;
                            puntosRondas2=0;
                            numeroRonda=i;
                            lanzamiento=0;
                            lanzamientos2=0;
                           while(puntosRonda<21 && puntosRondas2<21){
                                  while(cortar==0){
                                    mostrarPalabras(nombre1,1);
                                    cout<<" | "<<"RONDA: "<<numeroRonda;
                                    cout<<" | "<<"PUNTAJE DE LA RONDA: "<<puntosRonda;
                                    cout<<" | "<<"PUNTAJE ACUMULADO: "<<puntosTotales;
                                    cout<<" | "<<"VECES QUE HUBO BUNCO: "<<bunco2;
                                    cout<<" | "<<"LANZAMIENTO: "<<lanzamiento<<endl;
                                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    puntos= tirarDados(numeroRonda,1);
                                    lanzamiento++;
                                    if (puntos!=0){
                                    puntosTotales+=puntos;
                                    puntosRonda+=puntos;
                                    }
                                    else{
                                        cantidadFallidos++;
                                        cortar=1;
                                    }
                                    if (puntosRonda>=21){
                                        cortar=1;
                                    }
                                    if (puntos==21){
                                        bunco2++;
                                    }
                                    system("pause");
                                    system("cls");
                                  }
                                    if (puntosRonda>=21 && lanzamientos2>=1){
                                        cortar=1;
                                    }
                                    else{
                                        cortar=0;
                                        cout<<" RONDA: "<<numeroRonda<<endl;
                                    cout<<" PROXIMO TURNO:"; mostrarPalabras(nombre2,1);
                                    printf("\n");
                                    cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    cout<<" PUNTAJE"; mostrarPalabras(nombre1,1);
                                    cout<<": "<<puntosTotales<<" PUNTOS"<<endl;
                                    cout<<" CANTIDAD DE BUNCOS: "<<bunco2<<endl;
                                    cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    cout<<" PUNTAJE"; mostrarPalabras(nombre2,1);
                                    cout<<": "<<puntosTotales2<<" PUNTOS"<<endl;
                                    cout<<" CANTIDAD DE BUNCOS: "<<bunco3<<endl;
                                    system("pause");
                                    system("cls");
                                    }

                                while(cortar==0){
                                    mostrarPalabras(nombre2,1);
                                    cout<<" | "<<"RONDA: "<<numeroRonda;
                                    cout<<" | "<<"PUNTAJE DE LA RONDA: "<<puntosRondas2;
                                    cout<<" | "<<"PUNTAJE ACUMULADO: "<<puntosTotales2;
                                    cout<<" | "<<"VECES QUE HUBO BUNCO: "<<bunco3;
                                    cout<<" | "<<"LANZAMIENTO: "<<lanzamientos2<<endl;
                                    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                    puntos2= tirarDados(numeroRonda,1);
                                    lanzamientos2++;
                                    if (puntos2!=0){
                                    puntosTotales2+=puntos2;
                                    puntosRondas2+=puntos2;
                                    }
                                    else{
                                        cantidadFallidos2++;
                                        cortar=1;
                                    }
                                    if (puntos2==21){
                                        bunco3++;
                                        cortar=1;
                                    }
                                     if (puntosRondas2>=21){
                                        cortar=1;
                                    }
                                    system("pause");
                                    system("cls");
                                    }
                                        cortar=0;
                                        cout<<" RONDA: "<<numeroRonda<<endl;
                                        cout<<" PROXIMO TURNO:"; mostrarPalabras(nombre1,1);
                                        printf("\n");
                                        cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                        cout<<" PUNTAJE"; mostrarPalabras(nombre2,1);
                                        cout<<": "<<puntosTotales2<<" PUNTOS"<<endl;
                                        cout<<" CANTIDAD DE BUNCOS: "<<bunco3<<endl;
                                        cout<<" - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
                                        cout<<" PUNTAJE"; mostrarPalabras(nombre1,1);
                                        cout<<": "<<puntosTotales<<" PUNTOS"<<endl;
                                        cout<<" CANTIDAD DE BUNCOS: "<<bunco2<<endl;
                                        system("pause");
                                        system("cls");
                            }
            }
                total=puntosTotales-(cantidadFallidos*2);
                total2=puntosTotales2-(cantidadFallidos2*2);
                if (total>total2){
                    cout<<" GANADOR!:";
                    mostrarPalabras(nombre1,1);
                    printf("\n");
                    cout<<" CANTIDAD DE BUNCOS: "<<bunco2<<endl;
                    cout<<" PUNTAJE TOTAL: "<<total<<endl;
                    maximo(nombre1,10,total,bunco2);
                }
                else{
                    cout<<" GANADOR!:";
                    mostrarPalabras(nombre2,1);
                    printf("\n");
                    cout<<" CANTIDAD DE BUNCOS: "<<bunco3<<endl;
                    cout<<" PUNTAJE TOTAL: "<<total2<<endl;
                    maximo(nombre2,10,total2,bunco3);
                }
                system("pause");
                }
                else{
                    cout<<" INGRESE PRIMERO SUS NOMBRES POR FAVOR"<<endl;
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
#endif // DOS_JUGADORES_H_INCLUDED
