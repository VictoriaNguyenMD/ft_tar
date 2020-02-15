/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unarchive.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <oldurosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 01:29:39 by oldurosi          #+#    #+#             */
/*   Updated: 2020/02/15 02:05:34 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tar.h"

int main(int argc, char **argv)
{
    FILE *tar;
    if (argc == 2)
    {
        tar = fopen(argv[1], "wb");
        if(ft_unarchive(tar, argv, argc) != 0)
        {
            fprintf( stderr, "Failed to open %s for writing\n", argv[1] );
            return (-1);
        }
    }
    else
    {
        perror("Usage: file_archive\n");
    }
    return (0);
}