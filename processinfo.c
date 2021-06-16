/********
*****Developer Name: Denis Muriungi
*****Email:Dennzriush@gmail.com
****Phone number : +254791570615
********************************************/
//NB: These programs can be run on linux platform especially ubuntu

#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

//start the main process
int main()
       {
       	int this_pid,this_ppid;
       	
       	printf("Program fod getting PID and PPID information");
       	
       	this_pid = getpid();
       	this_ppid = getppid();
       	
       	printf("This process ID is %d \n",this_pid);
       	printf("This parent process ID is %d \n",this_ppid);
       	printf("Cross verification of pid's by executing process commands on shell\n")
       	
       	// This “C” library function system() executes a shell command. The arguments passed to system() are commands executed on shell. In the above program, command is “ps”, which gives process status
       	system("ps -ef");
       	
       	return 0;
	   }
