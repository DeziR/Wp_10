#include <stdio.h>
#include <stdlib.h>

#include "objg.c"
#include "objg.h"
#include "objo.c"
#include "objo.h"
#include "objob.c"
#include "objob.h"

void objetosci(){
system("clear");
int zmienna;
printf("Wybrales objetosci figur!\n");
printf("Chcesz obliczyc objetosci graniastoslupow?\n");
printf("Wybierz - 1\n");
printf("Chcesz obliczyc objetosci ostroslupow?\n");
printf("Wybierz - 2\n");
printf("Chcesz obliczyc objetosci figur obrotowych?\n");
printf("Wybierz - 3\n");
scanf("%d", &zmienna);
switch (zmienna)
{
	case 1:
	  objg();
	  break;
	case 2:
	  objo();
	  break;
	case 3:
	  objob();
	  break;
	default:
	  printf("Zle wybrales!");
	  break;
};
}
