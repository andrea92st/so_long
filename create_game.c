/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_game.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 12:33:51 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/05 15:03:36 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void    load_assets(t_game *game)
{
    int h;
    int w;
    
    game->wall.img = mlx_xpm_file_to_image(game->mlx "assets/wall", &h ,&w);
    game->ground.img = mlx_xpm_file_to_image(game->mlx "assets/ground", &h ,&w);
    game->player.img = mlx_xpm_file_to_image(game->mlx "assets/player", &h ,&w);
    game->item.img = mlx_xpm_file_to_image(game->mlx "assets/item", &h ,&w);
    game->exit.img = mlx_xpm_file_to_image(game->mlx "assets/exit.xpm", &h ,&w);

}


void    create_game(t_game *game)
{
    game->mlx = mlx_init();
    game->win = mlx_new_window(game->mlx, 640, 820, "So long");
    load_assets(game);




}