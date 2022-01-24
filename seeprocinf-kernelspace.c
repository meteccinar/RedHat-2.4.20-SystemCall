#include <linux/seeprocinf.h>
#include <linux/kernel.h>
#include <linux/sched.h>
#include <linux/timer.h>
#include <linux/unistd.h>
#include <asm/current.h>
#include <asm/uaccess.h>

asmlinkage int sys_seeprocinf(struct prcdata *data)
{
	cli();
	struct prcdata tmp;
	copy_from_user(&tmp,data,sizeof(struct prcdata));
	tmp.nice = current->nice;
	tmp.start_time = current->start_time;
	tmp.pid = current->pid; 
	tmp.pidparent = current->prev_task->pid; 
	tmp.uid = current->uid;
	tmp.nofprocess = current->user->processes.counter;
	copy_to_user(data,&tmp,sizeof(struct prcdata));
	sti();
	return 0;

}
