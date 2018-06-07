/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v4_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboissel <vboissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 01:26:01 by vboissel          #+#    #+#             */
/*   Updated: 2018/05/27 01:26:01 by vboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgeo.h"

t_vector4	v4_set(double x, double y, double z, double w)
{
	return ((t_vector4){x, y, z, w});
}

t_vector4i	v4i_set(int x, int y, int z, int w)
{
	return ((t_vector4i){x, y, z, w});
}

t_vector4l	v4l_set(long x, long y, long z, long w)
{
	return ((t_vector4l){x, y, z, w});
}
