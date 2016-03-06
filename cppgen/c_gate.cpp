/*
 * c_gate.cpp
 *
 *  Created on: 2016/03/06
 */

#include "DellesteExpectation/cpp_check.h"
#include "c_gate.h"

static cpp_check* cpp_check_obj = 0;

// initialize cpp modules
int DellesteExpectation_Init(void)
{
	cpp_check_obj = new cpp_check;
	return 0;
}

// terminate cpp modules
int DellesteExpectation_End(void)
{
	delete cpp_check_obj;
	return 0;
}

// cpp module link check
int DellesteExpectation_Check(void)
{
	return (cpp_check_obj->check())?0:(-1);
}

