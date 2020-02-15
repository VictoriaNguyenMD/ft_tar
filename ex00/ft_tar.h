/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tar.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <oldurosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:51:48 by oldurosi          #+#    #+#             */
/*   Updated: 2020/02/15 00:55:00 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAR_H
# define FT_TAR_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mdata
{
   char name[255];
   FILE *fp;
   int size;
   int nsize;
   int ssize;
   struct mdata *next;
};

#endif