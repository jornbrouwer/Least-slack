/*
 * main.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */
#include <iostream>
#include <vector>
#include "config.h"
#include "JobShop.h"


int main(int argc, char **argv)
{
	#ifdef CustomMessage_1
		std::cout << "...started..." << std::endl;
	#endif

	/*
	 *
	 */
	std::vector<int> jobList;
	for(int i = 10; i < 16; i++)
	{
		jobList.push_back(i);
	}

	for(int i = 0; i < 5; i++)
	{
		std::cout << "Job ID: [" << i << "]" << " value: " << jobList[i] << std::endl;
	}

	/*
	 *
	 */
	std::vector<int>::iterator v = jobList.begin();
	while(v != jobList.end())
	{
		std::cout << "jobID: " << *v << std::endl;
		v++;
	}


	JobShop js2;
	JobShop j(10,10);

	return 0;
}




