/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yasser <marvin@42.fr>                        +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/23 15:18:31 by yasser        #+#    #+#                 */
/*   Updated: 2023/12/14 13:38:15 by yshalash      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strdup(const char *src);
const char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *s1, const void *s2, size_t n);
void		*ft_realloc(void *ptr, size_t size);

#endif
