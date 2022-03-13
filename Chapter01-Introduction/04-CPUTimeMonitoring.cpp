#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<sys/resource.h>
       
int getcputime();
   
int main(void)
{
  short int i, n, a;
  /*double*/long t;
  
  n = 13;
  printf("The 7-times Table\n");

  for(i=1;i<n;i++)
    {
      a = (i * 7);
      printf("\n%d\t%d", i, a);
    }
       
  printf("\n");
  t = getcputime();
  //printf("The total CPU time comsumed by the current process is: %lf (seconds)\n", t);
  printf("%ld\n",t);
  return 0;
}

int getcputime(void)        
{ 
  //struct timeval tim;        
  struct rusage ru;
    
  getrusage(RUSAGE_SELF, &ru);        
  //tim=ru.ru_utime;
  long t = ru.ru_ixrss;

  //double t=(double)tim.tv_sec + (double)tim.tv_usec / 1000000.0;        
  
  //tim=ru.ru_stime;        
  
  //t+=(double)tim.tv_sec + (double)tim.tv_usec / 1000000.0;        
  
  return t;
}