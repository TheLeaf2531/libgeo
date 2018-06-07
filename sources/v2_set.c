/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v2_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboissel <vboissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 00:59:35 by vboissel          #+#    #+#             */
/*   Updated: 2018/05/27 00:59:35 by vboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgeo.h"

t_vector2	v2_set(double x, double y)
{
	return ((t_vector2){x, y});
}

t_vector2i	v2i_set(int x, int y)
{
	return ((t_vector2i){x, y});
}

t_vector2l	v2l_set(long x, long y)
{
	return ((t_vector2l){x, y});
}