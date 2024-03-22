#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (r);
	else
		return (nb * ft_recursive_factorial (nb -1));
}
int main(void)
{
    int a = 5;
    int b = ft_recursive_factorial(a);

    printf("%d\n", b); 

    return 0;
}
