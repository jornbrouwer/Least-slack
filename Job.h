/*
 * Job.h
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef JOB_H_
#define JOB_H_

#include <iostream>
#include <map>

#include "JobShop.h"

class Job : public JobShop
{
public:
	Job();
	Job(int m, int t);
	virtual ~Job();

	void getJobInfo(int j); //Prints specific stats of a job to the console

	void fillJob(int m, int t);

private:
	int machine;
	int time;
	std::multimap<int,int> job;

//	for(auto i : JobShop::nJobs())
//	{
//
//	}
	//for (auto it = job_1.begin(); it != job_1.end(); ++it);
	     // cout << it->first << " = " << it->second << endl;

protected:
	int jobID;
};

#endif /* JOB_H_ */
