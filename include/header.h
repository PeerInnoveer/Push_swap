/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:41:32 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/12/13 14:17:10 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

# include "../libft/libft.h"

typedef struct	s_data
{
	int				i;
	int				j;
	int				k;
	int				*stack_a;
	int				*stack_b;
	int				size;
	int				size_a;
	int				size_b;
	int				size_init_a;
	int				print;
}				t_data;

int				ft_make_stacks(t_data *data, char **av);

//Sorting Actions
int				ft_sa(t_data *data);
int				ft_sb(t_data *data);
int				ft_ss(t_data *data);
int				ft_pa(t_data *data);
int				ft_pb(t_data *data);
int				ft_ra(t_data *data);
int				ft_rb(t_data *data);
int				ft_rr(t_data *data);
int				ft_rra(t_data *data);
int				ft_rrb(t_data *data);
int				ft_rrr(t_data *data);

void			ft_print_tab(t_data *data);
void			ft_print_name(t_data *data, char *str);

int				sort(t_data *data);
int				ft_sort_is_ok(t_data *data);
void			ft_sort_b(t_data *data);
int				ft_sort_is(t_data *data);
int				ft_sort_b_is_ok(t_data *data);
int				ft_string_is_nb(char *str);

#endif