/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:16:55 by samusanc          #+#    #+#             */
/*   Updated: 2024/08/14 15:09:24 by samusanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "color.h"

t_color	color_from_rgb(int red, int green, int blue)
{
	t_color	result;

	result.r = red;
	result.g = green;
	result.b = blue;
	result.alpha = 1;
	result.hex = (255 << 24 | red << 16 | green << 8 | blue);
	return (result);
}

t_color	color_from_rgba(int red, int green, int blue, float alpha)
{
	t_color	result;
	int		alpha_val;

	result.r = red;
	result.g = green;
	result.b = blue;
	result.alpha = alpha;
	alpha_val = alpha * 255;
	result.hex = (alpha_val << 24 | red << 16 | green << 8 | blue);
	return (result);
}

t_color	color(t_colors name)
{
	if (name == black || name == BLACK)
		return (color_from_rgb(0, 0, 0));
	if (name == white || name == WHITE)
		return (color_from_rgb(255, 255, 255));
	if (name == red || name == RED)
		return (color_from_rgb(255, 0, 0));
	if (name == green || name == GREEN)
		return (color_from_rgb(0, 255, 0));
	if (name == blue || name == BLUE)
		return (color_from_rgb(0, 0, 255));
	return (color_from_rgb(0, 0, 0));
}
