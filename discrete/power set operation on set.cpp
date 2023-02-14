#include <stdio.h>
#include <math.h>
  
 voidprintPowerSet(char*set, intset_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned intpow_set_size = pow(2, set_size);
    intcounter, j;
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
      for(j = 0; j < set_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            printf("%c", set[j]);
       }
       printf("n");
    }
}
/*Driver program to test printPowerSet*/
intmain()
{
    charset[] = {'a','b','c'};
    printPowerSet(set, 3);
    getchar();
    return0;}
