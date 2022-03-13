/***
 * 
***/
/*** 
 * 
 * ***/
#include <sys/types.h>
#include <stdlib.h>
#include<sys/resource.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <errno.h>
#include <cstring>


int main() {
  int i = 0;
  struct rusage r_usage;
  while (++i <= 10) {
    void *m = malloc(20*1024*1024);
    memset(m,0,20*1024*1024);
    getrusage(RUSAGE_SELF,&r_usage);
    printf("Memory usage = %ld\n",r_usage.ru_maxrss);
    sleep (3);
  }
  printf("\nAllocated memory, sleeping ten seconds after which we will check again...\n\n");
  sleep (10);
  getrusage(RUSAGE_SELF,&r_usage);
  printf("Memory usage = %ld\n",r_usage.ru_maxrss);
  return 0;
}
