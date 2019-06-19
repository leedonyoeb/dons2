#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i;
	double j;
	char *bug = malloc(sizeof(char));
	for(i=0;i<5;i++){
		printf("loop %d: ",i); 
		j = (double)i/2 + i;
		printf("\tj is %lf \n",j);
	}
	
	
	strcpy(bug,"hi");
	printf("bug is %s\n",bug);

	return 0;
}

