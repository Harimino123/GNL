/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrasolof <hrasolof@student.42antanana      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 12:12:16 by hrasolof          #+#    #+#             */
/*   Updated: 2024/04/27 12:22:39 by hrasolof         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char *dest, char const *src)
{
	char	*p;
	size_t	src_len;
	size_t	dest_len;
	size_t	i;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	p = (char *)malloc(sizeof(char) * (src_len + dest_len + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (i < dest_len)
	{
		p[i] = dest[i];
		i++;
	}
	i = 0;
	while (i < src_len)
	{
		p[dest_len + i] = src[i];
		i++;
	}
	p[src_len + dest_len] = '\0';
	return (free(dest), p);
}

char	*ft_strdup(const char *src)
{
	char	*p;
	size_t	len;
	size_t	i;

	len = ft_strlen(src);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (p == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	src = NULL;
	return (p);
}

int	index_of_newline(char *buf)
{
	int	i;

	i = 0;
	while (buf[i])
	{
		if (buf[i] == '\n')
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
