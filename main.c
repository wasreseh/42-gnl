/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wasreseh <wasreseh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 23:07:38 by wasreseh          #+#    #+#             */
/*   Updated: 2023/02/28 23:41:23 by wasreseh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main()
{
    int fd;
    static char *str;
    int i = 0;
    fd = open("cat.txt", O_RDONLY);
    if (fd == -1)
        perror("Error While Opening file");
    while (i < 2)
    {
        str = get_next_line(fd);
        printf("%s", str);
        free(str);
        i++;
    }
    close(fd);
    return (0);
}