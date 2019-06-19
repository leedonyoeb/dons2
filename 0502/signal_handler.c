#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void (*old_fun)(int);

void sigint_handler(int signo){ //어떤 시그널에 붙일것인가 
	printf(" ctrl-c 키를 누르셨죠!\n");
	printf(" 또누르면 종료\n");

	signal(SIGINT ,old_fun); //sigaction()사용함 요즘은
	// 또는 signal(SIGINT ,SIG_DFL)
}

// ctrl-c 로 sigint 받으면 예전꺼로 돌려놔 -> 죽음

void main(){
	old_fun  = signal(SIGINT,sigint_handler);
	
	while(1){
		printf("hi ~ \n");
		sleep(1);
	}
				


}
