/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llugez <llugez@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:35:43 by llugez            #+#    #+#             */
/*   Updated: 2025/11/16 19:36:01 by llugez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t					i;
	unsigned char			*dest_casted;
	const unsigned char		*src_casted;

	if (dest == src)
		return (dest);
	i = 0;
	dest_casted = (unsigned char *)dest;
	src_casted = (const unsigned char *)src;
	while (i < n)
	{
		dest_casted[i] = src_casted[i];
		i++;
	}
	return (dest);
}

/*
int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int length = sizeof( int ) * 5;
       
    copy = (int *) malloc( length );
    ft_memcpy( copy, array, length );
        
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return EXIT_SUCCESS;
}
*/