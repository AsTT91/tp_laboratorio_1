/*
 ============================================================================
 Name        : TP1GabrielVeles.c
 Author      : Gabriel Veles
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "aerolineas.h"

int main(void) {
	setbuf(stdout,NULL);
	float precioAerolineas;
	float precioLatam;
	int kilometrosIngresados;
	int opcion;
	char opciones2;

	do
	{
		printf(" 1- Ingresar kilometros.\n"
				"2- Ingresar precio de vuelos.\n"
				"3- Calcular los costos.\n"
				"4- Informar resultados.\n"
				"5- Carga forzada de datos.\n"
				"6- Salir.\n");
				scanf("%d",&opcion);
				fflush(stdin);

				if (opcion > 0 && opcion < 7)
				{
					switch (opcion)
				{
					case 1:
					ingresarKms(&kilometrosIngresados);
						break;

					case 2:
						ingresarPrecioVuelos(&precioAerolineas, &precioLatam);

						break;

					case 3:
						printf(" \nA- Calcular costo tarjeta de debito"
								"\nB- Calcular costo tarjeta de credito"
								"\nC- Calcular costo BTC"
								"\nD- Mostrar precio por km unitario"
								"\nE- Mostrar diferencia de precio ingresada ");
								scanf("%c",&opciones2);
								switch(opciones2)
								{
								case 'a':

									break;

								}
						break;


					case 5:cargaForzada();
					break;



				}
				}
	}
while(opcion != 6);
return 0;
}


