/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:12:34 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/05 15:02:09 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H


# include <fcntl.h>
# include <stdlib.h> 
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_game
{
    void    *mlx;
    void    *win;
    
    void    *player.img;
    void    *item.img;
    void    *exit.img;
    void    *wall.img;
    void    *ground.img;

    char    **map;

    int     player_x;
    int     player_y;

    int     nb_collectibles;
    t_game;
}


#endif