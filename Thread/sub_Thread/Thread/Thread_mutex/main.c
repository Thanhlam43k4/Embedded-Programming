//int pthread_mutex_init(pthread_mutex_t *mutex,const pthread_mutexattr_t *attr);
//Dynamically initializing


//Destroy() return 0 if success >0 if failed
// int pthread_mutex_destroy(pthread_mutex_t *mutex); 


// //Lock/unlock Mutex return 0 if success >0 if failed
// int pthread_mutex_lock(pthread_mutex_t *mutex);
// int pthread_mutex_unlock(pthread_mutex_t *mutex);



// //Posix provides 2 additional function lock mutex below:
// int pthread_mutex_trylock(pthread_mutex_t *mutex);
// int pthread_mutex_timedlock(pthread_mutex_t *restrict mutex,const struct timespec *restrict abs_timeout);



#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

pthread_t threadid1;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;//Static initializing

#define Max_Thread 2

pthread_t tid[Max_Thread];
int counter = 0;

void *Thr_Fun(void *args)
{
    pthread_mutex_lock(&mutex);
    counter += 1;
    printf("Thread %d has started\n",counter);
    sleep(1);
    printf("Thread %d has finished\n",counter);
    pthread_mutex_unlock(&mutex);

    pthread_exit(NULL);

}
int main()
{
    int i =0 , ret = 0;
    for(int i =0 ;i  < Max_Thread;i++){
        ret = pthread_create(&tid[i],NULL,&Thr_Fun,NULL);
        if(ret != 0){
            printf("Thread [%d]created Error\n",i);
            return -1;
        }
    }
    pthread_join(tid[0],NULL);
    pthread_join(tid[1],NULL);

}






