/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gingembre.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 13:22:03 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/16 17:31:17 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int gamberge(char *str)
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
