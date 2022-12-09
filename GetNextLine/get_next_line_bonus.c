/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:02:04 by martavar          #+#    #+#             */
/*   Updated: 2022/12/09 12:35:10 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buf[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	int			i;

	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0 || fd >= FOPEN_MAX)
	{
		while (fd >= 0 && fd <= FOPEN_MAX && buf[fd][i])
			buf[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while ((buf[fd][0] || 0 < read(fd, buf[fd], BUFFER_SIZE)))
	{
		line = ft_strjoin(line, buf[fd]);
		if (ft_clean(buf[fd]))
			break ;
	}
	return (line);
}
