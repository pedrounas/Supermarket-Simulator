#ifndef CASHIER_H
#define CASHIER_H

#include <stdlib.h>

#include "queue.h"

typedef struct
{
    Queue *queue;
    int eta;
    int numberOfClients;
    int products;
    int waitingTime;
    int id;
    int speed;
} Cashier;

int randomNumber();
void updateEta(Cashier *c, int n);
void addClient(Cashier *c);
void updateProducts(Cashier *c, int n);
void updateWaitingTime(Cashier *c, int n);
void removeClient(Cashier *c);
Queue *getQueue(Cashier *c);
int getId(Cashier *c);
int getEta(Cashier *c);
int getClients(Cashier *c);
int getProducts(Cashier *c);
int getWaitingTime(Cashier *c);
int getSpeed(Cashier *c);
Bool isEmpty(Cashier *c);
void printCashier(Cashier *c);

#endif