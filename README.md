# Objetivo e funcionamento básico

Este é um programa feito por mim em C++ com o objetivo de estudar uma técninca em específico de inteligência artificial: O algoritmo genético.

No começo são geradas aleatoriamente 100 Strings com 12 caracteres aleatórios cada. Por que 12 caracteres? Porque a "Hello world" possui 11, mais o caracter final '\0'.

Cada uma destas 100 Strings serão chamadas "Indivíduo". O objetivo do programa é selecionar o indivíduo mais apto. Quanto mais o indivíduo for parecido com a String "Hello World", mais apto o indivíduo é considerado.

A cada loop do For, cada String tem a sua semelhança com "Hello World" avaliada. Os indivíduos mais aptos sobrevivem ao loop, enquanto os mais fracos são substituídos por "cruzamentos" entre os mais aptos. Notaram a semelhança com a teoria da evolução de Charles Darwin?

O for termina quando surgir uma String que for idêntica a "Hello World", ou forem atingidas 20.000 gerações, ou loops do for.

Segue abaixo um screenshot do programa. Na tela é mostrado o indivíduo mais apto, e a sua respectiva "nota", um número que representa o quanto aquela String é parecida com "Hello World". Lembrando que a nota máxima é 11 (O porquê foi dado no segundo parágrafo).

![alt tag](http://i63.tinypic.com/11w8312.jpg)

# Como executar este programa?
 
No link https://github.com/AyranAndrade/Hello-World-Algoritmo-Genetico existe um arquivo executável. É só baixar e executar. Aos mais desconfiados, aos quais eu entendo perfeitamente, podem baixar o código-fonte no link https://github.com/AyranAndrade/Hello-World-Algoritmo-Genetico/blob/master/AlgoritmoGenetico/Source.cpp e compilá-lo no seu Visual Studio. Nenhuma biblioteca de terceiro é requisitada, ou configuração extra é exigida.
Você também pode baixar o projeto como um todo, abrir e compilar no seu Visual Studio.

# O antigo "readme" deste programa.

Programa Que Faz Um Hello World Usando Algoritmo Genético.
Autor: Ayran Andrade Sampaio.
Início: Algum Dia Depois Do Dia 7 De Setembro De 2013.
Fim: 18 De Outubro De 2013.
IDE Utilizada: Visual Studio Express C++ 2012 Registrada.

# O Que É Algoritmo Genético ?

Algoritmo genético é uma forma de programar onde, fazendo pequenas alterações no código, você pode resolver uma
enorme diversidade de problemas. Todos os seus conceitos são baseados na biologia, com ênfase na teoria da evolução,
de Charles Darwin (Mestre !). Você tem uma população que acasala, gerando filhos cada vez mais adaptados aos
problemas, até que surja um filho que seja capaz de resolver o problema.
Imagine que você tem uma população onde cada indivíduo representa uma solução para um determinado problema. Estas
soluções não são perfeitas, mas, se você for cruzando as soluções, isto é, pegando um pedaço de uma e colando na
outra, depois de um tempo, você consegue colar os melhores pedaços das melhores soluções formando uma solução
perfeita, ou quase, que resolva o seu problema.
Você pode resolver vários problemas diferentes com algoritmo genético, já que é um algoritmo usado para procurar
alguma coisa. Portanto, sempre que o seu programa precisar procurar alguma coisa, ele pode utilizar este algoritmo.
No caso deste programa em específico, eu procuro 1 string no meio de outras 99, que contenha a frase "hello world".
No caso do TCC da New Vision, procuramos em um arquivo de texto o COO, a Data, o Valor e o CNPJ. Então, acredito
que o algoritmo genético possa vir a ser útil para realizar esta procura.
Dentro de algoritmo genético, é tudo feito de forma aleatória. Logo, a função rand() que gera números aleatórios
em C e C++ será usada por diversas vezes neste código. Também devo dizer que aqui os indivíduos da população são
representados em forma de string. Existem várias formas de se fazer esta representação, sem usar string. Mas elas,
em geral, são muito complexas. Por isso, decidi usar strings.

# Quais São Os Seus Conceitos ?

Bem, primeiro há o conceito de avaliação (fitness, em inglês). Pense: tenho uma população de soluções para um
problema, mas como posso dizer se uma solução é melhor do que a outra ? Preciso avaliar cada solução e dar uma
nota pra ela !
Também há o conceito de início de uma população (Initialize Population, em inglês). Você tem uma população inicial de 
soluções onde estas são cruzadas até achar uma que resolva completamente o problema... Mas, da onde vai surgir a
população inicial ? Esta é a ideia: a primeira coisa que se deve fazer neste código é criar uma população inicial
que TEM que ser alaeatória. Afinal, numa população de seres humanos, por exemplo, você não escolhe como vão ser as
pessoas geneticamente falando (os genes delas). Elas apenas estão ali, e você deve cruzá-las em busca da pessoa
melhor adaptada ao ambiente (teoria da evolução). Aqui, neste algoritmo, deve ser a mesma coisa, afinal, este
algoritmo tenta imitar ao máximo a vida, a forma como as populações animais se acasalam e geram filhotes,
perpetuando a espécie.
Obviamente, também há o conceito de reprodução ou cruzamento (Cross Over, em inglês). No mundo real, dois animais se
acasalam e um pouquinho de características de um e do outro (os genes) são transportadas para o filhote.
Aqui é a mesma coisa: você pega um ponto aleatório e do começo da string até antes deste ponto, você copia da
string pai para a mãe. Depois deste ponto até o final da string (vale lembrar que todas as strings tem o mesmo
tamanho), você copia da string mãe para a string pai, gerando dois filhos, um com o começo da string pai e o final
da string mãe, e o outro com o começo da string mãe e o final da string pai. Por que dois filhos ? Porque se for
um filho, conforme um casal (obviamente de dois) gera um filho, a população vai caindo pela metade. Por exemplo:
você tem duas pessoas que se reproduzem e geram um filho. Quando os pais morrerem, só haverá uma pessoa (o filho) e 
não mais duas pessoas, como antes. No algoritmo genético, isto é um problema, pois, quando houver somente um
indivíduo, ele vai acasalar com quem ? Consigo mesmo ? Lógico que não ! O ser humano não consegue ter um filho
sozinho sem a mínima participação do sexo oposto. Só pra ressaltar: eu usei os termos "string pai" e "string mãe"
apenas para melhor entendimento do assunto. Não quer dizer que as strings aqui neste programa tenham sexo. kkkkk.
Não podemos decidir qual pai vai ficar com qual mãe. Isto, no mundo real, é praticamente impossível de se prever.
Por isso, no algoritmo genético selecionamos aleatoriamente os pais. Quer dizer, nem tão aleatório assim...
Pense: segundo a teoria da evolução, um pai mais saudável tem mais chances de gerar um descendente do que um pai
doente ou com algum outro problema, certo ? Então, aqui temos a ROLETA, onde de uma forma lógica que eu até hoje não
entendi direito, você seleciona de forma aleatória os pais, mas dando mais chances pros pais saudáveis, ou seja,
os que melhor avaliação tem. É como se o pai mais saudável tivesse 50% de chance de ser selecionado, enquanto
outros menos saudáveis tem 20% de chance, 12%, 25%, 5%... O pai que tem 5% de chance pode ser selecionado, mas as
suas chances são bem menores do que o pai que tem 50% de chance de ser selecionado para acasalar, entenderam ? Assim,
você seleciona os pais para acasalarem. Alguns que não acasalarem, morrerão, isto é, vestirão palitó de madeira,
ééééééé, quer dizer, serão sobrescritos por strings com avaliações melhores.
Aí você fala: "Poxa vida, hein, então quer dizer que um indivíduo com excelente nota pode morrer ? Wow". Não, pois
existe um negócio chamado elitismo (elitism, em inglês), ou seja, os indivíduos com melhores notas não serão
sobrescritos. Os melhores indivíduos sobreviverão até a próxima geração. Simples assim, não ?
Para completar, há o conceito de geração e mutação (geration e mutation, respectivamente, em inglês). Na biologia,
quando ocorre um cruzamento entre animais, as vezes algum gene que não deveria ser trocado, o é, fugindo do padrão.
Este gene trocado é aleatório e previne que os filhos, depois de um tempo, fiquem exatamente iguais. É sério,
existe isso mesmo dentro da biologia. Aqui, não poderia ser diferente, implantamos este conceito para prevenir
que depois de um tempo as strings filhas sejam exatamente iguais aos pais. E geração é a mesma coisa do mundo real:
Temos pais, que geram filhos, que viram pais e geram outros filhos (netos dos primeiros pais). São 3 gerações
passadas (a dos primeiro pais, a dos filhos que viraram pais e a dos filhos que não viraram pais ainda). Aqui,
também: iniciamos a população, fazemos o elitismo, fazemos a roleta, cruzamos os pais e fazemos a mutação. Aqui,
temos 1 geração. Iniciamos tudo de novo, e quando terminarmos, teremos 2 gerações, e assim sucessivamente.

# Como Funciona Este Programa ?

Temos tudo dentro de um for que vai até 20000, um número grande e aleatório, podia ser 10000, 100000, etc.
Primeiro faço o elitismo, copiando da string Indivíduo para a string ListaDePais, que vai ser usada para guardar
as strings que vão sobreviver para a próxima geração. Ele copia as 5 melhores strings segundo a sua nota
(dada conforme o seu grau de semelhança com a frase "hello world"), porque 5% é uma taxa boa de elitismo. Isto é,
numa população com total de 100 indivíduos (como é o caso aqui), 5 são passados para a próxima fase. Depos, eu
seleciono 70 casais (70% é uma boa taxa de cruzamento, segundo a internet) segundo a roleta que faz aquilo que
já foi explicado acima. Depos de selecionados os 70 casais que, neste ponto, já geraram 70 filhos, tenho a função 
CompletaCruza. É que eu tinha 5 string trazidas pelo elitismo, mais 70 filhos, totalizando 75 filhos para a
próxima geração. Precisava colocar mais 25 filhos na próxima geração. Na internet, foi me dito que era uma
boa você preencher estas vagas que faltam com as strings que não foram selecionadas para cruzar, ou seja, os
caras que ainda não tiveram filhos, que não estavam na lista de 70 casais. Daí, surgiu esta função, onde eu
coloco na próxima geração os 25 caras que ainda não copularam. Em seguida, vem o método Passa, onde após ter
a string ListaDePais completamente preenchida pelos caras que vão sobreviver para a próxima geração, eu copio todo
mundo de novo para a string Individuo, da onde vai começar o ciclo todo de novo. Tem o método CrossOver, que faz
a mutação dos indivíduos. Mas, Ayran, Cross Over é o nome do cruzamento e não da mutação ! É, eu sei, mas eu decidi
colocar este nome porque... sei lá, porque eu fiz isso.
