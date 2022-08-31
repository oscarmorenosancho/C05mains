#include<stdlib.h>
#include<stdio.h>

int ft_fibonacci(int index);

int main(int argc, char const *argv[])
{
    int nb;
    int res;

    nb = 2;
    if (argc > 1)
        nb = atoi(argv[1]);
    res = ft_fibonacci(nb);
    printf("fibonacci de %d = %d\n", nb, res);
    return (0);
}
