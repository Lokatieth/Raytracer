/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_menu_gen_btn.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 13:49:12 by vbauguen          #+#    #+#             */
/*   Updated: 2017/02/04 13:49:12 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raystruct.h"

void			menu_gen_data_btn(void *gen, void *mlx)
{
	redraw(gen, mlx, 0);
}

void			menu_gen_bmp_btn(void *gen, void *mlx)
{
	t_mlx	*m;
	t_gen	*d;

	m = mlx;
	d = gen;
	print_bmp(d->sc->data, d);
}
