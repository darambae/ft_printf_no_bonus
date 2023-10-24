/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabae <dabae@student.42perpignan.fr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:12:02 by dabae             #+#    #+#             */
/*   Updated: 2023/10/23 18:02:57 by dabae            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_count_digit(unsigned int n)
{
	int	count;

	count = 1;
	if (n > 9)
	{
		while (n > 9)
		{
			n /= 10;
			count++;
		}
	}
	return (count);
}

static char	*ft_unsigned_itoa(unsigned int n)
{
	char	*res;
	int	count;

	count = ft_count_digit(n);
	res = (char *)malloc(sizeof(char) * (count + 1));
	if (!res)
		return (NULL);
	res[count] = '\0';
	while (--count >= 0)
	{
		res[count] = n % 10 + '0';
		n /= 10;
	}
	return (res);
}

int	ft_print_unsigned(unsigned int n)
{
	return (ft_print_str(ft_unsigned_itoa(n)));
}

