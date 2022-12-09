/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:51:59 by martavar          #+#    #+#             */
/*   Updated: 2022/12/09 11:54:36 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buf[BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0 || fd < 0)
	{
		while (buf[i])
			buf[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buf[0] || 0 < read(fd, buf, BUFFER_SIZE))
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
