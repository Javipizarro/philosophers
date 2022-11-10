/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:40:49 by jpizarro          #+#    #+#             */
/*   Updated: 2022/11/10 18:40:55 by jpizarro         ###   ########.fr       */
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
# define INITSPOONS -7
# define DESTRSPOONS -8
# define INITPRINTER -9
# define DESTRPRINTER -10
# define CREAPHILO -11
# define ENDPHILO -12
# define MALLOC -13

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
	int				id;
	pthread_t		th;
	int				meals;
	struct timeval	last_meal;
	struct timeval	this_meal;
	t_data			*data;
//	char			state;
////	char			spoon;
////	struct s_philo	*next;
}				t_philo;


int		check_args(int argc, char *argv[]);
int		check_alive(t_philo *philo);
int		check_fed(t_philo *philo);
int		destroy_spoons(pthread_mutex_t *spoons, int guests);
void	eat(t_philo *philo);
int		end_philos(t_philo *philos);
//void	exit_philo(t_data *data);
int		free_data(t_data *data);
int		ft_atoi(char const *str);
int		ft_strisdigit(char *str);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		get_time(struct timeval *start_time);
void	grab_spoons(t_philo *philo);
int		init_data(t_data *data, int argc, char *argv[]);
int		init_philos(t_data *data, t_philo **philos);
int		init_spoons(pthread_mutex_t *spoons, int guests);
void	print(t_philo *philo, int action);
int		print_error(int error);
void	release_spoons(t_philo *philo);
void	*routine(void *philo);
void	sleep_ph(t_philo *philo);
void	think(t_philo *philo);

// Functions on trial

#endif