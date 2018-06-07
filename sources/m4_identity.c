/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m4_identity.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboissel <vboissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 01:54:44 by vboissel          #+#    #+#             */
/*   Updated: 2018/05/27 01:54:44 by vboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgeo.h"

t_matrix4	m4_identity()
{
	return ((t_matrix4){
		(t_vector4){(double)1.0, (double)0.0, (double)0.0, (double)0.0},
		(t_vector4){(double)0.0, (double)1.0, (double)0.0, (double)0.0},
		(t_vector4){(double)0.0, (double)0.0, (double)1.0, (double)0.0},
		(t_vector4){(double)0.0, (double)0.0, (double)0.0, (double)1.0}
	});
}