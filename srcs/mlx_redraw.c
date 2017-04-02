/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_redraw.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbauguen <vbauguen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 13:50:04 by vbauguen          #+#    #+#             */
/*   Updated: 2017/02/04 13:50:05 by vbauguen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "raystruct.h"

void			redraw(t_gen *d, t_mlx *m, int loading)
{
	if (loading == 1)
		m->menu.loading = MENU_LOAD_WAIT_BEFORE_LOAD - 1;
	m->menu.draw = -1;
	ft_strdel(&d->sc->data);
}
