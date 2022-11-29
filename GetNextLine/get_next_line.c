/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:51:59 by martavar          #+#    #+#             */
/*   Updated: 2022/11/29 20:44:50 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;
	int			i;
	int			j;

	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0 || !buf)
		return (NULL);
	line = NULL;
	i = 0;
	j = 0;
	while (0 < read(fd, buf, BUFFER_SIZE) || buf)
	{
		line = ft_strjoin(line, buf);
		if (ft_strrchr(buf, '\n'))
		{
			while (buf[i] != '\n')
				buf[i] = '\0';
			while (buf[j] < i)
				buf[j++] = buf[i];
			buf[i++] = '\0';
			break ;
		}
	}
	return (line);
}

/*
int	main(void)
{
	int		fd;
	char	*line;

	fd = open("the_text_file.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	free(line);
	close(fd);
	return (0);
}
	if (buf == NULL)
		return (NULL);
*/
