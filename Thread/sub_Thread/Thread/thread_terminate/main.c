#include<pthread.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

pthread_t thread_id1,thread_id2,thread_id3;

void *thr_handler1(void *args)
{
    printf("Im the thread_handler1\n\n");
    //pthread_exit(NULL);
    printf("The msg after call pthread_exit!!!\n\n\n");
}
void *thr_handler2(void *args)
{   
    sleep(5);
    while(1){
        printf("Im the thread_handler2\n");
        sleep(1);
    }
}
static void *thr_handler3(void *args)
{
    pthread_detach(pthread_self());
    //sleep(2);


}
int main()
{
    int ret,counter = 0;
    if(ret = pthread_create(&thread_id1,NULL,&thr_handler1,NULL)){
        printf("pthread_create() error number = %d\n",ret);                                                  
               
    }
    sleep(2);
    if(ret = pthread_create(&thread_id2,NULL,&thr_handler2,NULL)){
        printf("pthread_create() error number = %d\n",ret);                                                  
        
    }        
    // sleep(7);     

    // pthread_join(thread_id2,NULL);   
    printf("Thread_Id2 termination\n\n");                                                                                                                      
    // exit(0);
    //pthread_cancel(thread_id2);
    while(1)
    {   
        if(ret =pthread_create(&thread_id3,NULL,&thr_handler3,NULL)){
            printf("pthread_create() error number =%d\n",ret);
            break;
        }
        counter++;
        // pthread_join(thread_id3,NULL);
        if(counter % 1000 == 0){
            printf("Thread Create %d\n",counter);
        }
    }
}       