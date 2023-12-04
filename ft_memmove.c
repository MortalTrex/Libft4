#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
  unsigned char * destres = (unsigned char *)dest;
  unsigned char * srcres = (unsigned char *)src;
  unsigned int i;

  i = 0;
  if (dest > src)
  {
    while (n > 0)
    {
      n--;
      destres[n] = srcres[n];
    }
  }
  while (i < n)
  {
    destres[i] = srcres[i];
    i++;
  }
  return(destres);
}

/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

    for( int i=0; i<10; i++ )
        printf( "%d ", data[i] );
    printf("\n");

    void * source = (void *) data;
    void * destination = (void *) ( data + 1 );
    size_t size = sizeof( int ) * 10;
    memmove( destination, source, size );

    data[0] = 10;
    for( int i=0; i<10; i++ ) {
        printf("%d ", data[i]);
    }
}
*/
