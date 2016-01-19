#include <stdio.h>
#include <stdlib.h>

#include "obwody.c"
#include "obwody.h"
#include "polafp.c"
#include "polafp.h"
#include "polafpr.c"
#include "polafpr.h"
#include "objetosci.c"
#include "objetosci.h"


void menu(){
int zmienna;
system("clear");
printf("Witaj uzytkowniku\n");
printf("Wybierz z menu dostepnego ponizej interesujaca sie opcje\n");
printf("Obwody figur plaskich - nacisnij 1\n"); 
printf("Pola figur plaskich - nacisnij 2\n");
printf("Pola figur przestrzennych - nacisnij 3\n");
printf("Objetosci figur przestrzennych - nacisnij 4\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  obwody();
	  break;
	case 2:
	  polafp();
	  break;
	case 3:
	  polafpr();
	  break;
	case 4:
	  objetosci();
	  break;
	default:
	  printf("Zly wybor!\n");
	  break;
}
}
