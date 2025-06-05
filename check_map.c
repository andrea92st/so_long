/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:23:05 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/05 15:01:48 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int check_player(int fd)
{
    char    *line;
    int i;
    int count_player;

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
        if (line[i] != '1')
            return(1);
        i++;
    }
    while(line = get_next_line(fd) != NULL)
    {
        last_line = line;
        while(line[i])
        {
            if(line[0] != '1' || line[len - 1] != '1')
                    return(1);
            i++
        }
    }
    i = 0;
    while(last_line[i])
    {
        if (last_line[i] != '1')
            return (1);
        i++;
    }
    return(0)
}