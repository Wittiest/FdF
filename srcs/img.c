/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   img.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpearson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 06:22:30 by dpearson          #+#    #+#             */
/*   Updated: 2017/11/08 06:22:30 by dpearson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"
#include <stdio.h>
void	mlx(t_img *img)
{
	img->mlx = mlx_init();
	img->win = mlx_new_window(img->mlx, WIDTH, HEIGHT, "FDF");
	//hook up key presses
	draw(img);
	mlx_loop(img->mlx);
}