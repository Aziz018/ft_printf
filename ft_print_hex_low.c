/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:33:43 by aelkheta          #+#    #+#             */
/*   Updated: 2023/11/27 11:59:35 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_hex_low(unsigned int x)
{
    int counter;

    counter = 0;
    char s[] = "0123456789abcdef";

    if(x < 16)
        counter += ft_print_char(s[x]);
    else
    {
        counter += ft_print_hex_low(x / 16);
        counter += ft_print_char(s[x % 16]);
    }
    return counter;
}
