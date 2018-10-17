#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

int data[1000];
int chunk_size=100;

void *Add(void *args){
	int start=(int) args;
	int end=start+chunk_size;
	int sum=0;
	int i=0;
	for(i=0;i<end;i++){
	   sum=sum+data[i];

}
return ((void*)sum);
}

 int main()
{	int status_t1,status_t2,status_t3,status_t4,status_t5,status_t6,status_t7,status_t8,status_t9,status_t10;
	pthread_t thread_t1, thread_t2, thread_t3, thread_t4, thread_t5, thread_t6, thread_t7, thread_t8, thread_t9, thread_t10;
	int i;
	for(i=0;i<1000;i++){
		data[i]=i;
	}
	pthread_create(&thread_t1,NULL,Add,(void*)(0*chunk_size));
	pthread_create(&thread_t2,NULL,Add,(void*)(1*chunk_size));
	pthread_create(&thread_t3,NULL,Add,(void*)(2*chunk_size));
	pthread_create(&thread_t4,NULL,Add,(void*)(3*chunk_size));
	pthread_create(&thread_t5,NULL,Add,(void*)(4*chunk_size));
	pthread_create(&thread_t6,NULL,Add,(void*)(5*chunk_size));
	pthread_create(&thread_t7,NULL,Add,(void*)(6*chunk_size));
	pthread_create(&thread_t8,NULL,Add,(void*)(7*chunk_size));
	pthread_create(&thread_t9,NULL,Add,(void*)(8*chunk_size));
	pthread_create(&thread_t10,NULL,Add,(void*)(9*chunk_size));
	
	pthread_join(thread_t1,(void**) & status_t1);
	pthread_join(thread_t2,(void**) & status_t2);
	pthread_join(thread_t3,(void**) & status_t3);
	pthread_join(thread_t4,(void**) & status_t4);
	pthread_join(thread_t5,(void**) & status_t5);
	pthread_join(thread_t6,(void**) & status_t6);
	pthread_join(thread_t7,(void**) & status_t7);
	pthread_join(thread_t8,(void**) & status_t8);
	pthread_join(thread_t9,(void**) & status_t9);
	pthread_join(thread_t10,(void**) & status_t10);
	
	int sum1=status_t1+status_t2+status_t3+status_t4+status_t5+status_t6+status_t7+status_t8+status_t9+status_t10;
	printf("\nSum is %d\n",sum1);
	
return 0;

}


