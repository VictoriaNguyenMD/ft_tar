/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tar.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vinguyen <vinguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 00:51:48 by oldurosi          #+#    #+#             */
/*   Updated: 2020/02/15 21:28:38 by vinguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAR_H
# define FT_TAR_H

#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/* 
*	The needed data for the 
*	Unix Standard TAR (UStar) format
* 	when creating a tar file.
*/
typedef struct		s_tarHeader
{
	char			name[100];
	char			mode[8];
	char			userID[8];
	char			groupID[8];
	char			size[12];
	char			modifiedTime[12];
	char			checksum[8];
	char			typeFlag[1];
	char			linkName[100];
	char			magic[6]; //"ustar\0"
	char 			version[2]; //"00"
	char			userName[32];
	char			groupName[32];
	char			devMajor[8];
	char			devMinor[8];
	char			prefix[155];
	struct 			mdata *next;
}					t_tarHeader;

#endif