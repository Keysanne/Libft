/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbatteux <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 14:25:36 by tbatteux          #+#    #+#             */
/*   Updated: 2023/04/24 16:05:58 by tbatteux         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	check_format(char s, va_list stk)
{
	int	i;

	i = 0;
	if (s == 'c')
		i = ft_putchar2_fd((char)va_arg(stk, int), 1);
	else if (s == 's')
		i = format_s(va_arg(stk, char *));
	else if (s == '%')
		i = ft_putchar2_fd('%', 1);
	else if (s == 'd' || s == 'i')
		i = format_d(va_arg(stk, int));
	else if (s == 'u')
		i = format_u(va_arg(stk, unsigned int));
	else if (s == 'x' || s == 'X')
		i = format_x(va_arg(stk, int), s);
	else if (s == 'p')
		i = format_p(stk);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		j;
	char	*str;

	va_start(arg, s);
	str = (char *)s;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			j += check_format(str[i + 1], arg);
			i += 2;
		}
		else
		{
			ft_putchar2_fd(s[i++], 1);
			j++;
		}
	}
	va_end(arg);
	return (j);
}
/*
int     main()
{
        int     *test;
        int             i;

        test = &i;
        ft_printf("----------------------\n");
        ft_printf("t%cst%c d%c fou\n", 'e', '|', 'e');
        printf("t%cst%c d%c fou\n", 'e', '|', 'e');
        ft_printf("----------------------\n");
        ft_printf("test%% de%% fou%%\n");
        printf("test%% de%% fou%%\n");
        ft_printf("----------------------\n");
        ft_printf("test%d de fou\n", 2147483647);
        printf("test%d de fou\n", 2147483647);
        ft_printf("----------------------\n");
        ft_printf("test de fou %s\n", "malade de la mort");
        printf("test de fou %s\n", "malade de la mort");
        ft_printf("----------------------\n");
        ft_printf("test%i de fou\n", -50);
        printf("test%i de fou\n", -50);
        ft_printf("----------------------\n");
        ft_printf("test%u de fou\n", 260588260);
        printf("test%u de fou\n", 260588260);
        ft_printf("----------------------\n");
        ft_printf("test: %x\n", -2147483647);
        printf("test: %x\n", -2147483647);
        ft_printf("----------------------\n");
        ft_printf("test: %X\n", 123456);
        printf("test: %X\n", 123456);
        ft_printf("----------------------\n");
        ft_printf("adresse: %p\n", test);
        printf("adresse: %p\n", test);
        return (0);
}*/
