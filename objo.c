#include <stdio.h>
#include <stdlib.h>

void objoczworokatny(){
	system("clear");
	printf("Wybrales pole ostroslupa prawidlowego czworokatnego\n");
	float a,h,wynik;
	printf("Podaj bok: \n");
	scanf("%f", &a);
	printf("Podaj dlugosc wysokosci trojkata: \n");
	scanf("%f", &h);
	wynik=(a*a)*h*0.33;
	printf("Objetosc  wynosi %.2f\n",wynik);
	
}

void objotrojkatny(){
	system("clear");
	printf("Wybrales pole ostroslupa prawidlowego trojkatnego\n");
	float a,h,wynik;
	printf("Podaj bok: \n");
	scanf("%f", &a);
	printf("Podaj wysokosc trojkata: \n");
	scanf("%f", &h);
	wynik=(a*a)*h*0.33;
	printf("Objetosc wynosi %.2f\n",wynik);
}

void objoszesciokatny(){
	system("clear");
	printf("Wybrales pole ostroslupa prawidlowego szesciokatnego\n");
	float a,h,wynik;
	printf("Podaj dlugosc boku: \n");
	scanf("%f", &a);
	printf("Podaj wysokosc trojkata: \n");
	scanf("%f", &h);
    wynik=(a*a)*h*0.33;
	printf("Objetosc wynosi %.2f\n",wynik);
}


void objo(){
system("clear");
int zmienna;
printf("Wybrales objetosci ostroslupow!\n");
printf("Objetosc jakiej figury chcesz policzyc?\n");
printf("Ostroslup prawidlowy czworokatny - nacisnij 1\n");
printf("Ostroslup prawidlowy trojkatny - nacisnij 2\n");
printf("Ostroslup prawidlowy szesciokatny - nacisnij 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  objoczworokatny();
	  break;
	case 2:
	  objotrojkatny();
	  break;
	case 3:
	  objoszesciokatny();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
}
}
