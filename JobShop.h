/*
 * JobShop.h
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef JOBSHOP_H_
#define JOBSHOP_H_
#include "config.h"

#include "Job.h"
#include <vector>

class JobShop
{
public:
	JobShop();			//Constructor
	JobShop(const int& nJobs, const int& nMachines); //Overloaded constructor
	//JobShop(int j, int m);
	virtual ~JobShop();		//Destructor

	/*
	 * Getters en setters for class attributes (int nJobs, int nMachines)
	 */
	int getJobs() const;
	void setJobs(int jobs);
	int getMachines() const;
	void setMachines(int machines);

	void fillFirstJob(int jobID);
	void printJobList(); //

protected:
	int nJobs;		//Number of Jobs read out input-file
	int nMachines;	//Number of Machines read out input-file
	std::vector<int> jobList;
};

#endif /* JOBSHOP_H_ */
