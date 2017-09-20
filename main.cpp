/*
 * main.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */
#include <iostream>
#include "config.h"
#include "JobShop.h"
#include "Job.h"

int nJobs;
int nMachines;

int main(int argc, char **argv)
{
	#ifdef CustomMessage_1
		std::cout << "...started..." << std::endl;
	#endif

	//JobShop js2;
	JobShop j(10,10);
	JobShop j2(20,10);

	j2.printJobList();

	Job job1;
	job1.fillJob(1,30);

	return 0;
}




