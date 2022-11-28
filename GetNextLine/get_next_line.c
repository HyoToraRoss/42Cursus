/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:51:59 by martavar          #+#    #+#             */
/*   Updated: 2022/11/28 17:54:02 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		i;
	int		len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	// read from fd and add to the stash
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	read(fd, buf, BUFFER_SIZE);
	// extract to stash to line
	// clean up stash
	line = ft_strdup(buf);
	return (line);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("the_text_file.txt", O_RDONLY);
	//while (1)
	//{
		line = get_next_line(fd);
		//if (line == NULL)
		//	break;
	printf("%s", line);
	free(line);
	//}
	close(fd);
	return (0);
}
