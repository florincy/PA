#include <stdio.h>
#include <locale.h>
int n,b,i;
float r, t, bb,tt,ttt,s=0;
int main() {
    int op =1;
	setlocale (LC_ALL,"");
	printf ("Progama de P.A.\nOlá, esse progama permite que você monte sua P.A. e, a partir disso, descubra valores de termos da P.A. montada e a soma dos termos da P.A.\n");
	printf("Montando a P.A...\nDigite a razão.\n");
	scanf ("%f",&r);
	printf ("Digite o termo inicial.\n");
	scanf ("%f",&t);
	printf ("Digite a quantidade de termos da P.A.\n");
	scanf ("%d",&n);

	while (op!=0){
	printf ("\nDescobrir o valor de um termo da P.A. -------------- 1\nDescobrir a soma dos termos da P.A. ------- 2\nSair --------------------------------------------- 0\n");
	scanf ("%d",&op);
	switch (op){
	case 0:
	("Obrigada pela preferência.\n");
	break;
	case 1:
	printf("Você quer descobrir o valor de a__:\n\n");
	scanf ("%d",&b);
	if (b>n||b<=0){
	printf ("a%d não existe\n",b);
	}
	else if(b==1){
    printf ("a%d é %f", b,t);
	}
	else{
    bb = (float)b;
	tt = t + (bb-1)*r;
	 printf ("a%d é %f", b,tt);
	}
	break;
	case 2:
	ttt = t + (n-1)*r;
	s = (n * (t+ttt))/2;
	printf ("O valor da soma dos termos da P.A. é %f",s);
	
	break;
	default:
	printf("Opção inválida!\n");
	}
	}


	return 0;
}

