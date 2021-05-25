#ifndef INSTRUCCIONES_H_INCLUDED
#define INSTRUCCIONES_H_INCLUDED

int instrucciones (){
system("cls");
tituloAnimado();
/*cout<<"BUNCO"<<endl;*/
locate(1,8); cout<<"Bunco es un juego que utiliza 3 dados,donde estos mismos son lanzados automaticamente."<<endl;
locate(1,9);cout<<"En el modo simulado usted elije el numero de los dados."<<endl;
locate(1,10);cout<<"El juego consiste en seis rondas, las cuales progresan secuencialmente del uno al seis."<<endl;
locate(1,11);cout<<"Cada ronda comienza con un lanzamiento de tres dados y un posterior analisis del puntaje al que equivale la tirada."<<endl;
locate(1,12);cout<<"El jugador obtendra:"<<endl;
locate(1,13);cout<<"21 puntos si los tres dados coinciden con el numero de la ronda que se esta jugando (a esta tirada se la denomina Bunco)"<<endl;
locate(1,14);cout<<"5 puntos si los tres dados son iguales pero no coinciden con la ronda en curso."<<endl;
locate(1,15);cout<<"3 puntos si la suma de los tres dados es divisible por 5."<<endl;
locate(1,16);cout<<"2 puntos si los tres dados forman una escalera."<<endl;
locate(1,17);cout<<"1 punto por cada dado que coincida con el numero de la ronda."<<endl;
locate(1,18);cout<<"Nota: Siempre debera sumar unicamente el puntaje de mayor valor."<<endl;
locate(1,19);cout<<"Si realiza una tirada que no suma ningun puntaje, a la misma se la considerara tirada fallida."<<endl;
locate(1,20);cout<<"cada tirada fallida son 3 puntos menos"<<endl;


}

#endif // INSTRUCCIONES_H_INCLUDED
