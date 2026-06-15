#include <stdio.h>

int main(void) {
	
	float Kg, h, bmi;
	
	printf("Ingrese el peso en kg: ");
	scanf("%f", &Kg);
	
	printf("Ingrese la altura en mts: ");
	scanf("%f", &h);
	
	bmi = Kg / (h * h);
	
	printf("\nSu índice de masa corporal es: %.2f\n\n", bmi);
	
	printf("  Indice   | Condicion  \n" );
	printf("---------------------------\n");
	printf("   <18.5   | Bajo peso\n");
	printf("18.5 a 24.9| Normal\n");
	printf("25.0 a 29.9| Sobrepeso\n");
	printf("   >=30    | Obesidad\n");
	
	return 0;
}

