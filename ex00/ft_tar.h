/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tar.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <oldurosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:51:48 by oldurosi          #+#    #+#             */
/*   Updated: 2020/02/15 01:27:06 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAR_H
# define FT_TAR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

// #include <exit.h>
// struct mdata
// {
//    char name[255];
//    FILE *fp;
//    int size;
//    int nsize;
//    int ssize;
//    struct mdata *next;
// };

typedef struct		s_mdata
{
	char			name[100];
	char			mode[8];
	char			owner[8];
	char			group[8];
	char			size[12];
	char			modified[12];
	char			checksum[8];
	char			type[1];
	char			link[100];
	char			padding[255];
	struct 			mdata *next;
}					t_mdata;

#endif