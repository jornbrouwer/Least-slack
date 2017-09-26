/*
 * Task.cpp
 *
 *  Created on: 20 Sep 2017
 *      Author: jornbrouwer
 */

#include "Task.h"

Task::Task()
{
#ifdef CustomMessage_4 //Task
	std::cout << "default constructor used" << std::endl;
#endif
}

Task::Task(short aMachineID, short aDuration) :machineID(aMachineID),duration(aDuration)
{
#ifdef CustomMessage_4 //Task
	std::cout << "...overloaded constructor used.."<< "m: " << machineID << "D: " << duration << std::endl;
#endif
}

Task::~Task()
{
#ifdef CustomMessage_4 //Task
	std::cout << "...default destructor used..." << std::endl;
#endif
}

void Task::setTaskID(short anID)
{
	taskID = anID;
}
