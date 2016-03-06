/*
 * c_gate.h
 *
 *  Created on: 2016/03/06
 */

#ifndef C_GATE_H_
#define C_GATE_H_

#ifdef __cplusplus
extern "C" {
#endif

// function prototypes /////////////////////////////////////

// initialize cpp modules
int DellesteExpectation_Init(void);

// terminate cpp modules
int DellesteExpectation_End(void);

// cpp module link check
int DellesteExpectation_Check(void);

#ifdef __cplusplus
}
#endif

#endif /* C_GATE_H_ */
