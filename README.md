BUNCO

Se deberá realizar una variante del juego de dados denominado Bunco en un proyecto de CodeBlock. El mismo debe contar con un menú principal que contemple las siguientes opciones:

Juego nuevo para un jugador.
Juego nuevo para dos jugadores.
Mostrar puntuación más alta.
Modo simulado (carga de dados manual).
Salir.

Juego nuevo para un jugador

Esta opción permite a un solo jugador realizar una partida completa de Bunco. Antes de comenzar a jugar deberá solicitar el nombre del jugador. Una vez finalizada la partida el programa tendrá que emitir:

El nombre del jugador.
La cantidad de buncos que realizó.
La cantidad de tiradas fallidas.
El total de lanzamientos que fueron necesarios para completar las seis rondas.
Su puntaje total acumulado.

Juego nuevo para dos jugadores
Esta opción permite a dos jugadores realizar una partida completa de Bunco. Antes de comenzar a jugar se deberá solicitar el nombre de los jugadores. Una vez finalizada la partida, el programa tendrá que emitir:
El nombre del jugador ganador.
La cantidad de buncos que realizó.
Su puntaje total acumulado.

Mostrar puntuación más alta
Esta opción debe mostrar el nombre del jugador que haya finalizado el juego con la mayor puntuación y la cantidad de Buncos que realizó.

Nota: Cabe aclarar que el sistema no tendrá la capacidad de guardar la puntuación en un archivo. Por lo que al salir del juego, se borrarán todos los datos de puntuación.

Modo Simulado
Al utilizar este modo, en vez de realizar el lanzamiento de forma automática, el usuario podrá ingresar manualmente los valores de cada dado en cada lanzamiento.


Reglamento del juego 
Bunco es un juego que utiliza 3 dados, y que puede ser jugado por uno o varios jugadores. 
El juego consiste en seis rondas, las cuales progresan secuencialmente del uno al seis. Cada ronda comienza con un lanzamiento de tres dados y un posterior análisis del puntaje al que equivale la tirada. 
El jugador obtendrá:
21 puntos si los tres dados coinciden con el número de la ronda que se está jugando (a esta tirada se la denomina “Bunco”).
5 puntos si los tres dados son iguales pero no coinciden con la ronda en curso.
3 puntos si la suma de los tres dados es divisible por 5.
2 puntos si los tres dados forman una escalera.
1 punto por cada dado que coincida con el número de la ronda.
Nota: De obtener más de una combinación en el mismo lanzamiento, siempre deberá sumar únicamente el puntaje de mayor valor.

Mientras el jugador obtenga algún puntaje en la tirada, podrá seguir realizando lanzamientos. Si realiza una tirada que no suma ningún puntaje, a la misma se la considerará tirada fallida.  

Finalización de cada ronda
En el modo de un jugador: cada ronda termina cuando el jugador llega a un puntaje mayor o igual a 21. Al terminar las seis rondas, se le restará al puntaje final un total de dos(1) puntos por cada tirada fallida que el jugador haya realizado.

En el modo de dos jugadores: cada ronda termina cuando uno de los jugadores obtiene un puntaje mayor o igual a 21 puntos. Si en la primera tanda de tiradas de una ronda el jugador 1 logra este puntaje sin ninguna tirada fallida, el segundo jugador puede realizar lanzamientos hasta cumplir con la condición de finalización de ronda o realizar una tirada fallida.

Ejemplo de un lanzamiento
Primer tiro, ronda 1:
⚃⚄⚅
El jugador obtuvo una escalera (vale 2 puntos) y también un tiro en el que la sumatoria de los tres dados es divisible por 5 (vale 3 puntos), por lo cual sumará 3 puntos.

Segundo tiro, ronda 1:
⚀⚁⚂
El jugador obtuvo un punto por el dado 1 y también una escalera, por lo que sumará 2 puntos, para un total acumulado de 5 hasta el momento.

Tercer tiro, ronda 1:
⚁⚁⚃
El jugador no obtuvo puntaje en esta tirada, por lo que se la considera tirada fallida y se guarda su puntaje acumulado hasta el momento (5 puntos). 
Si la partida es de 1 jugador, se le contabilizará la tirada fallida y luego proseguirá con los lanzamientos hasta llegar al puntaje preestablecido para pasar de ronda.
Si la partida es de 2 jugadores, la tirada fallida marca el fin de turno del jugador activo.
Interfaz

Durante el turno de cada jugador
Se deberá mostrar el nombre del jugador, el número de ronda, el puntaje total que lleva acumulado y la cantidad de Buncos que ha obtenido. 
Más abajo, se deberá mostrar el número de lanzamiento, listar los dados que conforman al mismo y el puntaje que le corresponde a la tirada.
TURNO DE PEPE |  RONDA N° 3  | PUNTAJE ACUMULADO: 35 PUNTOS
------------------------------------------------------------------
VECES QUE OBTUVO BUNCO: 1
------------------------------------------------------------------
LANZAMIENTO N° 1
------------------------------------------------------------------
⚂⚂⚂ Obtuviste Bunco!

***********************
| PUNTAJE DE LA RONDA: 21 |
***************************



Entre turnos
Juego de a dos jugadores
Cuando finaliza un turno y comienza el otro, se deberá mostrar una pantalla que indique a quién le corresponde el próximo turno, el número de ronda, los puntajes de ambos jugadores y la cantidad de Buncos acumulados. 



RONDA N° 3
PRÓXIMO TURNO: ABEL
-------------------------------------------
PUNTAJE PEPE: 56 PUNTOS
CANTIDAD DE BUNCOS: 2
-------------------------------------------   
PUNTAJE ABEL: 25 PUNTOS
CANTIDAD DE BUNCOS: 0






PRESIONAR UNA TECLA PARA CONTINUAR...


Juego de a un jugador
Entre ronda y ronda, el programa debe indicar el número de ronda, el nombre del jugador, el puntaje, la cantidad de Buncos, la cantidad de tiradas fallidas que lleva acumuladas y el total de lanzamientos hasta el momento.


RONDA N° 3
-------------------------------------------
PUNTAJE PEPE:56 PUNTOS
BUNCOS:2
TIRADAS FALLIDAS:3
LANZAMIENTOS:7
-------------------------------------------   





PRESIONAR UNA TECLA PARA CONTINUAR...

FIN DEL JUEGO
El juego termina al concluir las seis rondas.
Ganador
El ganador de la partida es aquel jugador que obtenga el puntaje más alto.
En caso de paridad, gana el que tenga mayor cantidad de Buncos.

Empate
Se dará un empate solamente si ambos jugadores obtienen el mismo puntaje y la misma cantidad de Buncos al finalizar las rondas.

