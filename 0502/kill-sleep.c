#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main(){
	int i;
	
	printf("start sleeping\n");
	
	for(i=0;i<100;i++){
		
		printf("pid: %d , sleeping\n",getpid());
		sleep(1);
	
	}
	return (0);
	
}
