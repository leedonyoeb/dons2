#include<stdio.h>
#include<signal.h>

int main(){
	sigset_t set;

	sigfillset(&set);
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
	return 0;
}
