#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL,"");
	int n,i,op,b;
	float a[n], r, so;
	printf ("Progama de P.A.\nEsse progama permite que você monte sua P.A. e, a partir disso, descubra valores de termos da P.A. montada e a soma dos termos da P.A.\n");	
	printf("Montando a P.A...\nDigite a razão.\n");
	scanf ("%f",&r);
	printf ("Digite o termo inicial.\n");
	scanf ("%f",&a[0]);
	printf ("Digite a quantidade de termos da P.A.\n");
	scanf ("%d",&n);
	for (i=1;i<n;i++){
	a[i]= a[i-1]+ r;
	printf ("%f\n",a[i]);
	}
	for (i=0;i<n;i++){
	printf ("\n%f\n",a[i]);
	}
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
	} else{
	printf ("O valor do a%d é %f\n", b, a[b-1]);
	}
	break;
	case 2:
	so = 0;
	for (i=0;i<n;i++){
	so = so+a[i];
	}
	printf ("A soma dos termos da P.A. é %f",so);
	break;
	default:
	printf("Opção inválida!\n");
	}
	}
	
	return 0;
}

