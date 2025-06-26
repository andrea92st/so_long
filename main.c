/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:36:12 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/26 11:47:57 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    create_game(t_game *game)
{
    game->mlx = mlx_init();
    game->win = mlx_new_window(game->mlx, 640, 820, "So long");
}

int main(int argc, char **argv)
{
    t_game game;
    
    if (argc != 2)
        return(ft_putstr("error, nombre d'argument invalide"));

    game.map = read_map(argv[1]);
    create_game(&game);
    load_assets(&game);
    render_map(&game);
    mlx_loop(game.mlx)
}

// mlx_loop_hook(game->mlx, animate, &game);