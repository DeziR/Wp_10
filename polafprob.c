#include <stdio.h>
#include <stdlib.h>

void pwalec(){
	system("clear");
	printf("Wybrales pole walca\n");
	float r,h,wynik;
	printf("Podaj promien: \n");
	scanf("%f", &r);
	printf("Podaj dlugosc wysokosc: \n");
	scanf("%f", &h);
	wynik=(2*3.14*(r*r))+(2*3.14*r*h);
	printf("Pole  wynosi %.2f\n",wynik);
	
}

void pstozek(){
	system("clear");
	printf("Wybrales pole stozka\n");
	float r,l,wynik;
	printf("Podaj promien: \n");
	scanf("%f", &r);
	printf("Podaj dlugosc tworzacej: \n");
	scanf("%f", &l);
	wynik=3.14*(r*r)+3.14*r*l;
	printf("Pole wynosi %.2f\n",wynik);
}

void pkula(){
	system("clear");
	printf("Wybrales pole kuli\n");
	float r,wynik;
	printf("Podaj promien: \n");
	scanf("%f", &r);
	wynik=4*3.14*(r*r);
	printf("Pole wynosi %.2f\n",wynik);
}


void polafprob(){
system("clear");
int zmienna;
printf("Wybrales pola figur obrotowych!\n");
printf("Pole jakiej figury chcesz policzyc?\n");
printf("Walec - nacisnij 1\n");
printf("Stozek - nacisnij 2\n");
printf("Kula - nacisnij 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  pwalec();
	  break;
	case 2:
	  pstozek();
	  break;
	case 3:
	  pkula();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
}
}
