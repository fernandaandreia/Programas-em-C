#include <iostream>
using namespace std;
//calculo media
int main ()
{float num, soma=0, media; int i;
cout<<"\n Esse programa ..";
for (i=0; i<10;i++)
{cout <<"\nInforme n int positivo, 0 fim do programa:";
cin>>num;
if (num==0) break;
while (num<0)
{cout<<"\nNo invalido. Informe novamente: ";
cin>>num;}
soma=soma+num;
}// fim for
if (i==0) cout<<"\nNao ha dados";
else
{media=soma/i;
cout<<"\nMedia "<<media;
}
system("pause");
return 0;
}
