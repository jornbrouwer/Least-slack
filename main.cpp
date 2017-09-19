/*
 * main.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */
#include <iostream>

#include "config.h"

#include "JobShop.h"


int main(int argc, char **argv)
{
	#ifdef CustomMessage_1
		std::cout << "...started..." << std::endl;
	#endif

	JobShop js2;
	JobShop j(10,10);


	return 0;
}




