#include <stdio.h>
#include <stdlib.h>

void pczworokatny(){
	system("clear");
	printf("Wybrales pole graniastoslupa prawidlowego czworokatnego\n");
	float a,h,wynik;
	printf("Podaj bok graniastoslupa: \n");
	scanf("%f", &a);
	printf("Podaj dlugosc wysokosci: \n");
	scanf("%f", &h);
	wynik=2*(a*a)+4*(a*h);
	printf("Pole  wynosi %.2f\n",wynik);
	
}

void ptrojkatny(){
	system("clear");
	printf("Wybrales pole graniastoslupa prawidlowego trojkatnego\n");
	float a,h,wynik;
	printf("Podaj bok: \n");
	scanf("%f", &a);
	printf("Podaj wysokosc: \n");
	scanf("%f", &h);
	wynik=((a*a)*1.732)/4;
	wynik=wynik*2;
	wynik=wynik+(3*a*h);
	printf("Pole wynosi %.2f\n",wynik);
}

void pszesciokatny(){
	system("clear");
	printf("Wybrales pole graniastoslupa prawidlowego szesciokatnego\n");
	float a,h,wynik;
	printf("Podaj dlugosc boku: \n");
	scanf("%f", &a);
	printf("Podaj wysokosc: \n");
	scanf("%f", &h);
	wynik=((a*a)*1.732)/4;
	wynik=wynik*12;
	wynik=wynik+(6*a*h);
	printf("Pole wynosi %.2f\n",wynik);
}


void polafprg(){
system("clear");
int zmienna;
printf("Wybrales pola graniastoslupow!\n");
printf("Pole jakiej figury chcesz policzyc?\n");
printf("Graniastoslup prawidlowy czworokatny - nacisnij 1\n");
printf("Graniastoslup prawidlowy trojkatny - nacisnij 2\n");
printf("Graniastoslup prawidlowy szesciokatny - nacisnij 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  pczworokatny();
	  break;
	case 2:
	  ptrojkatny();
	  break;
	case 3:
	  pszesciokatny();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
}
}
