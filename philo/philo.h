/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:40:49 by jpizarro          #+#    #+#             */
/*   Updated: 2022/10/29 19:41:11 by jpizarro         ###   ########.fr       */
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
# define NONE 0
# define SPOON 1
# define EATING 2
# define SLEEPING 3
# define THINKING 4

typedef struct	s_data
{
//	struct timeval	*start_time;
//	struct timeval	*end_time;
	struct timeval	start_time;
//	struct timeval	end_time;
	int				guests;
	useconds_t		die_time;
	useconds_t		eat_time;
	useconds_t		sleep_time;
	int				meals;
	char			deaths;
//	t_philo			*philos;
	pthread_mutex_t	*spoons;
	pthread_mutex_t	printer;
}				t_data;

typedef struct	s_philo
{
	char			id;
	pthread_t		th;
	int				meals;
	struct timeval	last_meal;
	struct timeval	this_meal;
	t_data			*data;
//	char			state;
////	char			spoon;
////	struct s_philo	*next;
}				t_philo;


void	check_args(int argc, char *argv[]);
int		check_alive(t_philo *philo);
void	eat(t_philo *philo);
//void	exit_philo(t_data *data);
void	free_data(t_data *data, t_philo *philos);
int		ft_atoi(char const *str);
int		ft_strisdigit(char *str);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		get_time(struct timeval *start_time);
void	init_data(t_data *data, int argc, char *argv[]);
void	init_spoons(pthread_mutex_t *spoons, int guests);
t_philo	*init_philos(t_data *data);
void	print(t_philo *philo, int action)
void	print_error(t_data *data, int error);
void	release_spoons(t_philo *philo);
void	routine(t_philos *philo);

// Functions on trial

#endif