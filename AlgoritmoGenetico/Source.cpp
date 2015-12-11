/*Programa Que Faz Um Hello World Usando Algoritmo Genético.
Autor: Ayran Andrade Sampaio.
Início: Algum Dia Depois Do Dia 7 De Setembro De 2013.
Fim: 18 De Outubro De 2013.
IDE Utilizada: Visual Studio Express C++ 2012 Registrada.

O Que É Algoritmo Genético ?

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

Quais São Os Seus Conceitos ?

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

Como Funciona Este Programa ?

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
*/

#include <iostream>//Para Uso Normal (Cout, System("Pause"), etc.).
#include <time.h>//Para Colocar Uma Semente Dentro Da Função Rand().
#include <cstring>//Para Manipular As Strings.
using namespace std;
//Variáveis Globais.
char Individuo[100][12];//Matriz De Strings.
char ListaDePais[100][12];
//Declaração Das Funções.
void Inicia_Populacao(void);
int Avalia(char F[50]);
int Roleta(int K);
void Cruza(int F,int G,int H);
int Melhor(void);
int Soma(void);//Faz Parte Indiretamente Do Método Roleta.
void Elitismo(void);
void CompletaCruza(int F[1000],int L);
void Passa(void);
void CrossOver(void);
//Programa Principal.
int main()
{
	int A=0,B=0,C,D,E[1000];
	Inicia_Populacao();
 	Melhor();//Exibe Na Tela O Melhor Indivíduo De Toda A População.
	  for (int Y=0;Y<20000;Y++)//Contador De Gerações.
	  {
	  D=0;
	  C=Soma();//Coloca Em C, A Soma Da Nota De Todos Os Indivíduos.
	  Elitismo();
        for (int J=0;J<70;J++)//70 É A Taxa De Cruzamento Ideal.
		{
	      do
          {
	      A=Roleta(C);
	      B=Roleta(C);
          }
          while (A==B);//Os Indivíduos Que Cruzarão Devem Ser Difentes, Afinal, Como Você Vai Cruzar Com Você Mesmo ?
		E[D]=A;//Faz Parte Do Método CompletaCruza.
		E[D+1]=B;
	    Cruza(A,B,J);
		D=D+2;
		}
	  CompletaCruza(E,D);
	  Passa();
	  CrossOver();
	    if (Melhor()==11)//Se Eu Achar O Indivíduo Perfeito, Eu Paro O Programa.
	    {
		cout << Y << " Geracaoes Foram Necessarias Para Chegar No Resultado." << endl;
  		break;
        }
	  }
	system("Pause");
}
//Corpo Das Funções.
void CrossOver(void)//Mudo Aleatoriamente Algum Caracter.
{//No Vetor Indivíduo, O Segundo Índice, Na Posição 11, Foi Declarado Como '\0'.
  switch (rand()%27)
  {
  case 0: Individuo[rand()%100][rand()%11]=' ';break;
  case 1: Individuo[rand()%100][rand()%11]='a';break;
  case 2: Individuo[rand()%100][rand()%11]='b';break;
  case 3: Individuo[rand()%100][rand()%11]='c';break;
  case 4: Individuo[rand()%100][rand()%11]='d';break;
  case 5: Individuo[rand()%100][rand()%11]='e';break;
  case 6: Individuo[rand()%100][rand()%11]='f';break;
  case 7: Individuo[rand()%100][rand()%11]='g';break;
  case 8: Individuo[rand()%100][rand()%11]='h';break;
  case 9: Individuo[rand()%100][rand()%11]='i';break;
  case 10: Individuo[rand()%100][rand()%11]='j';break;
  case 11: Individuo[rand()%100][rand()%11]='k';break;
  case 12: Individuo[rand()%100][rand()%11]='l';break;
  case 13: Individuo[rand()%100][rand()%11]='m';break;
  case 14: Individuo[rand()%100][rand()%11]='n';break;
  case 15: Individuo[rand()%100][rand()%11]='o';break;
  case 16: Individuo[rand()%100][rand()%11]='p';break;
  case 17: Individuo[rand()%100][rand()%11]='q';break;
  case 18: Individuo[rand()%100][rand()%11]='r';break;
  case 19: Individuo[rand()%100][rand()%11]='s';break;
  case 20: Individuo[rand()%100][rand()%11]='t';break;
  case 21: Individuo[rand()%100][rand()%11]='u';break;
  case 22: Individuo[rand()%100][rand()%11]='v';break;
  case 23: Individuo[rand()%100][rand()%11]='w';break;
  case 24: Individuo[rand()%100][rand()%11]='x';break;
  case 25: Individuo[rand()%100][rand()%11]='y';break;
  case 26: Individuo[rand()%100][rand()%11]='z';break;
  }
}

void Passa(void)
{
  for (int J=0;J<100;J++)
  {
  strcpy_s(Individuo[J],ListaDePais[J]);//Copio Tudo De Uma String Para A Outra.
  }
}

void CompletaCruza(int F[1000],int L)
{
int H=0,Qt[1000],M=0;
for (int G=0;G<=L-2;G++)
  {
    for (int J=G+1;J<=L-1;J++)
    {
      if (F[G]>F[J])//Sim, Isto É O Booble Sorte Que O Professor Rafael Passou !
      {
      H=F[G];
      F[G]=F[J];
      F[J]=H;
      }
    }
  }
H=0;
  for (int I=0;I<L-1;I++)
  {
    if (F[I]!=F[I-1] && I!=0)
	{
      for (int J=F[I-1]+1;J<F[I];J++)//Vejo Quais Strings Ainda Não Tiveram Um Filho.
	  {
	  Qt[H]=J;
	  H++;
	  }
	}
  }
  if (H>=23)//Se Tiver Mais Do Que 23 Caras Que Não Tiveram Filho, Eu Faço Isto.
  {
    for (int G=76;G<100;G++)
    {
    strcpy_s(ListaDePais[G],Individuo[Qt[M]]);
	M++;
    }
  }
  else if (H<23)//Se Tiver Menos, Então Eu Faço Isto.
  {
  M=76;
    for (int G=0;G<24;G++)
	{
    strcpy_s(ListaDePais[M],Individuo[G]);
	M++;
	}
  }
}

void Inicia_Populacao(void)
{
srand((unsigned int)time((time_t*)NULL));//Conhecia Outro Jeito De Fazer Isso, Mas, Esta Aqui Eu Peguei Da Internet.
  for (int J=0;J<100;J++)
  {
    for (int H=0;H<11;H++)
    {
      switch (rand()%27)
      {
      case 0: Individuo[J][H]=' ';break;
      case 1: Individuo[J][H]='a';break;
      case 2: Individuo[J][H]='b';break;
      case 3: Individuo[J][H]='c';break;
      case 4: Individuo[J][H]='d';break;
      case 5: Individuo[J][H]='e';break;
      case 6: Individuo[J][H]='f';break;
      case 7: Individuo[J][H]='g';break;
      case 8: Individuo[J][H]='h';break;
      case 9: Individuo[J][H]='i';break;
      case 10: Individuo[J][H]='j';break;
      case 11: Individuo[J][H]='k';break;
      case 12: Individuo[J][H]='l';break;
      case 13: Individuo[J][H]='m';break;
      case 14: Individuo[J][H]='n';break;
      case 15: Individuo[J][H]='o';break;
      case 16: Individuo[J][H]='p';break;
      case 17: Individuo[J][H]='q';break;
      case 18: Individuo[J][H]='r';break;
      case 19: Individuo[J][H]='s';break;
      case 20: Individuo[J][H]='t';break;
      case 21: Individuo[J][H]='u';break;
      case 22: Individuo[J][H]='v';break;
      case 23: Individuo[J][H]='w';break;
      case 24: Individuo[J][H]='x';break;
      case 25: Individuo[J][H]='y';break;
      case 26: Individuo[J][H]='z';break;
      }
    }
  Individuo[J][11]='\0';//Se Eu Não Colocasse Esta Linha, Dava Uma Série De Problemas No Programa.
  }
}

int Avalia(char F[12])
{
char Comp[12];
int G=0;
strcpy_s(Comp,"hello world");//Só Nesta Linha É Que Eu Falo Qual É O Problema A Ser Resolvido:
  for (int H=0;H<11;H++)//Achar Uma String Que Seja Igual A "hello world".
  {
    if (Comp[H]==F[H])
	{
	G++;
	}
  }
return G;//Retorna A Nota Do Indivíduo.
}

int Soma(void)
{
int ST=0;
  for(int J=0;J<100;J++)
  {
  ST=ST+Avalia(Individuo[J]);
  }
return ST;
}

void Elitismo(void)
{
int I[100],Aux,K=95;
  for (int J=0;J<100;J++)
  {
  I[J]=Avalia(Individuo[J]);
  }
  for (int L=0;L<=98;L++)//Booble Sorte Para Organizar As Maiores Notas No Final Do Vetor I.
  {
    for (int J=L+1;J<=99;J++)
    {
      if (I[L]>I[J])
      {
      Aux=I[L];
      I[L]=I[J];
      I[J]=Aux;
      }
	}
  }
  for (int L=0;L<5;L++)//5 É A Taxa De Elitismo Ideal.
  {
    for (int J=0;J<100;J++)
    {
      if (I[K]==Avalia(Individuo[J]) && strcmp(Individuo[J],ListaDePais[0])!=0 && strcmp(Individuo[J],ListaDePais[1])!=0 && strcmp(Individuo[J],ListaDePais[2])!=0 && strcmp(Individuo[J],ListaDePais[3])!=0 && strcmp(Individuo[J],ListaDePais[4])!=0)
	  {
      strcpy_s(ListaDePais[L],Individuo[J]);
	  K++;
	  break;
	  }
    }
  }
}

int Roleta(int K)
{//Não Pode Plantar A Semente Aleatória Senão O Algoritmo Fica Realmente Muito Lento.
int M=rand()%K,L=0;
  for (int I=0;I<100;I++)
  {
  L=L+Avalia(Individuo[I]);
    if (M<L)
	{
	return I;//Quando Chega Num Return, A Função Acaba, Nada Depois É Executado.
	}
  }
}

void Cruza(int F,int G,int H)
{//Não Pode Plantar A Semente Aleatória Senão Os Números Sorteados Se Tornam Iguais.
int I;
char Aux[12];
  do
  {
  I=rand()%11;//Ponto De Corte Onde A String Mãe E A Pai Serão Misturadas, Gerando Dois Filhos.
  }
  while(I==0);//Se A For Igual A 0, Os Filhos Serão Exatamente Iguais Ao Pais.
strcpy_s(ListaDePais[H+5],Individuo[F]);
strcpy_s(ListaDePais[H+6],Individuo[G]);
  for(int K=0;K<=I;K++)
  {
  Aux[K]=ListaDePais[H+5][K];
  ListaDePais[H+5][K]=ListaDePais[H+6][K];
  ListaDePais[H+6][K]=Aux[K];
  }
}

int Melhor(void)
{
int Max=-1,I;
  for(int K=0;K<100;K++)
  {
    if (Avalia(Individuo[K])>Max)
	{
	Max=Avalia(Individuo[K]);
	I=K;
	}
  }
cout << "Best: " << Individuo[I] << " (" << Max << ")" << endl;
return Max;//Retorna A Melhor Nota Da String.
}
