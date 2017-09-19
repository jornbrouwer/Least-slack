/*
 * JobShop.h
 *
 *  Created on: 19 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef JOBSHOP_H_
#define JOBSHOP_H_

class JobShop
{
public:
	JobShop();			//Constructor
	JobShop(const int& aJob, const int& aMachine);
	//JobShop(int j, int m);

	virtual ~JobShop();		//Destructor
	int getJobs() const;
	void setJobs(int jobs);
	int getMachines() const;
	void setMachines(int machines);

protected:
	int nJobs;		//Number of Jobs read out input-file
	int nMachines;	//Number of Machines read out input-file
};

#endif /* JOBSHOP_H_ */
