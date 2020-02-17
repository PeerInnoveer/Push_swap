/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 12:41:32 by pvan-ren          #+#    #+#             */
/*   Updated: 2020/02/17 10:06:03 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

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

int				make_stacks(t_data *data, char **av);

//Sorting Actions
int				sa(t_data *data);
int				sb(t_data *data);
int				ss(t_data *data);
int				pa(t_data *data);
int				pb(t_data *data);
int				ra(t_data *data);
int				rb(t_data *data);
int				rr(t_data *data);
int				rra(t_data *data);
int				rrb(t_data *data);
int				rrr(t_data *data);

void			print_tab(t_data *data);
void			print_name(t_data *data, char *str);

int				sort(t_data *data);
int				sortAlgo(t_data *data);
int				sort_is_ok(t_data *data);
void			sort_b(t_data *data);
int				sort_is(t_data *data);
int				sort_b_is_ok(t_data *data);
int				string_is_nb(char *str);
int				error_check(int ac, char **av);

#endif