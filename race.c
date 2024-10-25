#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int sharedCounter = 0;

void *incrementCounter() {
    for (int i = 0; i < 10000; i++) {
        sharedCounter++;
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, incrementCounter, NULL);
    pthread_create(&thread2, NULL, incrementCounter, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Final counter value: %d\n", sharedCounter);
    return 0;
}

