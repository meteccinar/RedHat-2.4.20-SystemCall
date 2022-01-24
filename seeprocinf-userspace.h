#include <linux/unistd.h>
#include <linux/types.h>
#include <errno.h>
struct prcdata
{
	long nice;
	pid_t pid;
	pid_t pidparent;
	long uid;
	unsigned long start_time;
	int nofprocess;
};
_syscall1(int,seeprocinf,struct prcdata*,data);
