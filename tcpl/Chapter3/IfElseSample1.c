#include <stdio.h>
#include <time.h>

int binsearch(int x, int v[], int n)
{
  int low, high, mid;

  low = 0;
  high = n -1;
  while (low <= high){
    mid = (low+high) /2;
    if(x < v[mid])
      high = mid -1;
    else if(x > v[mid])
      low = mid+1;
    else /* found match*/
      return mid;
  }
  return -1;  /* no match*/
}

double measure_time(int x, int v[], int n, int *result)
{
   clock_t start, end;
   start = clock();
   *result = binsearch(x,v,n);
   end = clock();
   return ((double)(end - start))/CLOCKS_PER_SEC;
}

main()
{

int max = 100000000;  
int i, x, n, vectors[max], result;
    double time_taken;

    for (i = 0; i < max; i++)
        vectors[i] = i;

    x = 99090000;
    n = max;

    time_taken = measure_time(x, vectors, n, &result);

    printf("%d found at index %d\n", x, result);
    printf("Time taken: %f seconds\n", time_taken);

    return 0;

   
}
