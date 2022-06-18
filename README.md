# Sanadores

Esta es la soulcion al problema del año 2021, nivel 1 "Sanando Luchadores" http://www.oia.unsam.edu.ar/problemas-categoria-programacion/

Descripción del problema:
Shining Force es un videojuego de
fantasía de tipo RPG táctico, lanzado por
primera vez en 1992.
Durante el transcurso del juego ocurren
batallas entre las fuerzas del mal y un
grupo de valientes luchadores liderados
por el jugador. Cada luchador posee al
comenzar la batalla una cierta cantidad de
puntos de vida y de puntos de magia. A
medida que los luchadores son golpeados
por el enemigo pierden puntos de vida, y
a medida que utilizan habilidades mágicas
consumen sus puntos de magia.
Los luchadores se dividen en diferentes
clases de acuerdo a sus habilidades: hay
espadachines agresivos, poderosas hechiceras, arqueras élficas, enanos robutos con grandes hachas, hombres pájaro
y muchas clases más de luchadores.
Una de las clases más importantes en
el juego es la clase de los sanadores. Los
sanadores son personajes que tienen la
capacidad especial de sanar a otros luchadores, haciendo que recuperen puntos de vida perdidos durante el combate.
Cada vez que se utiliza esta capacidad
especial, se consumen puntos de magia
del sanador.
En este problema, tienes a tu disposición un sanador con las siguientes
capacidades:
1. Consumiendo 3 puntos de magia,
se recuperan hasta un máximo de
10 puntos de vida de un luchador
elegido, que esté a distancia 1 del
sanador
2. Consumiendo 5 puntos de magia,
se recuperan hasta un máximo de
10 puntos de vida de un luchador
elegido, que esté a distancia 1 o 2
del sanador

Nunca está permitido que un luchador
alcance más puntos de vida que los que
tenía al comenzar la batalla, sin importar
cuántas veces sea sanado.
Debes implementar una función que,
sabiendo la cantidad de puntos de magia
de un sanador y los puntos de vida actuales e iniciales de cada uno de n luchadores, así como su distancia al sanador,
determine la máxima cantidad posible de
puntos de vida que es posible recuperar
en total.
