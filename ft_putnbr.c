/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:11:20 by aelkheta          #+#    #+#             */
/*   Updated: 2023/11/26 18:06:22 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_putnbr(int n) 
{
    int counter = 0;

    if (n == INT_MIN) 
        counter += write(1, "-2147483648", 11);
    else if (n < 0) 
    {
        counter += ft_print_char('-');
        counter += ft_putnbr(-n);
    } 
    else if (n >= 0 && n < 10) 
        counter += ft_print_char(n + '0'); 
    else 
    {
        counter += ft_putnbr(n / 10);
        counter += ft_putnbr(n % 10);
    }

    return counter;
}
