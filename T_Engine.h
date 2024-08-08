#ifndef T_ENGINE_H
# define T_ENGINE_H
# include <stdlib.h>
# include "color.h"
# include "point.h"
# include "resolution.h"
# include "screen.h"
# include "camera.h"
# include "player.h"
# include "npc.h"

// COLOR.H

t_color	color(char *name);
t_color	colorFormRGB(int red, int green, int blue);
t_color	colorFormHEX(int color);
t_color	color_mix(t_color a, t_color b, float lerp);


t_point	point(float px, float py);
t_point	vector(float px, float py, float pz);
t_point	setPtColor(t_point pt, t_color color);

// Resolution

//// set resolution by hand
//t_resolution	setRes(unsigned int width, unsigned int height);
//
//// set the resolution by aspect ratio
//t_resolution	setResByAR(char *aspect_ratio);
//
//#endif
///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   player.h                                           :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2024/08/05 02:02:49 by samusanc          #+#    #+#             */
///*   Updated: 2024/08/05 02:18:39 by samusanc         ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#ifndef SCREEN_H
//# define SCREEN_H
//# include <stdio.h>
//# include "resolution.h"
//
///*
//	Screen struct works like an object
//	Is highly recommended to use it with 
//	screen custom funtions:
//*/
//typedef struct s_screen
//{
//	int				*pixels;
//	t_resolution	resolution;
//}		t_screen;
//
//t_screen	*newScreen(t_resolution resolution);
//void		*freeScreen(t_screen *screen);
//
//#endif
///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   player.h                                           :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2024/08/05 02:02:49 by samusanc          #+#    #+#             */
///*   Updated: 2024/08/05 02:18:39 by samusanc         ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#ifndef CAMERA_H
//# define CAMERA_H
//# include "point.h"
//# include "screen.h"
//
//typedef struct s_camera
//{
//	t_point			pos;
//	float			angle;
//	float			fov;
//	t_screen		*screen;
//}		t_camera;
//
//t_camera	*newCamera(t_point pos, float angle, float fov, t_screen *screen);
//void		freeCamera(t_camera *cam);
//
//#endif/* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   player.h                                           :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2024/08/05 02:02:49 by samusanc          #+#    #+#             */
///*   Updated: 2024/08/05 02:18:39 by samusanc         ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#ifndef PLAYER_H
//# define PLAYER_H
//# include "camera.h"
//
///*
//	Player
//		camera: the camera of the player, aka t_cam
//		start: Unity-like or Unreal-like funtion,
//		It is executed when the object is born.
//		update: Unity-like funtion, it is called each frame.
//*/
//typedef struct s_player
//{
//	t_camera	*camera;
//	int			(*start)(struct s_player, void *);
//	int			(*update)(struct s_player, void *);
//}		t_player;
//
//// Player Constructor
//t_player	*newPlayer(t_camera *camera);
//void		freePlayer(t_player *player);
//
//#endif
///* ************************************************************************** */
///*                                                                            */
///*                                                        :::      ::::::::   */
///*   player.h                                           :+:      :+:    :+:   */
///*                                                    +:+ +:+         +:+     */
///*   By: samusanc <samusanc@student.42madrid.com>   +#+  +:+       +#+        */
///*                                                +#+#+#+#+#+   +#+           */
///*   Created: 2024/08/05 02:02:49 by samusanc          #+#    #+#             */
///*   Updated: 2024/08/05 02:18:39 by samusanc         ###   ########.fr       */
///*                                                                            */
///* ************************************************************************** */
//
//#ifndef NPC_H
//# define NPC_H
//# include "point.h"
//
///*
//	NPC:
//		model: this is the model or sprites from the npc
//
//*/
//typedef struct s_npc
//{
//	void	*model;
//	t_point	pos;
//	float	angle;
//	int		(*start)(struct s_npc, void *);
//	int		(*update)(struct s_npc, void *);
//}		t_npc;
//
//// npc Constructor
//t_npc		*newNpc(void *model, t_point pos, float angle);
//void		freeNpc(t_npc *npc);
//
//#endif
//
#endif
