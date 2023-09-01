/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 12:40:47 by shedayat          #+#    #+#             */
/*   Updated: 2023/09/01 09:19:13 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (('a' <= str[i] && str[i] <= 'z') || 
			('A' <= str[i] && str[i] <= 'Z'))
		{
			i++;
		}
		else 
		{
			return (0);
		}
	}
	return (1);
}

/*int main() {
	char myString[] = "qwezreutf"; // Declare an array to hold the string
	printf("%d", ft_str_is_alpha(myString));
	return 0;
}
*/