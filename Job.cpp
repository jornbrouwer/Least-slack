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

//TODO overloaded constructor met juiste argumenten
//machine en time horen bij de Task class

Job::Job(short int anID, int aTotalTime) : jobID(anID), totalJobTime(aTotalTime)
{
#ifdef CustomMessage_3 //Job
	std::cout << "Job generated with overloaded constructor" << std::endl;
#endif
}



//Job::operator+(Job &j)
//{
//		Job t;
//		t.totalJobTime= this->totalJobTime+j.totalJobTime;
//		return t.totalJobTime;
//}


Job::~Job()
{
#ifdef CustomMessage_3 //Job
	std::cout <<" job destructed" << std::endl;
#endif
}


int Job::getTotalJobTime()
{
	totalJobTime = 0;
	return totalJobTime;
}

std::multimap<int,int> job;



/*
 void Job::newTask(int m, int t)
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
*/
