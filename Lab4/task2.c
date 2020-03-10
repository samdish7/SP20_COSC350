//Lab 4 Task 2 
//Sam Disharoon
#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
int main(int argc, char* argv[]){
	int in,out,offset;
	char c[1];
	umask(0);
	/*if(argc !=3){
		printf("ARG ERROR!\n");
		exit(0);
	}*/
	if((in=open(argv[1],O_RDONLY)<0)){
		printf("File Open Error!\n");
		exit(0);
	}
	printf("File descriptor number ~> %d\n",in);
	//out=open(argv[2],O_RDWR|O_CREAT,0666);
	printf("File descriptor number after dup2 ~> %d\n",in);
	while(read(in,&c,1)>0){
		offset++;
	}
	printf("Offset is ~> %d",offset);
	close(in);
	close(out);
	return 0;
}
