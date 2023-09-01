/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:44:29 by shedayat          #+#    #+#             */
/*   Updated: 2023/09/01 09:13:24 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0') 
	{
		dest[i] = src[i];
		i ++;
	}
	dest[i] = '\0';
	return (dest);
}

/*
int main()
{
    char source[] = "Hello, world!";
    char destination[20]; // Make sure the destination array is large enough
    
    ft_strcpy(destination, source);
    
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    
    return 0;
}
*/