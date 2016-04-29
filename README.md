# Objetivo e funcionamento básico
Este é um programa feito por mim em C++ com o objetivo de estudar uma técninca em específico de inteligência artificial: O algoritmo genético.
No começo são geradas aleatoriamente 100 Strings com 12 caracteres aleatórios cada. Por que 12 caracteres? Porque a "Hello world" possui 11, mais o caracter final '\0'.
Cada uma destas 100 Strings serão chamadas "Indivíduo". O objetivo do programa é selecionar o indivíduo mais apto. Quanto mais o indivíduo for parecido com a String "Hello World", mais apto o indivíduo é considerado.
A cada loop do For, cada String tem a sua semelhança com "Hello World" avaliada. Os indivíduos mais aptos sobrevivem ao loop, enquanto os mais fracos são substituídos por "cruzamentos" entre os mais aptos. Notaram a semelhança com a teoria da evolução de Charles Darwin?
O for termina quando surgir uma String que for idêntica a "Hello World", ou forem atingidas 20.000 gerações, ou loops do for.

![alt tag](http://i63.tinypic.com/11w8312.jpg)
