#include <stdio.h>
#include <stdlib.h>
#include "laba4a.h"
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		setlocale(LC_ALL, "Russian");
		double a,b,c;
		printf("Ââåäèòå çíà÷åíèÿ òðåóãîëüíèêà: 	");
		scanf("%lf", &a);
		scanf("%lf", &b);
		scanf("%lf", &c);
		printf("%lf %lf %lf \n", a,b,c);
		if (!TriaTrue(a,b,c)) {
			printf("Ðåøåíèÿ íåò, òàê êàê óñëîâèÿ íå âûïîëíåíû");
			return 1; 
			}
		else {
			double p = peri(a,b,c);
			double s= Plo(a,b,c);
			printf("Ïåðèìåòð ðàâåí: %lf \n", p);
			printf("Ïëîùàäü ðàâíà: %lf", s);
			return 0;
			}
		
		return 0;
}
