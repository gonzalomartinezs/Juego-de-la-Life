#ifndef RGB_HPP_
#define RGB_HPP_

#include <iostream>

#define COLOR_POR_DEFECTO 128

class Rgb{

	private:

		int rojo;
		int verde;
		int azul;

	public:

	/*
	 * Constructor:
	 * Pre : recibe los 3 enteros correspondiente a los valores del Rgb. Rango(0-255),
	 * inicializa en "COLOR_DEFECTO" si no se reciben parametros.
	 * Post:asigna los valores recibidos a el RGB, luego de crear el mismo.
	 */
	Rgb(int rojo ,int verde ,int azul);

	Rgb();

	/*
	 * Pre: recibe un valor entero en el rango (0-255)
	 * Post: asigna dicho valor a el color correspondiente del Rgb.
	 */
	void setRojo(int);
	void setVerde(int);
	void setAzul(int);

	/*
	 * Post: Devuelve un entero correspondiente al valor de dicho color en el RGB.
	 */
	int getRojo();
	int getVerde();
	int getAzul();
};

#endif /* RGB_HPP_ */
