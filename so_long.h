/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 17:12:34 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/23 19:41:18 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <fcntl.h>
# include <stdlib.h> 
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <mlx.h>

# define TILE_SIZE 32

typedef struct s_sprite_player {
    void    *up_closed;
    void    *down_closed;
    void    *right_closed;
    void    *left_closed;
    void    *up_open;   
    void    *down_open;
    void    *right_open;
    void    *left_open;
}   t_sprite_player;

typedef struct s_game {
    void        *mlx;
    void        *win;
    
    void            *item_img;
    void            *exit_img;
    void            *wall_img;
    void            *ground_img;

    t_sprite_player player;
    char    **map;

    int             player_x;
    int             player_y;

    int             nb_collectibles;
    int             anim_frame;
    int             direction;
}   t_game;


typedef struct s_pnj {
    int     x;
    int     y;
    int     px_x;
    int     px_y;
    int     dir_x;
    int     dir_y;
    int     frames;
    void    *sprites[2];
}   t_pnj;


#endif