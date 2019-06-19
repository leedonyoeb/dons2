#include<stdio.h>
#include<signal.h>
#include<unistd.h>

struct sigaction act_new;
struct sigaction act_old;

void sigint_handler(int signo){ //어떤 시그널에 붙일것인가 
	printf(" ctrl-c 키를 누르셨죠!\n");
	printf(" 또누르면 종료\n");

	sigaction(SIGINT, &act_old ,NULL);
}
//ctrl c 하면 핸들러 콜 함
// 또 누르면 예전꺼old (종료) 가 콜되서 종료
void main(){
	act_new.sa_handler = sigint_handler; //시그널 핸들러 지정
	sigemptyset(&act_new.sa_mask); //시그널 처리중 블록될 시그널은 없음

	sigaction(SIGINT, &act_new, &act_old);
	//SIGINT를 지정하면서 old에 정보를 구한다
	//sigint 시그널을 받으면 act_new 로 동작을 하겟다. 

	while(1){
		printf("hi ~ \n");
		sleep(1);
	}
				
}
