#ifndef __LINUX_SEEPROCINF_H
#define __LINUX_SEEPROCINF_H
#include <linux/linkage.h>
#include <linux/unistd.h>
#include <linux/types.h>
#endif

struct prcdata
{
	long nice;
	pid_t pid;
	pid_t pidparent;
	long uid;
	unsigned long start_time;
	int nofprocess;

};
