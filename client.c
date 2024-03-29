#include <stdio.h>
#include <stdlib.h>

#include "client.h"

static void client_exit_error(char *msg);

static void client_exit_error(char *msg)
{
    fprintf(stderr, "Error: %s.\n", msg);
    exit(EXIT_FAILURE);
}

Client *mk_client(int id, int items, int entrance)
{
    Client *c = (Client *)malloc(sizeof(Client));
    if (c == NULL)
        client_exit_error("sem memoria");

    c->id = id;
    c->items = items;
    c->entrance = entrance;

    return c;
}

int id(Client *c)
{
    if (c == NULL)
        client_exit_error("cliente nulo");

    return c->id;
}

int items(Client *c)
{
    if (c == NULL)
        client_exit_error("cliente nulo");

    return c->items;
}

int entrance(Client *c)
{
    if (c == NULL)
        client_exit_error("cliente nulo");

    return c->entrance;
}

void print_client(Client *c)
{
    if (c == NULL)
        client_exit_error("cliente nulo");

    printf("Cliente %d com %d artigos e tempo de entrada %d\n", c->id, c->items, c->entrance);
}
