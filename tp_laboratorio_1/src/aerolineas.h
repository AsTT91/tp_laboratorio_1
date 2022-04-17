/*
 * aerolineas.h
 *
 *  Created on: 16 abr. 2022
 *      Author: Gabriel Veles
 */

#ifndef AEROLINEAS_H_
#define AEROLINEAS_H_



int ingresarKms(int* pKilometros);
int ingresarPrecioVuelos(float* pPrecioAerolineas,float* pPrecioLatam);
void cargaForzada();
int calcularCostos(int* ppKilometros, float* ppAerolineas , float* ppLatam);
#endif /* AEROLINEAS_H_ */
