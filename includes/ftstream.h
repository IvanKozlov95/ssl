/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftstream.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivankozlov <ivankozlov@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/02 05:28:45 by ivankozlov        #+#    #+#             */
/*   Updated: 2019/05/04 03:31:15 by ivankozlov       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSTREAM_H
# define FTSTREAM_H

# include "bool.h"
# include "dstring.h"

# include <stddef.h>

struct							s_stream
{
	int							fd;
	size_t						pos;
	size_t						size;
	char						*string;
	char						*filename;
	t_string					*content;
};
typedef struct s_stream			t_stream;

t_stream						stream_fd(char *filename);
t_stream						stream_str(char *string);

#endif
