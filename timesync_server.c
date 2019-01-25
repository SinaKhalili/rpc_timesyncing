/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "timesync.h"

double *
timing_1_svc(void *argp, struct svc_req *rqstp)
{
	static double  result;
	printf("Hit! \n");
	struct timeval currentTime;
	// gettimeofday returns a structure with tv_sec with the current time in seconds
	// and tv_usec with remaining time current time in microseconds
	gettimeofday(&currentTime, NULL);
	// we then convert this to miliseconds using some math conversions
	double currentTime_in_mill = (currentTime.tv_sec) * 1000 + (currentTime.tv_usec) / 1000 ; 
	result = currentTime_in_mill;
	//send the result to any rpc calling client. 
	return &result;
}
