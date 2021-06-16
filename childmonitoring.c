/********
*****Developer Name: Denis Muriungi
*****Email:Dennzriush@gmail.com
****Phone number : +254791570615
********************************************/
//NB: These programs can be run on linux platform especially ubuntu
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main()
{
	int this_pid;
	int these_pids[3];
	int status;
	int num_of_processes;
	int total_process;
	
	siginfo_t siginfo;
	
	while(num_of_processes<total_process)
	{
		pid = fork();
		
		//Te child Process
		if(pid == 0)
		{
			printf("Child Process: The process ID here is %d \n",getpid());
			sleep(5);
			return 2;
		}
		else
		{
			these_pids[num_of_processes] = this_pid;
			mum_of_processes++;
			printf("Parent process: The process ID here is %d \n",this_pid);
		}
	}
	//Waiting for the third child process
	status = waitid(P_PID,this_pid[total_process -1],&siginfo,WEXITED);
	if(status == -1)
	{
		perror("Waiting error");
		return 1;
	}
	printf("info received from waitid is:\n");
	printf("PID of child is: %d , real user id of child is: %d",siginfo.si_pid,siginfo.si_uid);
}
