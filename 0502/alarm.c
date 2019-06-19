#include<stdio.h>
#include<unistd.h>
#include<signal.h>

int cnt =0;
void sigint_handler(int signo){
	printf("알람 발생 %d !\n",cnt++);
	alarm(1);
}

int main(){
	signal(SIGALRM, sigint_handler);
	alarm(1);

	while(1){
	}

}
