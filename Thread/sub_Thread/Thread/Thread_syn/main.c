#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>

#define Max_Thread 2

pthread_t tid[Max_Thread];
int counter = 0;

void *Thr_Fun(void *args)
{
    counter += 1;
    printf("Thread %d has started\n",counter);
    sleep(1);
    printf("Thread %d has finished\n",counter);

}
int main()
{
    int i =0 , ret = 0;
    for(int i =0 ;i  < Max_Thread;i++){
        ret = pthread_create(&tid[i],NULL,&Thr_Fun,NULL);
        if(ret != 0){
            printf("Thread [%d]created Error\n",i);
        }
    }
    pthread_join(tid[0],NULL);
    pthread_join(tid[1],NULL);

}

