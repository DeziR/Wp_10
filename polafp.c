#include <stdio.h>
#include <stdlib.h>

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

