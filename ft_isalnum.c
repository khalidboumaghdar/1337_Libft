/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:42:16 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/29 09:53:14 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0'
			&& c <= '9'))
		return (1);
	return (0);
}
// void ft_putchar(char c)
// {
//     write(1,&c,1);
// }
// void ft_putnbr(int nb)
// {
//     ft_putchar(nb + '0');
// }
// int main(void)
// {
//     int x = ft_isalnum(0);
//     ft_putnbr(x);
// }