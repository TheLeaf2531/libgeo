/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m3_identity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboissel <vboissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 01:43:10 by vboissel          #+#    #+#             */
/*   Updated: 2018/05/27 01:43:10 by vboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgeo.h"

t_matrix3	m3_identity(void)
{
	return((t_matrix3){
		(t_vector3){(double)1.0, (double)0.0, (double)0.0},
		(t_vector3){(double)0.0, (double)1.0, (double)0.0},
		(t_vector3){(double)0.0, (double)0.0, (double)1.0}
	});
}