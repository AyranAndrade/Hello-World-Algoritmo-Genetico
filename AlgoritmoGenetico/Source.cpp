/*Programa Que Faz Um Hello World Usando Algoritmo Gen�tico.
Autor: Ayran Andrade Sampaio.
In�cio: Algum Dia Depois Do Dia 7 De Setembro De 2013.
Fim: 18 De Outubro De 2013.
IDE Utilizada: Visual Studio Express C++ 2012 Registrada.

O Que � Algoritmo Gen�tico ?

Algoritmo gen�tico � uma forma de programar onde, fazendo pequenas altera��es no c�digo, voc� pode resolver uma
enorme diversidade de problemas. Todos os seus conceitos s�o baseados na biologia, com �nfase na teoria da evolu��o,
de Charles Darwin (Mestre !). Voc� tem uma popula��o que acasala, gerando filhos cada vez mais adaptados aos
problemas, at� que surja um filho que seja capaz de resolver o problema.
Imagine que voc� tem uma popula��o onde cada indiv�duo representa uma solu��o para um determinado problema. Estas
solu��es n�o s�o perfeitas, mas, se voc� for cruzando as solu��es, isto �, pegando um peda�o de uma e colando na
outra, depois de um tempo, voc� consegue colar os melhores peda�os das melhores solu��es formando uma solu��o
perfeita, ou quase, que resolva o seu problema.
Voc� pode resolver v�rios problemas diferentes com algoritmo gen�tico, j� que � um algoritmo usado para procurar
alguma coisa. Portanto, sempre que o seu programa precisar procurar alguma coisa, ele pode utilizar este algoritmo.
No caso deste programa em espec�fico, eu procuro 1 string no meio de outras 99, que contenha a frase "hello world".
No caso do TCC da New Vision, procuramos em um arquivo de texto o COO, a Data, o Valor e o CNPJ. Ent�o, acredito
que o algoritmo gen�tico possa vir a ser �til para realizar esta procura.
Dentro de algoritmo gen�tico, � tudo feito de forma aleat�ria. Logo, a fun��o rand() que gera n�meros aleat�rios
em C e C++ ser� usada por diversas vezes neste c�digo. Tamb�m devo dizer que aqui os indiv�duos da popula��o s�o
representados em forma de string. Existem v�rias formas de se fazer esta representa��o, sem usar string. Mas elas,
em geral, s�o muito complexas. Por isso, decidi usar strings.

Quais S�o Os Seus Conceitos ?

Bem, primeiro h� o conceito de avalia��o (fitness, em ingl�s). Pense: tenho uma popula��o de solu��es para um
problema, mas como posso dizer se uma solu��o � melhor do que a outra ? Preciso avaliar cada solu��o e dar uma
nota pra ela !
Tamb�m h� o conceito de in�cio de uma popula��o (Initialize Population, em ingl�s). Voc� tem uma popula��o inicial de 
solu��es onde estas s�o cruzadas at� achar uma que resolva completamente o problema... Mas, da onde vai surgir a
popula��o inicial ? Esta � a ideia: a primeira coisa que se deve fazer neste c�digo � criar uma popula��o inicial
que TEM que ser alaeat�ria. Afinal, numa popula��o de seres humanos, por exemplo, voc� n�o escolhe como v�o ser as
pessoas geneticamente falando (os genes delas). Elas apenas est�o ali, e voc� deve cruz�-las em busca da pessoa
melhor adaptada ao ambiente (teoria da evolu��o). Aqui, neste algoritmo, deve ser a mesma coisa, afinal, este
algoritmo tenta imitar ao m�ximo a vida, a forma como as popula��es animais se acasalam e geram filhotes,
perpetuando a esp�cie.
Obviamente, tamb�m h� o conceito de reprodu��o ou cruzamento (Cross Over, em ingl�s). No mundo real, dois animais se
acasalam e um pouquinho de caracter�sticas de um e do outro (os genes) s�o transportadas para o filhote.
Aqui � a mesma coisa: voc� pega um ponto aleat�rio e do come�o da string at� antes deste ponto, voc� copia da
string pai para a m�e. Depois deste ponto at� o final da string (vale lembrar que todas as strings tem o mesmo
tamanho), voc� copia da string m�e para a string pai, gerando dois filhos, um com o come�o da string pai e o final
da string m�e, e o outro com o come�o da string m�e e o final da string pai. Por que dois filhos ? Porque se for
um filho, conforme um casal (obviamente de dois) gera um filho, a popula��o vai caindo pela metade. Por exemplo:
voc� tem duas pessoas que se reproduzem e geram um filho. Quando os pais morrerem, s� haver� uma pessoa (o filho) e 
n�o mais duas pessoas, como antes. No algoritmo gen�tico, isto � um problema, pois, quando houver somente um
indiv�duo, ele vai acasalar com quem ? Consigo mesmo ? L�gico que n�o ! O ser humano n�o consegue ter um filho
sozinho sem a m�nima participa��o do sexo oposto. S� pra ressaltar: eu usei os termos "string pai" e "string m�e"
apenas para melhor entendimento do assunto. N�o quer dizer que as strings aqui neste programa tenham sexo. kkkkk.
N�o podemos decidir qual pai vai ficar com qual m�e. Isto, no mundo real, � praticamente imposs�vel de se prever.
Por isso, no algoritmo gen�tico selecionamos aleatoriamente os pais. Quer dizer, nem t�o aleat�rio assim...
Pense: segundo a teoria da evolu��o, um pai mais saud�vel tem mais chances de gerar um descendente do que um pai
doente ou com algum outro problema, certo ? Ent�o, aqui temos a ROLETA, onde de uma forma l�gica que eu at� hoje n�o
entendi direito, voc� seleciona de forma aleat�ria os pais, mas dando mais chances pros pais saud�veis, ou seja,
os que melhor avalia��o tem. � como se o pai mais saud�vel tivesse 50% de chance de ser selecionado, enquanto
outros menos saud�veis tem 20% de chance, 12%, 25%, 5%... O pai que tem 5% de chance pode ser selecionado, mas as
suas chances s�o bem menores do que o pai que tem 50% de chance de ser selecionado para acasalar, entenderam ? Assim,
voc� seleciona os pais para acasalarem. Alguns que n�o acasalarem, morrer�o, isto �, vestir�o palit� de madeira,
�������, quer dizer, ser�o sobrescritos por strings com avalia��es melhores.
A� voc� fala: "Poxa vida, hein, ent�o quer dizer que um indiv�duo com excelente nota pode morrer ? Wow". N�o, pois
existe um neg�cio chamado elitismo (elitism, em ingl�s), ou seja, os indiv�duos com melhores notas n�o ser�o
sobrescritos. Os melhores indiv�duos sobreviver�o at� a pr�xima gera��o. Simples assim, n�o ?
Para completar, h� o conceito de gera��o e muta��o (geration e mutation, respectivamente, em ingl�s). Na biologia,
quando ocorre um cruzamento entre animais, as vezes algum gene que n�o deveria ser trocado, o �, fugindo do padr�o.
Este gene trocado � aleat�rio e previne que os filhos, depois de um tempo, fiquem exatamente iguais. � s�rio,
existe isso mesmo dentro da biologia. Aqui, n�o poderia ser diferente, implantamos este conceito para prevenir
que depois de um tempo as strings filhas sejam exatamente iguais aos pais. E gera��o � a mesma coisa do mundo real:
Temos pais, que geram filhos, que viram pais e geram outros filhos (netos dos primeiros pais). S�o 3 gera��es
passadas (a dos primeiro pais, a dos filhos que viraram pais e a dos filhos que n�o viraram pais ainda). Aqui,
tamb�m: iniciamos a popula��o, fazemos o elitismo, fazemos a roleta, cruzamos os pais e fazemos a muta��o. Aqui,
temos 1 gera��o. Iniciamos tudo de novo, e quando terminarmos, teremos 2 gera��es, e assim sucessivamente.

Como Funciona Este Programa ?

Temos tudo dentro de um for que vai at� 20000, um n�mero grande e aleat�rio, podia ser 10000, 100000, etc.
Primeiro fa�o o elitismo, copiando da string Indiv�duo para a string ListaDePais, que vai ser usada para guardar
as strings que v�o sobreviver para a pr�xima gera��o. Ele copia as 5 melhores strings segundo a sua nota
(dada conforme o seu grau de semelhan�a com a frase "hello world"), porque 5% � uma taxa boa de elitismo. Isto �,
numa popula��o com total de 100 indiv�duos (como � o caso aqui), 5 s�o passados para a pr�xima fase. Depos, eu
seleciono 70 casais (70% � uma boa taxa de cruzamento, segundo a internet) segundo a roleta que faz aquilo que
j� foi explicado acima. Depos de selecionados os 70 casais que, neste ponto, j� geraram 70 filhos, tenho a fun��o 
CompletaCruza. � que eu tinha 5 string trazidas pelo elitismo, mais 70 filhos, totalizando 75 filhos para a
pr�xima gera��o. Precisava colocar mais 25 filhos na pr�xima gera��o. Na internet, foi me dito que era uma
boa voc� preencher estas vagas que faltam com as strings que n�o foram selecionadas para cruzar, ou seja, os
caras que ainda n�o tiveram filhos, que n�o estavam na lista de 70 casais. Da�, surgiu esta fun��o, onde eu
coloco na pr�xima gera��o os 25 caras que ainda n�o copularam. Em seguida, vem o m�todo Passa, onde ap�s ter
a string ListaDePais completamente preenchida pelos caras que v�o sobreviver para a pr�xima gera��o, eu copio todo
mundo de novo para a string Individuo, da onde vai come�ar o ciclo todo de novo. Tem o m�todo CrossOver, que faz
a muta��o dos indiv�duos. Mas, Ayran, Cross Over � o nome do cruzamento e n�o da muta��o ! �, eu sei, mas eu decidi
colocar este nome porque... sei l�, porque eu fiz isso.
*/

#include <iostream>//Para Uso Normal (Cout, System("Pause"), etc.).
#include <time.h>//Para Colocar Uma Semente Dentro Da Fun��o Rand().
#include <cstring>//Para Manipular As Strings.
using namespace std;
//Vari�veis Globais.
char Individuo[100][12];//Matriz De Strings.
char ListaDePais[100][12];
//Declara��o Das Fun��es.
void Inicia_Populacao(void);
int Avalia(char F[50]);
int Roleta(int K);
void Cruza(int F,int G,int H);
int Melhor(void);
int Soma(void);//Faz Parte Indiretamente Do M�todo Roleta.
void Elitismo(void);
void CompletaCruza(int F[1000],int L);
void Passa(void);
void CrossOver(void);
//Programa Principal.
int main()
{
	int A=0,B=0,C,D,E[1000];
	Inicia_Populacao();
 	Melhor();//Exibe Na Tela O Melhor Indiv�duo De Toda A Popula��o.
	  for (int Y=0;Y<20000;Y++)//Contador De Gera��es.
	  {
	  D=0;
	  C=Soma();//Coloca Em C, A Soma Da Nota De Todos Os Indiv�duos.
	  Elitismo();
        for (int J=0;J<70;J++)//70 � A Taxa De Cruzamento Ideal.
		{
	      do
          {
	      A=Roleta(C);
	      B=Roleta(C);
          }
          while (A==B);//Os Indiv�duos Que Cruzar�o Devem Ser Difentes, Afinal, Como Voc� Vai Cruzar Com Voc� Mesmo ?
		E[D]=A;//Faz Parte Do M�todo CompletaCruza.
		E[D+1]=B;
	    Cruza(A,B,J);
		D=D+2;
		}
	  CompletaCruza(E,D);
	  Passa();
	  CrossOver();
	    if (Melhor()==11)//Se Eu Achar O Indiv�duo Perfeito, Eu Paro O Programa.
	    {
		cout << Y << " Geracaoes Foram Necessarias Para Chegar No Resultado." << endl;
  		break;
        }
	  }
	system("Pause");
}
//Corpo Das Fun��es.
void CrossOver(void)//Mudo Aleatoriamente Algum Caracter.
{//No Vetor Indiv�duo, O Segundo �ndice, Na Posi��o 11, Foi Declarado Como '\0'.
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
      if (F[G]>F[J])//Sim, Isto � O Booble Sorte Que O Professor Rafael Passou !
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
      for (int J=F[I-1]+1;J<F[I];J++)//Vejo Quais Strings Ainda N�o Tiveram Um Filho.
	  {
	  Qt[H]=J;
	  H++;
	  }
	}
  }
  if (H>=23)//Se Tiver Mais Do Que 23 Caras Que N�o Tiveram Filho, Eu Fa�o Isto.
  {
    for (int G=76;G<100;G++)
    {
    strcpy_s(ListaDePais[G],Individuo[Qt[M]]);
	M++;
    }
  }
  else if (H<23)//Se Tiver Menos, Ent�o Eu Fa�o Isto.
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
  Individuo[J][11]='\0';//Se Eu N�o Colocasse Esta Linha, Dava Uma S�rie De Problemas No Programa.
  }
}

int Avalia(char F[12])
{
char Comp[12];
int G=0;
strcpy_s(Comp,"hello world");//S� Nesta Linha � Que Eu Falo Qual � O Problema A Ser Resolvido:
  for (int H=0;H<11;H++)//Achar Uma String Que Seja Igual A "hello world".
  {
    if (Comp[H]==F[H])
	{
	G++;
	}
  }
return G;//Retorna A Nota Do Indiv�duo.
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
  for (int L=0;L<5;L++)//5 � A Taxa De Elitismo Ideal.
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
{//N�o Pode Plantar A Semente Aleat�ria Sen�o O Algoritmo Fica Realmente Muito Lento.
int M=rand()%K,L=0;
  for (int I=0;I<100;I++)
  {
  L=L+Avalia(Individuo[I]);
    if (M<L)
	{
	return I;//Quando Chega Num Return, A Fun��o Acaba, Nada Depois � Executado.
	}
  }
}

void Cruza(int F,int G,int H)
{//N�o Pode Plantar A Semente Aleat�ria Sen�o Os N�meros Sorteados Se Tornam Iguais.
int I;
char Aux[12];
  do
  {
  I=rand()%11;//Ponto De Corte Onde A String M�e E A Pai Ser�o Misturadas, Gerando Dois Filhos.
  }
  while(I==0);//Se A For Igual A 0, Os Filhos Ser�o Exatamente Iguais Ao Pais.
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
