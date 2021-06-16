/********
*****Developer Name: Denis Muriungi
*****Email:Dennzriush@gmail.com
****Phone number : +254791570615
********************************************/
//NB: These programs can be run on linux platform especially ubuntu
#include<stdio.h>

int main()
   {
   	int this_pid;
   	int status;
   	
   	pid = fork();
   	//this is the child process
   	if(pid == 0)
   	{
   		system("ps -ef");
   		sleep(10);
   		system("ps -ef");
   		return 3;
	   }
	   else
	   {
	   	sleep(3);
	   	wait(&status);
	   	printf("The parent process:exit status from child is decimal %d, hexa %0x \n",status,staus);
	   }
	   return 0;
   }
