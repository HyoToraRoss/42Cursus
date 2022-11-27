/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 17:51:59 by martavar          #+#    #+#             */
/*   Updated: 2022/11/27 18:35:13 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_limpamemo(char *buff)
{
	int	i;
	int	is_nline;
	int	j;

	i = 0;
	j = 0;
	is_nline = 0;
	while (buff[i])
	{
		if (is_nline)
			buff[j++] = buff[i];
		if (buff[i] == '\n')
			is_nline = 1;
		buff[i++] = '\0';
	}
	return (is_nline);
}

size_t	ft_strlen(const char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

char	*get_next_line(int fd)
{
	static char	*buff;
	char		*line;
	int			i;

	i = 0;
	if (BUFFER_SIZE < 1 || read(fd, 0, 0) < 0)
	{
		while (buff[i])
			buff[i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buff || read(fd, buff, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buff);
		if (ft_limpamemo(buff))
			break ;
	}
	return (line);
}

int	main(void)
{
	int		fd;
	char	*line;

	fd = open("the_text_file.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s", line);
	close(fd);
	return (0);
}
