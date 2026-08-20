#include <stdio.h>

int main(void) {
	
	float Kg, h, bmi;
	
	do {
		printf("Ingrese el peso en kg: ");
		scanf("%f", &Kg);
		if (Kg <= 0) {
			printf("Error: El peso debe ser un número positivo.\n");
		}
	} while (Kg <= 0);
	
	// Validar que la altura sea un número positivo
	do {
		printf("Ingrese la altura en metros: ");
		scanf("%f", &h);
		if (h <= 0) {
			printf("Error: La altura debe ser un número positivo.\n");
		}
	} while (h<= 0);
	
	bmi = Kg / (h * h);
	
	printf("\nSu índice de masa corporal es: %.2f\n\n", bmi);
	
	printf("  Indice   | Condicion  \n" );
	printf("---------------------------\n");
	printf("   <18.5   | Bajo peso\n");
	printf("18.5 a 24.9| Normal\n");
	printf("25.0 a 29.9| Sobrepeso\n");
	printf("   >=30    | Obesidad\n");
	
	printf("\nSu condicion es: ");
	if (bmi < 18.5) {
		printf("Bajo peso\n");
	} else if (bmi >= 18.5 && bmi <= 24.9) {
		printf("Normal\n");
	} else if (bmi >= 25.0 && bmi <= 29.9) {
		printf("Sobrepeso\n");
	} else {
		printf("Obesidad\n");
	}

	return 0;
}
