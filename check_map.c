/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:23:05 by anfiorit          #+#    #+#             */
/*   Updated: 2025/05/30 16:15:26 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int check_player(int fd)
{
    char    *line;
    int i;
    int count_player;

    if (*map == NULL)
        return (NULL);
    count_player = 0;
    while ((line = get_next_line(fd)) != NULL)
    {
        i = 0;
        while(line[i])
        {        
            if (line[i] == 'P')
                count_player++;
            i++;
        }
    }
    if (count_player != 1)
        return (1);
    return(0);
}

int check_exit (int fd)

{
    char    *line;
    int i;
    int count_exit;

    if (*map == NULL)
        return (NULL);
    count_exit = 0;
    while ((line = get_next_line(fd)) != NULL)
    {
        i = 0;
        while(line[i])
        {        
            if (line[i] == 'E')
                count_exit++;
            i++;
        }
    }
    if (count_exit != 1)
        return (1);
    return(0);
}

int check_item(int fd)

{
    char    *line;
    int i;
    int count_item;

    if (*map == NULL)
        return (NULL);
    count_exit = 0;
    while ((line = get_next_line(fd)) != NULL)
    {
        i = 0;
        while(line[i])
        {        
            if (line[i] == 'C')
                count_item++;
            i++;
        }
    }
    if (count_exit < 1)
        return (1);
    return(0);
}

int check_wall(int fd)
{
    char    *last_line;
    char    *line;
    int i;
    int len;

    i = 0;
    line = get_next_line(fd);
    len = ft_strlen(line);
    while(line[i])
    {
        if (line[i] != 1)
            return(1);
        i++;
    }
    while(line = get_next_line(fd) != NULL)
    {
        last_line = line;
        if(line[0] != 1 || line[len - 1] != 1)
                return(1);
    }
    i = 0;
    while(line[i])
    {
        if (line[i] != 1)
            return(1);
        i++;
    }
}