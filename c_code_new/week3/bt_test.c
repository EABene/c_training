#include <stdio.h>
#include <stdlib.h>

int main(void)
{
int *p;
p = malloc(sizeof(int));

printf("%p\n", p);

free(p);

return (0);
}
