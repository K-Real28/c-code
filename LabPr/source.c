#include<stdio.h>
#include<stdlib.h>
#define n 10
#include<conio.h>
#include<locale.h>
void main(void)
{
	int i, g, l;
	double j = 0, k = 0, t = 0;
	int A[] = { 0, 0, 10, 20, 10, 10, 20, 10, 0, 10, 10, 20, 10 ,10,20,10,20,30,20,10,50,0,10,10,0,10,0,20,10,10 };
	setlocale(LC_ALL, "Rus");
	printf("Cведения о количестве осадков:");
	for (i = 0; i < 10; i++) {
		j += A[i];
		printf("\t%d", A[i]);
	}
	for (g = 10;g < 20; g++) {
		k += A[g];
		printf("\t%d", A[g]);
	}
	for (l = 20; l < 30; l++) {
		t += A[l];
		printf("\t%d", A[l]);
	}
	printf("\nВ среднем за один день в первую декаду месяца выпало:%.1lf осадков.\nВо второую декаду месяца :%.1lf осадков.\nВ третью декаду месяца:%.1lf осадков",j/10,k/10,t/10);
	_getch();
}
