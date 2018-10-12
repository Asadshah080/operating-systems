#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>


int start=0;
int end=99;

void sumarray(int *array,int *fd1){
   int sum=0;
   for(int i=start;i<=end;i++){
	array[i]=1;
 	 sum=sum+array[i];
      }
	write(fd1[1],&sum,sizeof(sum));
	close(fd1[1]);
        start=end+1;
       end+=100;
}

int main(){    
               int array[1000];
		int array2[10];
		int cpid;
		int total_sum=0;
		int fd1[2];
    		int fd2[2];
		int fd3[2];
		int fd4[2];					
		int fd5[2];
		int fd6[2];
		int fd7[2];
		int fd8[2];
		int fd9[2];
		int fd10[2];
			
					
					if(pipe(fd1)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
						cpid=fork();
					
						if(cpid<0)
						{
  						   printf("fialed");
  							return 1;
						}

						else if(cpid==0)
						{	sumarray(array,fd1);

						}
						else{
							wait(NULL);
							read(fd1[0], &array2[0],sizeof(int));
							close(fd1[0]);
						        }
					
					if(pipe(fd2)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();

						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd2);}
						else{
							wait(NULL);
							read(fd2[0], &array2[1],sizeof(int));	
							close(fd2[0]);
						        }
					
					if(pipe(fd3)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();

						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd3);}
						else{
							wait(NULL);
							read(fd3[0],&array2[2],sizeof(int));
							close(fd3[0]);
						        }
					
					if(pipe(fd4)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();	

						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd4);}
						else{
							wait(NULL);
							read(fd4[0],&array2[3],sizeof(int));
							close(fd4[0]);
						        }
					
					if(pipe(fd5)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();

						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd5);}
						else{
							wait(NULL);
							read(fd5[0],&array2[4],sizeof(int));
							close(fd5[0]);
						        }

						
					if(pipe(fd6)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();

						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd6);}
						else{
							wait(NULL);
							read(fd6[0],&array2[5],sizeof(int));
							close(fd6[0]);
						}
						        
		
					if(pipe(fd7)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();

		
						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd7);}
						else{
							wait(NULL);
							read(fd7[0],&array2[6],sizeof(int));
							close(fd7[0]);
						        }

					if(pipe(fd8)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();
	
						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd8);}
						else{
							wait(NULL);
							read(fd8[0],&array2[7],sizeof(int));
							close(fd8[0]);
						        }
	

					if(pipe(fd9)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();

						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd9);}
						else{
							wait(NULL);
							read(fd9[0],&array2[8],sizeof(int));
							close(fd9[0]);
						        }
						if(pipe(fd10)==-1)
					{
  						printf("pipe fialed");
  						  return 1;
					}
cpid=fork();

						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,fd10);}
						else{
							wait(NULL);
							read(fd10[0], &array2[9],sizeof(int));
						     }
 for(int j=0;j<10;j++){
    total_sum+=array2[j];
}
printf("total sum :%d\n",total_sum);
						
return 0;
}























    
 
    
