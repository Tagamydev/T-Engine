/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   screen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:16:55 by samusanc          #+#    #+#             */
/*   Updated: 2024/08/07 13:19:08 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "point.h"

t_point	normalize(t_point point)
{
	t_point	result;
	float	x;
	float	y;
	float	z;

	result = point;
	result.px = point.px * Q_sqrt();
	return (result);
}