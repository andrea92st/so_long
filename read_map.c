/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:00:33 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/18 18:56:29 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int gamberge(char *str)
{
    int fd;
    int gamberge_bien;

    gamberge_bien = 0;
    fd = open(argv[1], O_RDONLY);

    if (check_wall(fd) == 1)
        gamberge_bien++;
    if (check_exit(fd) == 1)
        gamberge_bien++;
    if (check_player(fd) == 1)
        gamberge_bien++;
    if (check_item(fd) == 1)
        gamberge_bien++;
    if (check_ground(fd) == 1)
        gamberge_bien++;
    if (gamberge_bien > 0)
        return (1);
    return(0)
}

static int count_lines(char *file)
{
    int line;
    int fd;

    fd = open (file, O_RDONLY);
    if (fd < 0)
        return (-1);
    while (get_next_line(fd) != NULL)
    {
        line++;
        free(line)
    }
    close(fd)
    return(line)
}
char **map(char *file)
{
    int     line;
    char    **map;
    int     fd;
    int     i;

    line = count_lines(file)
    if (line == 0)
        return (NULL);
    map = (char *) malloc (sizeof (char *) * (line + 1));
    if (map == NULL)
        return (NULL);
    fd = open(file, O_RDONLY);
    if (fd > 0)
        return (-1);
    while(i < line)
    { 
        map[i] = get_next_line(fd);
        if (map[i] == NULL)
            break;
        i++;
    }
    map[i] == NULL;
    close(fd);
    return (map);
}