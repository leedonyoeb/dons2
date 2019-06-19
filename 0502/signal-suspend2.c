#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int main(void){
	sigset_t sigset;

	sigfillset(&sigset);
	sigdelset(&sigset,SIGUSR1);

	printf("PID: %d, waiting for only SIGUSR1\n", getpid());

	//we are waiting for SIGUSR1
	sigsuspend(&sigset);
/*  핸들러가 없으면 18번 실행안되던가 그냥 실행되던가 함*/

	//gogogo
	printf("hi\n");
}

