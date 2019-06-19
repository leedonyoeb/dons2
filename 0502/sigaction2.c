#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sigint_handler(int signo){ 
	int i;

	printf(" ctrl-c 키를 누르셨죠!\n");
	printf(" 10초간 대기하겠습니다. 이때 ctrl-z 키를 눌러주세요 \n");

	for(i=10;i>0;i--){
		printf("%d초 남았습니다.\n",i);
		sleep(1);
	}
}
void main(){
	struct sigaction act;

	act.sa_handler = sigint_handler; //시그널 핸들러지정
	
	sigfillset(&act.sa_mask); //모든 시그널 블록 -> ctrl-c중에 다른거 못함
	
	sigaction(SIGINT, &act, NULL);
	
	while(1){
		printf("hi~\n");
		sleep(1);
	}

}

