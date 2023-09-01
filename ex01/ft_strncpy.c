/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shedayat <shedayat@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 16:51:55 by shedayat          #+#    #+#             */
/*   Updated: 2023/09/01 09:17:50 by shedayat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
			dest[i] = src[i];
		else
		{
			while (i < n)
			{
				dest[i] = '\0';
				i++;
			}
		}
		i++;
	}
	return (dest);
}

/*
int main() {
    char source[] = "Hello, world!";
    char destination[20];  // Make sure the destination array has enough space
    
    unsigned int n = 20;   // Number of characters to copy
    
    // Copy characters from source to destination using ft_strncpy
    ft_strncpy(destination, source, n);
    
    // Print the result
    printf("Source: %s\n", source);
    printf("Copied: %s\n", destination);

    return 0;
}
*/