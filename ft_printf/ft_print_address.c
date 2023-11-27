/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:09:42 by aelkheta          #+#    #+#             */
/*   Updated: 2023/11/27 11:51:30 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_print_add_hex(unsigned long int x)
{
    int counter;

    counter = 0;
    char s[] = "0123456789abcdef";

    if(x < 16)
        counter += ft_print_char(s[x]);
    else
    {
        counter += ft_print_add_hex(x / 16);
        counter += ft_print_char(s[x % 16]);
    }
    return counter;
}

int ft_print_address(void *ptr)
{
    int counter;

    counter = 0;
    unsigned long int x;
    x = (unsigned long int)ptr;
    if (ptr == (void *)0)
		return (ft_print_str("(nil)"));
    counter += write(1, "0x", 2);
    counter += ft_print_add_hex(x);
    return counter;
}