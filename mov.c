/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mov.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 17:40:31 by anfiorit          #+#    #+#             */
/*   Updated: 2025/07/04 16:52:46 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int handle_input(int keycode, t_game *game)
{
    if (keycode == KEY_ESC)
        exit_game(game);
    if (keycode == KEY_W)
        move_player(game, 0, -1, 'W');
    else if (keycode == KEY_S)
        move_player(game, 0, 1, 'S');
    else if (keycode == KEY_A)
        move_player(game, -1, 0, 'A');
    else if (keycode == KEY_D)
        move_player(game, 1, 0, 'D');

    render_map(game);
    return (0);
}

void move_player(t_game *game, int x, int y, char direction)
{
    int     next_x;
    int     next_y;
    char    next_tile;

    next_x = player_x + x;
    next_y = player_y + y;
    next_tile = next_x + next_y
    if (next_tile == '1')
        return;
    if (next_tile == 'C')
        game->collectible--;
    if (next_tile == 'E')
    {
        if (game->collectible != 0)
            return;
        exit_game(game)
    }
    game->map[game->player_y][game->player_x] = '0';
    game->map[next_y][next_x] = 'P';
    game->player_x = next_x;
    game->player_y = next_y;
    game->direction = direction;
}
