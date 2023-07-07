#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct queueDS {
    int fp;
    int bp;
    int arrSize;
    int *arr;
};

bool isFull(struct queueDS *q) {
    if (q->bp == (q->arrSize - 1)) {
        return true;
    }
    else {
        return false;
    }
}

bool isEmpty(struct queueDS *q) {
    if (q->fp == q->bp) {
        return true;
    }
    else {
        return false;
    }
}

void showQueue(struct queueDS *q) {
    for (int i = (q->fp + 1); i <= (q->bp); i++) {
        printf(" %d ", q->arr[i]);
    }
}

void enqueue(struct queueDS *q, int data) {
    if (isFull(q)) {
        printf("Queue is full. Can't enqueue new element.\n");
        return;
    }
    else {
        q->bp++;
        q->arr[q->bp] = data;
        printf("Enqueued: %d\n", q->arr[q->bp]);
        return;
    }
}

int dequeue(struct queueDS *q) {
    if (isEmpty(q)) {
        printf("Queue is empty. Can't dequeue element.\n");
        return -1;
    }
    int dequeued = q->arr[q->fp + 1];
    q->fp++;
    return dequeued;
}

int main() {
    struct queueDS *q = (struct queueDS *)malloc(sizeof(struct queueDS));
    q->fp = -1;
    q->bp = -1;
    q->arrSize = 10;
    q->arr = (int *)malloc(q->arrSize * sizeof(int));

    enqueue(q, 4);
    enqueue(q, 5);
    enqueue(q, 6);
    enqueue(q, 7);
    enqueue(q, 8);
    enqueue(q, 9);

    printf("Queue is: \n");
    showQueue(q);

    printf("\nDequeued: %d\n", dequeue(q));
    enqueue(q, 1);
    enqueue(q, 2);
    enqueue(q, 3);
    enqueue(q, 4);
    enqueue(q, 5);

    printf("Queue is: \n");
    showQueue(q);

    free(q->arr);
    free(q);

    return 0;
}
