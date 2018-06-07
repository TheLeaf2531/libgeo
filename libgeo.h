/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libgeo.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboissel <vboissel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/27 00:52:33 by vboissel          #+#    #+#             */
/*   Updated: 2018/05/27 00:52:33 by vboissel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBGEO_H
# define LIBGEO_H
# define PI	3.14159265359

# include <math.h>

typedef struct	s_vector2i
{
	int		x;
	int		y;
}				t_vector2i;

typedef struct	s_vector2
{
	double		x;
	double		y;
}				t_vector2;

typedef struct	s_vector2l
{
	long		x;
	long		y
}				t_vector2l;

typedef struct	s_vector3
{
	double		x;
	double		y;
	double		z;
}				t_vector3;

typedef struct	s_vector3i
{
	int			x;
	int			y;
	int			z;
}				t_vector3i;

typedef struct	s_vector3l
{
	long		x;
	long		y;
	long		z;
}				t_vector3l;

typedef struct	s_vector4
{
	double		x;
	double		y;
	double		z;
	double		w;
}				t_vector4;

typedef struct	s_vector4i
{
	int			x;
	int			y;
	int			z;
	int			w;
}				t_vector4i;

typedef struct	s_vector4l
{
	long		x;
	long		y;
	long		z;
	long		w;
}				t_vector4l;

typedef	struct	s_matrix3
{
	t_vector3	l0;
	t_vector3	l1;
	t_vector3	l2;
}				t_matrix3;

typedef struct	s_matrix4
{
	t_vector4	l0;
	t_vector4	l1;
	t_vector4	l2;
	t_vector4	l3;
}				t_matrix4;

typedef struct	s_line
{
	t_vector2i	start;
	t_vector2i	end;
}				t_line;

typedef struct	s_triangle
{
	t_vector4l	p0;
	t_vector4l	p1;
	t_vector4l	p2;
}				t_triangle;

t_vector2		v2_set(double x, double y);
t_vector2i		v2i_set(int x, int y);
t_vector2l		v2l_set(long x, long y);

t_vector3		v3_set(double x, double y, double z);
t_vector3i		v3i_set(int x, int y, int z);
t_vector3l		v3l_set(long x, long y, long z);

t_vector4		v4_set(double x, double y, double z, double w);
t_vector4i		v4i_set(int x, int y, int z, int w);
t_vector4l		v4l_set(long x, long y, long z, long w);

t_matrix3		m3_identity(void);
t_matrix3		m3_set(t_vector3 l0, t_vector3 l1, t_vector3 l2);
t_matrix3		m3_euleur(t_vector3 r);

t_matrix4		m4_identity(void);
t_matrix4		m4_set(t_vector4 l0, t_vector4 l1, t_vector4 l2, t_vector4 l3);
t_matrix4		m4_euleur(t_vector3 r);

#endif