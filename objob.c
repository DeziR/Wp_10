#include <stdio.h>
#include <stdlib.h>

void objwalec(){
	system("clear");
	printf("Wybrales objetosc walca\n");
	float r,h,wynik;
	printf("Podaj promien: \n");
	scanf("%f", &r);
	printf("Podaj dlugosc wysokosc: \n");
	scanf("%f", &h);
	wynik=3.14*h*(r*r);
	printf("Objetosc  wynosi %.2f\n",wynik);
	
}

void objstozek(){
	system("clear");
	printf("Wybrales objetosc stozka\n");
	float r,h,wynik;
	printf("Podaj promien: \n");
	scanf("%f", &r);
	printf("Podaj wysokosc: \n");
	scanf("%f", &h);
	wynik=0.33*3.14*h*(r*r);
	printf("Objetosc wynosi %.2f\n",wynik);
}

void objkula(){
	system("clear");
	printf("Wybrales objetosc kuli\n");
	float r,wynik;
	printf("Podaj promien: \n");
	scanf("%f", &r);
	wynik=(r*r*r)*1.33;
	printf("Objetosc wynosi %.2f\n",wynik);
}


void objob(){
system("clear");
int zmienna;
printf("Wybrales objetosci figur obrotowych!\n");
printf("Objetosc jakiej figury chcesz policzyc?\n");
printf("Walec - nacisnij 1\n");
printf("Stozek - nacisnij 2\n");
printf("Kula - nacisnij 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  objwalec();
	  break;
	case 2:
	  objstozek();
	  break;
	case 3:
	  objkula();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
}
}
