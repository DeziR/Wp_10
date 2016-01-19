#include <stdio.h>
#include <stdlib.h>

void pkwadrat(){
	system("clear");
	printf("Wybrales pole kwadratu\n");
	float a,wynik;
	printf("Podaj bok kwadratu: \n");
	scanf("%f", &a);
	wynik=a*a;
	printf("Pole kwadratu o boku %.2f wynosi %.2f\n", a,wynik);
	
}

void pprostokat(){
	system("clear");
	printf("Wybrales pole prostokata\n");
	float a,b,wynik;
	printf("Podaj bok prostokata: \n");
	scanf("%f", &a);
	printf("Podaj drugi bok prostokata: \n");
	scanf("%f", &b);
	wynik=a*b;
	printf("Pole prostokatu o boku a = %.2f i boku b = %.2f wynosi %.2f\n", a,b,wynik);
}

void ptrojkat(){
	system("clear");
	printf("Wybrales pole trojkata\n");
	float a,h,wynik;
	printf("Podaj dlugosc boku: \n");
	scanf("%f", &a);
	printf("Podaj dlugosc wysokosci: \n");
	scanf("%f", &h);
	wynik=(a*h)/2;
	printf("Pole trojkata o boku a = %.2f i wysokosci h = %.2f wynosi %.2f\n", a,h,wynik);
}

void pkolo(){
	system("clear");
	printf("Wybrales pole kola\n");
	float r,wynik;
	printf("Podaj promien kola: \n");
	scanf("%f", &r);
	wynik=3.14*(r*r);
	printf("Pole kola o boku %.2f wynosi %.2f\n", r,wynik);
	
}

void ptrapez(){
	system("clear");
	printf("Wybrales pole trapezu\n");
	float a,b,h,wynik;
	printf("Podaj podstawe gorna trapezu: \n");
	scanf("%f", &a);
    printf("Podaj podstawe dolna trapezu: \n");
	scanf("%f", &b);
    printf("Podaj wysokosc trapezu: \n");
	scanf("%f", &h);
	wynik=((a+b)*h)/2;
	printf("Pole kwadratu o boku a = %.2f, b = %.2f i h = %.2f wynosi %.2f\n", a,b,h,wynik);
}

void promb(){
	system("clear");
	printf("Wybrales pole rombu\n");
	float a,wynik;
	printf("Podaj bok rombu: \n");
	scanf("%f", &a);
	wynik=a*a;
	printf("Pole rombu o boku %.2f wynosi %.2f\n", a,wynik);
}

void prownoleglobok(){
	system("clear");
	printf("Wybrales pole rownolegloboka\n");
	float a,b,wynik;
	printf("Podaj bok rownolegloboka: \n");
	scanf("%f", &a);
	printf("Podaj drugi bok rownolegloboka: \n");
	scanf("%f", &b);
	wynik=a*b;
	printf("Pole rownolegloboka o boku a = %.2f i boku b = %.2f wynosi %.2f\n", a,b,wynik);
}

void polafp(){
system("clear");
int zmienna;
printf("Wybrales pola figur plaskich!\n");
printf("Pola jakiej figury chcesz policzyc?\n");
printf("Kwadrat - nacisnij 1\n");
printf("Prostokat - nacisnij 2\n");
printf("Trojkat - nacisnij 3\n");
printf("Kolo - nacisnij 4\n");
printf("Trapez - nacisnij 5\n");
printf("Romb - nacisnij 6\n");
printf("Rownoleglobok - nacisnij 7\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  kwadrat();
	  break;
	case 2:
	  prostokat();
	  break;
	case 3:
	  trojkat();
	  break;
	case 4:
	  kolo();
	  break;
	case 5:
	  trapez();
	  break;
	case 6:
	  romb();
	  break;
	case 7:
	  rownoleglobok();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
}
}

