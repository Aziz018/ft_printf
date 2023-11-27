/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 17:11:20 by aelkheta          #+#    #+#             */
/*   Updated: 2023/11/27 11:45:09 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_str(char *str)
{
    int counter;

    counter = 0;
    if(!str)
        return ft_print_str("(null)");
    while (*str)
        counter += write(1, str++, 1);
    return counter;
}