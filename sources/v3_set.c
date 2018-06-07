/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   v3_set.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboissel <vboissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 01:18:06 by vboissel          #+#    #+#             */
/*   Updated: 2018/05/27 01:18:06 by vboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgeo.h"

t_vector3	v3_set(double x, double y, double z)
{
	return ((t_vector3){x, y, z});
}

t_vector3i	v3i_set(int x, int y, int z)
{
	return ((t_vector3i){x, y, z});
}

t_vector3l	v3l_set(long x, long y, long z)
{
	return ((t_vector3l){x, y, z});
}