/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelkheta <aelkheta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:30:32 by aelkheta          #+#    #+#             */
/*   Updated: 2023/11/27 12:04:32 by aelkheta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF
# define FT_PRINTF

#include <limits.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int ft_printf(const char *format, ...);
int ft_print_str(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_unsigned(unsigned int n);
int ft_print_address(void *ptr);
int ft_print_hex_low(unsigned int x);
int ft_print_hex_upp(unsigned int x);
int ft_print_char(int c);


# endif