/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fta_append.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnugroho <rnugroho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/04 17:53:40 by rnugroho          #+#    #+#             */
/*   Updated: 2018/02/17 14:46:53 by rnugroho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_array.h"
#include "libft.h"

/*
** Array::apppend
** -
** Could be called "add all" like in Java.
** Adds _datalen_ elements to _self_.
** May fail if malloc does.
** -
** _data_ should be a variable of type T* casted to void*.
** _datalen_ should be the number of elements stored in _data_.
** -
** Returns a status :
** 0 in case of success,
** 1 if malloc failed.
*/

int		fta_append(t_array *self, void const *data, size_t datalen)
{
	if (fta_reserve(self, datalen))
		return (1);
	ft_memcpy(ARRAY_END(self), data, ARRAY_OFFSET(self, datalen));
	self->size += datalen;
	return (0);
}

/*
** Array::insert
** -
** Adds _datalen_ elements at index _index_ to _self_.
** May fail if malloc does.
** -
** _data_ should be a variable of type T* casted to void*.
** _datalen_ should be the number of elements stored in _data_.
** _index_ is the future index of the first element of _data_.
** -
** Returns a status :
** 0 in case of success,
** 1 if malloc failed or if the index isn't valid.
*/

int		fta_insert(
				t_array *self, void const *data, size_t datalen, size_t index)
{
	if (self->size < index || fta_reserve(self, datalen))
		return (1);
	ft_memmove(ARRAY_GET(self, index + datalen),
				ARRAY_GET(self, index),
				ARRAY_OFFSET(self, self->size - index));
	ft_memcpy(ARRAY_GET(self, index),
				data,
				ARRAY_OFFSET(self, datalen));
	self->size += datalen;
	return (0);
}
