#include "Celula.h"

Celula::Celula(){

	this->estaViva=false;
	this->vida = 0.0;
	this->nacioPorPortal = false;
}

bool Celula::getEstado(){
	return estaViva;
}

void Celula::setEstado(bool nuevoEstado){
	this->estaViva = nuevoEstado;
}

float Celula::getVida(){
	return vida;
}

void Celula::setVida(float nuevaVida){

	if(vidaEsValida(nuevaVida)){
		this->vida = nuevaVida;
	}
	else{
		throw std::string("Vida No Valida");
	}
}

Rgb Celula::getRgb(){
	return color;
}

void Celula::setRgb(Rgb color){
	this->color = color;
}

bool Celula::vidaEsValida(float vida){
	return vida >= 0.0;
}

void Celula::nacioMediantePortal(bool respuesta){
	nacioPorPortal = respuesta;
}

bool Celula::nacePorPortal(){
	return nacioPorPortal;
}
