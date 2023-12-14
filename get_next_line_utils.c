/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: yasser <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/23 15:18:07 by yasser        #+#    #+#                 */
/*   Updated: 2023/12/14 14:28:16 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char	*ft_strdup(const char *src)
{
	char	*dst;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	dst = malloc(i + 1);
	if (dst == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

const char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return (&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return (&s[i]);
	return (NULL);
}

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = '\0';
		i++;
	}
}
void *malloc_size(void *ptr) {
    if (ptr == NULL) {
        return NULL; // corrected return type
    }

    size_t header_size = sizeof(size_t);
    size_t usable_size = *(size_t *)ptr - header_size;

    return (void *)usable_size;
}

void *ft_realloc(void *ptr, size_t new_size) {
    if (ptr == NULL) {
        return NULL;
    }

    size_t original_size = (size_t)malloc_size(ptr);

    if (new_size > original_size) {
        void *new_ptr = malloc(new_size);
        if (new_ptr == NULL) {
            // Handle malloc failure
            return NULL;
        }
        memcpy(new_ptr, ptr, original_size);
        free(ptr);
        return new_ptr;
    }

    // If new_size is less than or equal to original_size, return the original pointer
    return ptr;
}