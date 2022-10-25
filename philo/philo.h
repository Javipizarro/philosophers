/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:40:49 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/25 22:57:56 by jpizarro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/wait.h>
# include <sys/time.h>
# include <pthread.h>

// ERROR DEFINITION
# define ARGNUM -3
# define ARGDIG -4
# define ARGINT -5
# define SETTIME -6

// PHILOS STATES DEFINITION
# define DIED 0
# define EATING 1
# define SLEEPING 2
# define THINKING 3

typedef struct	s_data
{
//	struct timeval	*start_time;
//	struct timeval	*end_time;
	struct timeval	start_time;
//	struct timeval	end_time;
	int				guests;
	int				die_time;
	int				eat_time;
	int				sleep_time;
	int				meals;
//	t_philo			*philos;
	pthread_mutex_t	*spoons;
}				t_data;

typedef struct	s_philo
{
	char			id;
	pthread_t		th;
	struct timeval	lastmeal;
	t_data			*data;
//	char			state;
////	char			spoon;
////	struct s_philo	*next;
}				t_philo;


void	check_args(int argc, char *argv[]);
void	eat(t_philo *philo);
void	free_data(t_data *data);
int		ft_atoi(char const *str);
int		ft_strisdigit(char *str);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		get_time(t_data *data);
void	init_data(t_data *data, int argc, char *argv[]);
void	init_spoons(pthread_mutex_t *spoons, int guests);
void	init_philos(t_data *data);
void	exit_philo(t_data *data);
void	print_error(t_data *data, int error);
void	routine(t_philos *philo);

// Functions on trial
#endif