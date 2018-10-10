#include<stdio.h>
#include<string.h>
#include<stdlib.h>



int sum1=0;
int start=1;
int end=100;

void sumarray(int *array,int start,int end){
   int sum=0;
   for(int i=start;i<=end;i++){
	array[i]=1;
 	 sum=sum+array[i];
      }
      sum1=sum1+sum;
      start=end;
       end+=100;
	printf("%d",sum1);
	printf("\n");
}

int main(){
               int array[1000];
               int cpid=fork();
    						if(cpid<0)
						{
  						   printf("fialed");
  							exit(-1);
						}

						else if(cpid==0)
						{	sumarray(array,start,end);
 							cpid=fork();
						if(cpid<0)
						{

						   printf("fialed");
  							exit(-1);

						}
						else if(cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();
						if(cpid<0)
						{

						    printf("fialed");
  							exit(-1);

						}
						else if(cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

						if(cpid<0)
						{

						    printf("fialed");
  							exit(-1);

						}

						else if(cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

							if(cpid<0)
						{

					            printf("fialed");
  							exit(-1);

						}
						else if(cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

						if(cpid<0)
						{

							printf("fialed");
  							exit(-1);

						}
						else if(cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

						if(cpid<0)
						{

						    printf("fialed");
  							exit(-1);

						}
						else if (cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

						if(cpid<0)
						{

						    printf("fialed");
  							exit(-1);

						}
						else if (cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

						if(cpid<0)
						{

						     printf("fialed");
  							exit(-1);

						}
						else if (cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

						if(cpid<0)
						{

						    printf("fialed");
 							 exit(-1);

						}
						else if (cpid==0)
						{

 							sumarray(array,start,end);
 							cpid=fork();

						}
			               }	
		                    }
				 }
			       }
			    }
			}
		    }
		}
	      }	
	    


return 0;
}























    
 
    
