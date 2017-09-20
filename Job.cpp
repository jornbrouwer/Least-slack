/*
 * Job.cpp
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */

#include "Job.h"

Job::Job()
{
#ifdef CustomMessage_3 //Job
	std::cout << "Job generated" << std::endl;
#endif
}

Job::Job(int m, int t) : machine(m), time(t)
{
#ifdef CustomMessage_3 //Job
	std::cout << "Job generated with overloaded constructor" << std::endl;
#endif
}


Job::~Job()
{
#ifdef CustomMessage_3 //Job
	std::cout <<" job destructed" << std::endl;
#endif
}

std::multimap<int,int> job;

void Job::fillJob(int m, int t)
{
	machine = m;
	time = t;
	//jobID +=1;

#ifdef CustomMessage_3 //Job
	std::cout << "Machine: " << m << std::endl;
	std::cout << "Time: " << t << std::endl;
	std::cout << "jobID: " << jobID << std::endl;
#endif
}
