/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type_diu.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adelcros <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/27 21:43:20 by adelcros          #+#    #+#             */
/*   Updated: 2019/12/30 17:43:26 by adelcros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_type_d(va_list ap, t_conversion conv)
{
	return (ft_apply_width_di(ap, conv));
}

int		ft_type_i(va_list ap, t_conversion conv)
{
	return (ft_apply_width_di(ap, conv));
}

int		ft_type_u(va_list ap, t_conversion conv)
{
	return (ft_apply_width_uxX(ap, conv));
}

