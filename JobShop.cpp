/*
 * JobShop.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */
#include <iostream>

#include "JobShop.h"

JobShop::JobShop()
{
	nJobs = 0;
	nMachines = 0;
	std::cout << "...Constructed..." << std::endl;
}

JobShop::JobShop(const int& aJob, const int& aMachine) : nJobs(aJob) , nMachines(aMachine)
{
	std::cout << __PRETTY_FUNCTION__ << "nJobs: " << aJob << std::endl;
	std::cout << __PRETTY_FUNCTION__ << "nMachines: " << aMachine << std::endl;
}



//JobShop::JobShop(int j, int m)
//{
//#ifdef CustomMessage_2
//
//#endif
//	std::cout << "Overloaded constructor: " << "Jobs:" << j << "Machines:" << m << std::endl;
//	nJobs = j;
//	nMachines = m;
//
//	//std::cout << __PRETTY_FUNCTION__ << " " << name << std::endl;
//}


JobShop::~JobShop()
{
	std::cout << "...Destructed..." << std::endl;
}

int JobShop::getJobs() const
{
	return nJobs;
}

void JobShop::setJobs(int jobs)
{
	nJobs = jobs;
}

int JobShop::getMachines() const
{
	return nMachines;
}

void JobShop::setMachines(int machines)
{
	nMachines = machines;
}
