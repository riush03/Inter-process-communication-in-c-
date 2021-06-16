/********
*****Developer Name: Denis Muriungi
*****Email:Dennzriush@gmail.com
****Phone number : +254791570615
********************************************/
//NB: These programs can be run on linux platform especially ubuntu

#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

   int main()
    {
    	pid_t this_pid,this_ppid;
    	pid = getpid();
    	printf("Befork fork. The process ID is %d \n",pid);
    	
    	pid = fork();
    	
    	if(pid<0)
    	{
    		perror("fork() failure \n");
    		return 1;
		}
		//The child process
		if(pid == 0)
		{
			printf("Am the child process \n");
			
			this_pid = getpid();
			this_ppid = getppid();
			
			printf("The process ID is %d and the parent process ID is %d \n",this_pid,this_ppid);
		}
		else
		{
			//The parent process
			sleep(2);
			printf("Am the parent process\n");
			
			this_pid = getpid();
			this_ppid = getppid();
			
			printf("The Process ID is %d and the parent process ID is %d \n", this_pid,this_ppid);
			printf("The new created child process ID is %d \n",pid);
		}
		return 0;
	}
