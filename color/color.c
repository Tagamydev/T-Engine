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

#include "color.h"

t_color	colorFormRGB(int red, int green, int blue)
{
	t_color	result;

	result.r = red;
	result.g = green;
	result.b = blue;
	result.alpha = 1;
	result.hex = (255 << 24 | red << 16 | green << 8 | blue);
	return (result);
}

t_color	colorFormRGBA(int red, int green, int blue, float alpha)
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
	t_color	result;

	if (name == black || name == BLACK)
		return (colorFormRGB(0, 0, 0));
	if (name == white || name == WHITE)
		return (colorFormRGB(255, 255, 255));
	if (name == red || name == RED)
		return (colorFormRGB(255, 0, 0));
	if (name == green || name == GREEN)
		return (colorFormRGB(0, 255, 0));
	if (name == blue || name == BLUE)
		return (colorFormRGB(0, 0, 255));
	return (result);
}
