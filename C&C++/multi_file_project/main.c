#include <stdio.h>
#include <string.h>
#include "util.h"


#define NUMVALS 10
int main(){
 double vals[NUMVALS] = {1.2, 5, 13.0, 0.005, 23.5, 94.6, 6, 2.4, 4.9, 0.6};

  person me;
  strcpy(me.name,"batman");
  me.age = 35;

  printf("mean: %lf \n",getmean(vals,NUMVALS));
  print_person_info(&me);

  return 0  ;
}

