#include <stdio.h>
#include <stdlib.h>

void oczworokatny(){
	system("clear");
	printf("Wybrales pole ostroslupa prawidlowego czworokatnego\n");
	float a,h,wynik;
	printf("Podaj bok: \n");
	scanf("%f", &a);
	printf("Podaj dlugosc wysokosci trojkata: \n");
	scanf("%f", &h);
	wynik=(a*a)+4*(a*h);
	printf("Pole  wynosi %.2f\n",wynik);
	
}

void otrojkatny(){
	system("clear");
	printf("Wybrales pole ostroslupa prawidlowego trojkatnego\n");
	float a,h,wynik;
	printf("Podaj bok: \n");
	scanf("%f", &a);
	wynik=(a*a)*1.732;
	printf("Pole wynosi %.2f\n",wynik);
}

void oszesciokatny(){
	system("clear");
	printf("Wybrales pole ostroslupa prawidlowego szesciokatnego\n");
	float a,h,wynik;
	printf("Podaj dlugosc boku: \n");
	scanf("%f", &a);
	printf("Podaj wysokosc trojkata: \n");
	scanf("%f", &h);
	wynik=((a*a)*1.732)/4;
	wynik=wynik*6;
	wynik=wynik+(6*a*h);
	printf("Pole wynosi %.2f\n",wynik);
}


void polafpro(){
system("clear");
int zmienna;
printf("Wybrales pola ostroslupow!\n");
printf("Pole jakiej figury chcesz policzyc?\n");
printf("Ostroslup prawidlowy czworokatny - nacisnij 1\n");
printf("Ostroslup prawidlowy trojkatny - nacisnij 2\n");
printf("Ostroslup prawidlowy szesciokatny - nacisnij 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  oczworokatny();
	  break;
	case 2:
	  otrojkatny();
	  break;
	case 3:
	  oszesciokatny();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
}
}
