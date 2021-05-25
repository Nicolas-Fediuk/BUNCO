#ifndef MAXIMO_H_INCLUDED
#define MAXIMO_H_INCLUDED
void maximo2 ();
void maximo(char n[1][10],int filas,int p,int b );

int max_puntos=0,max_bunco=0,i,j;
char palabra[1][10];

void maximo(char n[1][10],int filas,int p,int b ){
    if (p>max_puntos){
        max_puntos=p;
        max_bunco=b;
        for (i=0;i<filas;i++){
                for(j=0;j<filas;j++){
            palabra[i][j]=n[i][j];
}
}
}
}
void maximo2 (){
system("cls");
tituloAnimado();
locate(41,8);cout<<"PUNTUACION MAS ALTA"<<endl;
locate(40,9);mostrarPalabras(palabra,1);
locate(41,10);cout<<max_puntos<<" PUNTOS"<<endl;
locate(41,11);cout<<"BUNCOS OBTENIDOS: "<<max_bunco<<endl;
locate(41,13);
system("pause");
}
#endif // MAXIMO_H_INCLUDED
