/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:51:59 by martavar          #+#    #+#             */
/*   Updated: 2022/12/07 16:27:12 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*buf;
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
		return (NULL);
	line = NULL;
	buf = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (buf == NULL)
		return (NULL);
	while (0 < read(fd, buf, BUFFER_SIZE) || buf)
	{
		line = ft_strjoin(line, buf);
		if (ft_clean(buf))
			break ;
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
*/

