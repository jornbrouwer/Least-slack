/*
 * Job.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */

#include "Job.h"

Job::Job()
{
	std::cout << "Job generated" << std::endl;

}

Job::Job(int m, int t) : machine(m), time(t)
{
	std::cout << "Job generated with overloaded constructor" << std::endl;
}


Job::~Job()
{
	std::cout <<" job destructed" << std::endl;
}

std::multimap<int,int> job;

void Job::fillJob(int m, int t)
{
	machine = m;
	time = t;
	jobID +=1;
	std::cout << "Machine: " << m << std::endl;
	std::cout << "Time: " << t << std::endl;
	std::cout << "jobID: " << jobID << std::endl;
}
