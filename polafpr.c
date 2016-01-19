#include <stdio.h>
#include <stdlib.h>

#include "polafprg.c"
#include "polafprg.h"
#include "polafpro.c"
#include "polafpro.h"
#include "polafprob.c"
#include "polafprob.h"

void polafpr(){
system("clear");
int zmienna;
printf("Wybrales pola figur przestrzennych!\n");
printf("Chcesz obliczyc pola graniastoslupow?\n");
printf("Wybierz - 1\n");
printf("Chcesz obliczyc pola ostroslupow?\n");
printf("Wybierz - 2\n");
printf("Chcesz obliczyc pola figur obrotowych?\n");
printf("Wybierz - 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  polafprg();
	  break;
	case 2:
	  polafpro();
	  break;
	case 3:
	  polafprob();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
};
}
