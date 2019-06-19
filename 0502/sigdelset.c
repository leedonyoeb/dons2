#include<stdio.h>
#include<signal.h>

int main(){
	sigset_t set;

	sigemptyset(&set);
	sigaddset(&set,SIGINT);

	switch( sigismember(&set,SIGINT)){
		case 1: 
				printf("sigint는 포함되어있다\n");
				break;
		case 0 :
				printf("sigint는 없다\n");
				break;
		default:
				printf("sigismember() 호출에 실패\n");
				break;
	}
	sigdelset(&set,SIGINT);
	printf("SIGINT 를 시그널 집합에서 삭제\n");
	switch(sigismember(&set,SIGINT)){
		case 1:
				printf("sigint는 포함되어있디\n");
				break;
		case 0:
				printf("sigint는 없다\n");
				break;
		default:
				printf("sigismemeber() 호출에실패\n");
				break;
	}

	return 0;

}
	
