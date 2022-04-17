/*
 * aerolineas.c
 *
 *  Created on: 16 abr. 2022
 *      Author: Gabriel Veles
 */
#include <stdio.h>
#include <stdlib.h>

float precioUnitario(float precio, int kilometros)
{
	return precio / kilometros;
}
float diferenciaPrecio(float precio1, float precio2)
{
	if (precio2 > precio1)
	{
		return precio2 - precio1;
	}
	else
	{
		return precio1 - precio2;
	}
}



float calcularBitcoin(float precio)//se calcula el precio del bitcoin
{
	float valorBitcoin=4606954.55;
	return precio / valorBitcoin;
}

float calcularDebito(float precio)
{

	return precio * 0.9;


}
float calcularCredito(float precio)
{
	return precio * 1.25;
}

int ingresarKms(int* pKilometros)
	{
		int kilometros;
		int retorno = -1;



		printf("Ingresar kilòmetros: ");
		scanf("%d", &kilometros);
		fflush(stdin);
		*pKilometros = kilometros;
		if (kilometros != 0)
		{
			retorno = 0;
		}


		return retorno;
	}
int ingresarPrecioVuelos(float* pPrecioAerolineas,float* pPrecioLatam)
	{
		float aerolineas;
		float latam;
		char eleccion;
		int retorno=0;
		printf("Ingresar precio de vuelos: Aerolineas= y, Latam= z \n");
		scanf("%c", &eleccion);
		fflush(stdin);
		while(eleccion != 'y' && eleccion != 'z' )
		{
			retorno=-1;

		}
		switch (eleccion)
		{
		case 'y':
			printf("Ingresar precio de Aerolineas:\n ");
			scanf("%f", & aerolineas);
			break;
		case 'z':
			printf("Ingresar precio de Latam:\n ");
			scanf("%f", & latam);
		}
		*pPrecioAerolineas = aerolineas;
		*pPrecioLatam = latam;





		return retorno;

	}




void cargaForzada()
	{
		int kilometros=7090;
		float aerolineas=162965, latam= 159339;


		float precioDebitoAerolineas=calcularDebito(aerolineas);
		float precioCreditoAerolineas=calcularCredito(aerolineas);
		float precioBitcoinAerolineas=calcularBitcoin(aerolineas);
		float precioUnitarioAerolineas=precioUnitario(aerolineas, kilometros);
		float precioDebitoLatam=calcularDebito(latam);
		float precioCreditoLatam=calcularCredito(latam);
		float precioBitcoinLatam=calcularBitcoin(latam);
		float precioUnitarioLatam=precioUnitario(latam,kilometros);
		float diferencia=diferenciaPrecio(aerolineas,latam);

		printf("\n Kms ingresados %d\n", kilometros);
		printf("\n Precio Aerolineas %.2f $",aerolineas);
		printf("\n precio con tarjeta de debito %.2f $",precioDebitoAerolineas);
		printf("\n Precio con tarjeta de credito: %.2f $", precioCreditoAerolineas);
		printf("\n Precio con bitcoins : %.2f BTC", precioBitcoinAerolineas);
		printf("\n mostrar precio unitario: %.2f\n", precioUnitarioAerolineas);
		printf("\n precio Latam:%.2f $", latam);
		printf("\n precio con tarjeta de debito: %.2f $",precioDebitoLatam);
		printf("\n Precio con tarjeta de credito: %.2f $", precioCreditoLatam);
		printf("\n Precio con bitcoins : %.2f BTC", precioBitcoinLatam);
		printf("\n mostrar precio unitario: %.2f\n", precioUnitarioLatam);
		printf("la diferencia de precio es: %.2f", diferencia );

	}


int calcularCostos(int* ppKilometros, float* ppAerolineas , float* ppLatam)
	{
		int kilometros;
		float aerolineas, latam;


		float precioDebitoAerolineas=calcularDebito(aerolineas);
		float precioCreditoAerolineas=calcularCredito(aerolineas);
		float precioBitcoinAerolineas=calcularBitcoin(aerolineas);
		float precioUnitarioAerolineas=precioUnitario(aerolineas, kilometros);
		float precioDebitoLatam=calcularDebito(latam);
		float precioCreditoLatam=calcularCredito(latam);
		float precioBitcoinLatam=calcularBitcoin(latam);
		float precioUnitarioLatam=precioUnitario(latam,kilometros);
		float diferencia=diferenciaPrecio(aerolineas,latam);

		printf("\n Kms ingresados %d\n", kilometros);
		printf("\n Precio Aerolineas %.2f $",aerolineas);
		printf("\n precio con tarjeta de debito %.2f $",precioDebitoAerolineas);
		printf("\n Precio con tarjeta de credito: %.2f $", precioCreditoAerolineas);
		printf("\n Precio con bitcoins : %.2f BTC", precioBitcoinAerolineas);
		printf("\n mostrar precio unitario: %.2f\n", precioUnitarioAerolineas);
		printf("\n precio Latam:%.2f $", latam);
		printf("\n precio con tarjeta de debito: %.2f $",precioDebitoLatam);
		printf("\n Precio con tarjeta de credito: %.2f $", precioCreditoLatam);
		printf("\n Precio con bitcoins : %.2f BTC", precioBitcoinLatam);
		printf("\n mostrar precio unitario: %.2f\n", precioUnitarioLatam);
		printf("la diferencia de precio es: %.2f", diferencia );
		return 0;

	}


