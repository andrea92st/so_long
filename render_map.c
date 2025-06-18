/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 16:07:22 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/18 17:57:01 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    load_assets(t_game *game)
{
    int h;
    int w;
    
    game->wall.img = mlx_xpm_file_to_image(game->mlx, "assets/wall.xpm", &h ,&w);
    game->ground.img = mlx_xpm_file_to_image(game->mlx, "assets/ground.xpm", &h ,&w);
    game->item.img = mlx_xpm_file_to_image(game->mlx, "assets/item.xpm", &h ,&w);
    game->exit.img = mlx_xpm_file_to_image(game->mlx, "assets/exit.xpm", &h ,&w);
}

void fill_tile(t_game game, int x, int y, char tile)
{
    int px;
    int py;

    px = (x * TILE_SIZE);
    py = (y * TILE_SIZE);
    if (tile == '1')
        mlx_put_image_to_window(game->mlx, game->win, game->wall.img, px, py);
    else 
    {
        mlx_put_image_to_window(game->mlx, game->win, game->groung.img, px, py);
        else if (tile == 'E')
            mlx_put_image_to_window(game->mlx, game->win, game->exit.img, px, py);
        else if (tile == 'P')
            mlx_put_image_to_window(game->mlx, game->win, game->player.img, px, py);
        else if (tile == 'C')
            mlx_put_image_to_window(game->mlx, game->win, game->item.img, px, py);
    }
}

void render_map(t_game *game)
{
    int x;
    int y;

    y = 0;
    while(game->map[y])
    {
        x = 0;
        while(game->map[y][x])
        {
            fill_tile(game, x, y, game->map[y][x]);
            x++;
        }
        y++;
    }
}

