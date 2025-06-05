/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anfiorit <anfiorit@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:36:12 by anfiorit          #+#    #+#             */
/*   Updated: 2025/06/05 15:01:50 by anfiorit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main (int argc, char **argv)
{
    int i;
    
    if (argc != 1)
        return(ft_putstr("error, nombre d'argument invalide"));
    if (gamberge(argv[1]) == 1)
        return(ft_putstr("error, probleme de map franjo"));




        
}
