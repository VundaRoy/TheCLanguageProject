#include <stdio.h>

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

main()
{
  int i, x, n, vectors[100];
  for(i=0;i<100;i++)
    vectors[i] = i;
    
   x=24; n=100;
  printf("%d is found in binsearch...%d", x, binsearch(x,vectors,n));
    
   
}
