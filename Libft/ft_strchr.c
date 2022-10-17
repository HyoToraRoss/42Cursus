/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 21:43:07 by martavar          #+#    #+#             */
/*   Updated: 2022/10/17 22:19:07 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "It is like this";

	char *c = ft_strchr(str, 'l');
	printf("%s\n", c);

	char *fail = ft_strchr(str, '@');
	if (fail == NULL)
		printf("Could not find @!\n");
	return (0);
}
//The strchr() function locates the first occurrence of c (converted to a char)
// in the string pointed to by s.  The terminating null character is considered
// to be part of the string; therefore if c is ‘\0’, the functions locate the 
//terminating ‘\0’.  The functions strchr() and strrchr() return a pointer to 
//the located character, or NULL if the character does not appear in the string.