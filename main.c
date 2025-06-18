/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:36:12 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/18 17:58:08 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    create_game(t_game *game)
{
    game->mlx = mlx_init();
    game->win = mlx_new_window(game->mlx, 640, 820, "So long");
    load_assets(game);
    render_map(game)

}

int main (int argc, char **argv)
{
    int i;
    
    if (argc != 2)
        return(ft_putstr("error, nombre d'argument invalide"));
    if (gamberge(argv[1]) == 1)
        return(ft_putstr("error, probleme de map franjo"));




        
}
