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

class Job
{
public:
	Job();
	virtual ~Job();

	void getJobInfo(int j); //Prints specific stats of a job to the console

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
