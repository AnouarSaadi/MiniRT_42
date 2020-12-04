/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaadi <asaadi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/28 14:41:11 by asaadi            #+#    #+#             */
/*   Updated: 2020/11/12 09:35:32 by asaadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H

#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <unistd.h>
#define BUFFER_SIZE 100

size_t ft_strlen(const char *s);
char *ft_strchr(const char *s, int c);
char *ft_strdup(const char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strjoin(char const *s1, char const *s2);
int get_next_line(int fd, char **line);

#endif
