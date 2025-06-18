/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 16:23:05 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/18 19:25:58 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"so_long.h"

int check_player(char **map)
{
    int x;
    int y;
    int count;

    count = 0;
    y = 0;
    while (map[y])
    {
        x = 0;
        while(map[x])
        {        
            if (map[y][x] == 'P')
                count++;
            x++;
        }
        y++;
    }
    return(count);
}

int check_exit (char **map)
{
    int y;
    int x;
    int count;

    count = 0;
    y = 0;
    while (map[y])
    {
        x = 0;
        while(map[x])
        {        
            if (map[y][x] == 'E')
                count++;
            x++;
        }
        y++;
    }
    return(count);
}

int check_item(int fd)
{
    int y;
    int x;
    int count;

    count = 0;
    y = 0;
    while (map[y])
    {
        x = 0;
        while(map[x])
        {        
            if (map[y][x] == 'C')
                count++;
            x++;
        }
        y++;
    }
    return(count);
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
int check_wall(char **map)
{
    int x;
    int y;
    int count;

    count = 0;
    x = 0;
    while (map[0])
    {
        if (map[0][x] != 1)
            count++;
            x++;
    }
    x = 0;
    while ()





}