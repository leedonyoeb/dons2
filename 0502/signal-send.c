#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	if(argc <3 ){
		printf("사용방법 : ./kill [SIG NUM] [PID]\n");
	}
	else{		// kill = 9, alarm = 14 ...etc...
		kill(atoi(argv[2]), atoi(argv[1]));
		// 그냥 프로세스 id 만 보고 삭제 :  kill(atoi(argv[1]), SIGLILL); 
	}
	return (0);

}

