/*
 * Task.h
 *
 *  Created on: 20 Sep 2017
 *      Author: jornbrouwer
 */

#ifndef TASK_H_
#define TASK_H_

class Task
{
public:
	Task();
	Task (short aMachineID, short aDuration); // overloaded constructor
	virtual ~Task();

	void setTaskID(short anID);

protected:
	short machineID;
	short duration;

private:
	short taskID =0;
};

#endif /* TASK_H_ */
