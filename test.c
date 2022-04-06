#include "libft.h"

int	main(void)
{
	char s[] = "this is a test string";
	char *s2;

	s2 = ft_strdup(s);
	printf("%s\n", s2);
	printf("%d\n", ft_strlen(s2));
}
