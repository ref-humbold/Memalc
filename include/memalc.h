#ifndef MEMALC_H
#define MEMALC_H

#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/types.h>

void * malloc(size_t size);

void * calloc(size_t count, size_t size);

void * realloc(void * ptr, size_t size);

void free(void * ptr);

void print_all_memory();

void print_free_memory();

#endif
