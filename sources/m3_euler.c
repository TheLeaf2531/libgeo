/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m3_euler.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboissel <vboissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 04:14:28 by vboissel          #+#    #+#             */
/*   Updated: 2018/05/27 04:14:28 by vboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libgeo.h"

t_matrix3		m3_euleur(t_vector3 r)
{
	return ((t_matrix3){
		(t_vector3){
			(double)(cos(r.x) * cos(r.y)),
			(double)(cos(r.y) * sin(r.x)),
			(double)(-sin(r.y))
		},
		(t_vector3){
			(double)(cos(r.x) * sin(r.y) * sin(r.z) - cos(r.z) * sin(r.x)),
			(double)(cos(r.x) * cos(r.z) + sin(r.x) * sin(r.y) * sin(r.z)),
			(double)(cos(r.y) * sin(r.z))			
		},
		(t_vector3){
			(double)(cos(r.x) * cos(r.z) * sin(r.y) + sin(r.x) * sin(r.z)),
			(double)(cos(r.z) * sin(r.x) * sin(r.y) - cos(r.x) * sin(r.z)),
			(double)(cos(r.y) * cos(r.z))
		}
	});
}