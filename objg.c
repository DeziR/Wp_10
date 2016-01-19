#include <stdio.h>
#include <stdlib.h>

void objgczworokatny(){
	system("clear");
	printf("Wybrales objetosc graniastoslupa prawidlowego czworokatnego\n");
	float a,h,wynik;
	printf("Podaj bok graniastoslupa: \n");
	scanf("%f", &a);
	printf("Podaj dlugosc wysokosci: \n");
	scanf("%f", &h);
	wynik=a*a*h;
	printf("Pole  wynosi %.2f\n",wynik);
	
}

void objgtrojkatny(){
	system("clear");
	printf("Wybrales pole graniastoslupa prawidlowego trojkatnego\n");
	float a,h,wynik;
	printf("Podaj bok: \n");
	scanf("%f", &a);
	printf("Podaj wysokosc: \n");
	scanf("%f", &h);
	wynik=((a*a)*1.732)/4;
	wynik=wynik*h;
	printf("Pole wynosi %.2f\n",wynik);
}

void objgszesciokatny(){
	system("clear");
	printf("Wybrales pole graniastoslupa prawidlowego szesciokatnego\n");
	float a,h,wynik;
	printf("Podaj dlugosc boku: \n");
	scanf("%f", &a);
	printf("Podaj wysokosc: \n");
	scanf("%f", &h);
	wynik=((a*a)*1.732)/4;
	wynik=wynik*h*6;
	printf("Pole wynosi %.2f\n",wynik);
}


void objg(){
system("clear");
int zmienna;
printf("Wybrales pola graniastoslupow!\n");
printf("Objetosc jakiej figury chcesz policzyc?\n");
printf("Graniastoslup prawidlowy czworokatny - nacisnij 1\n");
printf("Graniastoslup prawidlowy trojkatny - nacisnij 2\n");
printf("Graniastoslup prawidlowy szesciokatny - nacisnij 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  objgczworokatny();
	  break;
	case 2:
	  objgtrojkatny();
	  break;
	case 3:
	  objgszesciokatny();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
}
}
