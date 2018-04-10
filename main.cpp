#include "juego.h"
#include <iostream>


int main(){
	juego preguntas;
	int puntuacion = 0;

	for(int i = 0; i < 10; i++){
		preguntas.gen_number();
		preguntas.gen_operator();

		preguntas.show_operation();
		
		if(preguntas.check_answer()){
			puntuacion += 5;
		}
		else puntuacion -= 2;
	}
	
	std::cout<<"Tu puntuacion es "<<puntuacion;
	
	return 0;
}
