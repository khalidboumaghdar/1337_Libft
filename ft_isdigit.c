/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkhalid <bkhalid@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 11:01:04 by bkhalid           #+#    #+#             */
/*   Updated: 2025/10/27 17:06:34 by bkhalid          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
// void ft_putchar(char  c)
// {
//     write(1,&c,1);
// }
// void ft_putnbr(int nb)
// {
//     if(nb == -2147483648)
//     {
//         write(1,"-2147483648",11);
//     }
//     else if(nb < 0)
//     {
//         write(1,"-",1);

//         nb  = -nb;
//         ft_putnbr(nb);
//     }
//     else if(nb > 9)
//     {
//         ft_putnbr(nb / 10);
//         ft_putnbr(nb % 10);
//     }
//     else
//     {
//         ft_putchar(nb + '0');
//     }
// }
// int main(void)
// {
//     int v = ft_isdigit('1');
//     ft_putnbr(v);

// }
