#include <cstdlib>
#include <iostream>

#include "juego.h"

juego::juego(){
	operation = {'+', '-', 'x', '/'}
	num1 = 0;
	num2 = 0;
	num3 = 0;
}

int juego::gen_number(){
	num1 = rand()%10;
	num2 = rand()%10;
}

int juego::gen_operator(){
	op = rand()%4;
}

void juego::show_operation(){
	std::cout<<num1<<" "<<operation[op]<<" "<<num2<<" =";
	std::cin>>answer;
}

bool juego::check_result(){

}


