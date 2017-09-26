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
#ifdef CustomMessage_2
	std::cout << "...Constructed:..." << "instance of JobShop" << std::endl;
#endif
}

JobShop::JobShop(const int& aJob, const int& aMachine) :
		nJobs(aJob), nMachines(aMachine)
{
#ifdef CustomMessage_2
	std::cout << "...Constructed:..." << "overloaded JobShop" << std::endl;
	std::cout << __PRETTY_FUNCTION__ << "nJobs: " << aJob << std::endl;
	std::cout << __PRETTY_FUNCTION__ << "nMachines: " << aMachine << std::endl;
#endif
}


void JobShop::printJobList()
{
	/*
	 * Definition and declaration of vector JobList
	 */
	std::vector<int> jobList;

	for(int i=0; i < JobShop::nJobs; i++)
	{
		jobList.push_back(i);

#ifdef CustomMessage_2 //JobShop
		std::cout << "Job ID: [" << i << "]" << " number of tasks: " << jobList[i] << std::endl;
#endif

	}

//	//nTasks per Job
//	for(int i = 10; i < 16; i++)
//	{
//		jobList.push_back(i);
//	}

//	/*
//	 *  Using a for-loop to list jobs with values
//	 */
//	for(int i = 0; i < 5; i++)
//	{
//		std::cout << "Job ID: [" << i << "]" << " number of tasks: " << jobList[i] << std::endl;
//	}

	//	/*
	//	 * Using an iterator to loop through the vector
	//	 */
	//	std::vector<int>::iterator v = jobList.begin();
	//	while(v != jobList.end())
	//	{
	//		std::cout << "jobID: " << *v << std::endl;
	//		v++;
	//	}
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
#ifdef CustomMessage_2 //JobShop
	std::cout << "...Destructed..." << std::endl;
#endif
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
