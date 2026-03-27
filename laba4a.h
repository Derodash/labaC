#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

double peri(double a, double b, double c) {
	return a+b+c;
	}

double Plo(double a, double b, double c) {
	double p = (a + b + c) / 2.0;
	double Plo = (sqrt(p * (p-a) * (p-b) * (p- c)));
	return Plo;
		
	}
int TriaTrue(double a, double b, double c) {
	return (a+ b > c) && (b+ c > a) && (c+ a > b);
	}
