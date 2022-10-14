/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 17:46:42 by martavar          #+#    #+#             */
/*   Updated: 2022/10/14 17:46:43 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

The strcpy ( ) function is designed to work exclusively with strings. It copies each byte of the source string to the destination string and stops when the terminating null character (\0) has been moved. On the other hand, the memcpy ()  function is designed to work with any type of data.

Because not all data ends with a null character, you must provide the memcpy ( ) function with the number of bytes you want to copy from the source to the destination. 