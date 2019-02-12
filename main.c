#include "stdio.h"
#include "stdlib.h"
#include "string.h"

char dir[32];
char path[64];

int main(){

	FILE * fileptr = popen("pwd","r");
	if(fileptr!=NULL){
		while(fgets(dir,32,fileptr)!=NULL);
	}else{
		return 1;
	}
	char addr[]={"/home/ubuntu/"};
	strcat(path,"cp -r");
	strcat(path," ");
	strcat(path,addr);
	strcat(path," ");
	strcat(path,dir);
	system(path);

	return 0;
}