#include <stdio.h>
#include <stdlib.h>

void kwadrat(){
	system("clear");
	printf("Wybrales obwod kwadratu\n");
	float a,wynik;
	printf("Podaj bok kwadratu: \n");
	scanf("%f", &a);
	wynik=4*a;
	printf("Obwod kwadratu o boku %.2f wynosi %.2f\n", a,wynik);
	
}

void prostokat(){
	system("clear");
	printf("Wybrales obwod prostokata\n");
	float a,b,wynik;
	printf("Podaj bok prostokata: \n");
	scanf("%f", &a);
	printf("Podaj drugi bok prostokata: \n");
	scanf("%f", &b);
	wynik=2*a+2*b;
	printf("Obwod prostokatu o boku a = %.2f i boku b = %.2f wynosi %.2f\n", a,b,wynik);
}

void trojkat(){
	system("clear");
	printf("Wybrales obwod trojkata\n");
	float a,b,c,wynik;
	printf("Podaj dlugosc boku: \n");
	scanf("%f", &a);
	printf("Podaj dlugosc drugiego boku: \n");
	scanf("%f", &b);
	printf("Podaj dlugosc trzeciego boku: \n");
	scanf("%f", &c);
	wynik=a+b+c;
	printf("Obwod trojkata o boku a = %.2f, boku b = %.2f i boku c = %.2f wynosi %.2f\n", a,b,c,wynik);
}

void kolo(){
	system("clear");
	printf("Wybrales obwod kola\n");
	float r,wynik;
	printf("Podaj promien kola: \n");
	scanf("%f", &r);
	wynik=3.14*2*r;
	printf("Obwod kola o boku %.2f wynosi %.2f\n", r,wynik);
	
}

void trapez(){
	system("clear");
	printf("Wybrales obwod trapezu\n");
	float a,b,c,d,wynik;
	printf("Podaj bok trapezu: \n");
	scanf("%f", &a);
    printf("Podaj drugi bok trapezu: \n");
	scanf("%f", &b);
    printf("Podaj trzeci bok trapezu: \n");
	scanf("%f", &c);
	printf("Podaj czwarty bok trapezu: \n");
	scanf("%f", &d);
	wynik=a+b+c+d;
	printf("Obwod kwadratu o boku a = %.2f, b = %.2f, c = %.2f i d = %.2f wynosi %.2f\n", a,b,c,d,wynik);
}

void romb(){
	system("clear");
	printf("Wybrales obwod rombu\n");
	float a,wynik;
	printf("Podaj bok rombu: \n");
	scanf("%f", &a);
	wynik=4*a;
	printf("Obwod rombu o boku %.2f wynosi %.2f\n", a,wynik);
}

void rownoleglobok(){
	system("clear");
	printf("Wybrales obwod rownolegloboka\n");
	float a,b,wynik;
	printf("Podaj bok rownolegloboka: \n");
	scanf("%f", &a);
	printf("Podaj drugi bok rownolegloboka: \n");
	scanf("%f", &b);
	wynik=2*a+2*b;
	printf("Obwod rownolegloboka o boku a = %.2f i boku b = %.2f wynosi %.2f\n", a,b,wynik);
}
void obwody(){
system("clear");
int zmienna;
printf("Wybrales obwody figur plaskich!\n");
printf("Obwod jakiej figury chcesz policzyc?\n");
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
