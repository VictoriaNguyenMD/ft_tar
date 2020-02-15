/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_archive.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oldurosi <oldurosi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 01:20:02 by oldurosi          #+#    #+#             */
/*   Updated: 2020/02/15 02:46:23 by oldurosi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tar.h"

static void	file_expand(FILE *fp, size_t amount)
{
	while (amount)
	{
		fputc(0, fp);
		amount -= 1;
	}
	return ;
}


int compress_file(FILE *tar, char *name)
{
    FILE *input;
    size_t offset;
    size_t index;

    /*
    ** Obtains the current value of the file pointer indicator  
    */
   
    index = ftell(tar);
    offset = index % 512;
    if (offset != 0)
        file_expand(tar, 512 - offset);
    index = ftell(tar);
    file_expand(tar, sizeof(t_mdata));
    
    if (!(input = fopen(name, "rb")))
		return (-1);

	return (0);
}

int ft_archive(FILE *tar, char  **name, int count)
{
    int i;
    int ret;

    ret = 0;
    if (!tar)
    {
        return (-1);
    }
    i = 2;
    while (i < count)
    {
        if (compress_file(tar, name[i]))
        {
            break ;
        }
        ++i;
    }
    file_expand(tar, 1024);
    fclose(tar);

    return ((i == count) ? 0 : -1);
}

int main(int argc, char **argv)
{
    FILE *tar;
    if (argc > 2)
    {
        tar = fopen(argv[1], "wb");
        if(ft_archive(tar, argv, argc) != 0)
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