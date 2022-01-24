#include <linux/seeprocinf.h>
#include <stdio.h>

int main()
{
	
	struct prcdata *data;
	data = (struct prcdata*)malloc(sizeof(struct prcdata));
	seeprocinf(data);
	printf("Start Time : %d\n",data->start_time);
	printf("Process ID : %d\n",data->pid);
	printf("Parent Process ID : %d\n",data->pidparent);
	printf("User ID : %d\n",data->uid);
	printf("Nice value : %d\n",data->nice);
	printf("N of Process : %d \n",data->nofprocess);
	printf("----------------------------\n");
	
	printf("Test pid : %d\n",getpid());
	printf("Test parent pid : %d\n",getppid());
	

	return 0;
	
}	
