/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 09:29:53 by shedayat          #+#    #+#             */
/*   Updated: 2023/08/31 11:50:49 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include<stdio.h>

int	ft_str_is_numeric(char *str)
	{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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

/* 
int main() {
	char myString[] = "gsff44"; // Declare an array to hold the string
	printf("%d", ft_str_is_numeric(myString));
	return 0;
} 
*/