/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:43:58 by aelkheta          #+#    #+#             */
/*   Updated: 2023/11/27 11:38:13 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr_unsigned(unsigned int x)
{
    int counter;

    counter = 0;
    if (x < 10)
        counter += ft_print_char(x + '0');
    else
    {
        counter += ft_putnbr_unsigned(x / 10);
        counter += ft_putnbr_unsigned(x % 10);   
    }
    return counter;
}