#ifndef _MTIME_H
#define _MTIME_H

#include <time.h>
#include <stdint.h>
#include <inttypes.h>


void mTime(long * in){
	struct timespec spec;
	clock_gettime(CLOCK_REALTIME, &spec);
	*in = spec.tv_sec*1000000000L + spec.tv_nsec;
	return;
}

void mTimeNS(long * in){
	struct timespec spec;
	clock_gettime(CLOCK_REALTIME, &spec);
	*in = spec.tv_nsec;
	return;
}

#endif // endif for _MTIME_H
