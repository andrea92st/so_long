/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   floof_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/23 12:14:22 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/23 15:40:36 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char **copy_map(char **map)
{
    int     i;
    int     y;
    char    **copy;

    y = 0;
    while (map[y])
        y++;

    copy = malloc(sizeof(char *) * (height + 1));
    if (copy == NULL)
        return (NULL);
    while (i < height)
    {
        copy[i] = ft_strdup(map[i]);
        i++;
    }
    copy[i] = NULL;
    return (copy);
}
void flood_fill(char **map, int x, int y)
{
    if (map[y][x] == '1' || map[y][x] == 'X')
        return;

    if (map[y][x] != '0' && map[y][x] != 'C' && map[y][x] != 'E' && map[y][x] != 'P')
        return;

    map[y][x] = 'X';

    flood_fill(map, x + 1, y);
    flood_fill(map, x - 1, y);
    flood_fill(map, x, y + 1);
    flood_fill(map, x, y - 1);
}
int check_map_solvable(char **map)
{
    int y;
    int x;

    y = 0;
    while (map[y])
    {
        x = 0;
        while (map[y][x])
        {
            if (map[y][x] == 'C' || map[y][x] == 'E')
                return (0);
            x++;
        }
        y++;
    }
    return (1); 
}