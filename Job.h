/*
 * Job.h
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef JOB_H_
#define JOB_H_
#include "config.h"

#include <iostream>
#include <map>

#include "JobShop.h"

class Job
{
public:
	Job();
	Job(short int anID, int aTotalTime);
	virtual ~Job();

	void getJobInfo(int j); //Prints specific stats of a job to the console
	void newTask(int m, int t);
	int getTotalJobTime();

	Job operator+(Job &j);

protected:
	short int jobID;
	int totalJobTime;

	//std::multimap<int, int> job;
};

#endif /* JOB_H_ */
