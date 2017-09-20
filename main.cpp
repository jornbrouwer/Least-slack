/*
 * main.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */
#include <iostream>
//#include <array>
#include "config.h"
#include "JobShop.h"
#include "Job.h"

int nJobs;
int nMachines;

//std::array<int>JOB_1 = {2,1,0,3,1,6,3,7,5,3,4,6};

int main(int argc, char **argv)
{
#ifdef CustomMessage_1
	std::cout << "...started..." << std::endl;
#endif

	int JOB_1[] =
	{ 2, 1, 0, 3, 1, 6, 3, 7, 5, 3, 4, 6 };
	int *p;
	p = JOB_1;

	//Jobfilling
	for (int i = 0; i < 12; i++)
	{
		if (i % 2)
		{
			std::cout << "job-index: " << i << std::endl;
			std::cout << "2^ true: " << i % 2 << std::endl;

		}
		else
		{
			std::cout << "job-index: " << i << std::endl;
			std::cout << "2^ false: " << i % 2 << std::endl;
		}

	}

//	for (auto i : JOB_1)
//	{
//
//	}

	//JobShop js2;
	JobShop j(6, 6);
	//JobShop j2(20, 10);
	//j2.printJobList();

	Job job1;
	job1.newTask(1, 30);

	return 0;
}

