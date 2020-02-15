/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_achieve.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <oldurosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 01:20:02 by oldurosi          #+#    #+#             */
/*   Updated: 2020/02/15 01:42:08 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tar.h"

int main(int argc, char **argv)
{
    FILE *tar;
    if (argc > 2)
    {
        tar = fopen(argv[1], "wb");
        if( !tar )
        {
            fprintf( stderr, "Failed to open %s for writing\n", argv[1] );
            return (-1);
        }
    }
    else
    {
        perror("Usage: file_archive [file1 ... fileN]\n");
    }
    
    return (0);
}