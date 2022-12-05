/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpizarro <jpizarro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 13:40:49 by jpizarro          #+#    #+#             */
/*   Updated: 2022/12/05 21:06:03 by jpizarro         ###   ########.fr       */
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
# define ARGINT -4
# define SETTIME -5
# define INITSPOONS -6
# define DESTRSPOONS -7
# define INITPRINTER -8
# define DESTRPRINTER -9
# define CREAPHILO -10
# define ENDPHILO -11
# define MALLOC -12

// PHILOS STATES DEFINITION
# define NONE 0
# define SPOON 1
# define EATING 2
# define SLEEPING 3
# define THINKING 4

typedef struct s_data
{
	struct timeval	start_time;
	int				guests;
	int				die_time;
	int				eat_time;
	int				sleep_time;
	int				meals;
	char			deaths;
	pthread_mutex_t	*spoons;
	pthread_mutex_t	printer;
}				t_data;

typedef struct s_philo
{
	unsigned char	id;
	pthread_t		th;
//	short int		meals;
	short int		eaten;
	struct timeval	last_meal;
	t_data			*data;
}				t_philo;

int		check_alive(t_philo *philo);
int		check_fed(t_philo *philo);
int		destroy_spoons(pthread_mutex_t *spoons, int guests);
int		eat(t_philo *philo);
int		end_philos(t_philo *philos);
int		free_data(t_data *data);
int		ft_atoi(char const *str);
int		ft_strisdigit(char *str);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		grab_spoons(t_philo *philo);
int		init_data(t_data *data, int argc, char *argv[]);
int		init_philos(t_data *data, t_philo **philos);
int		init_spoons(pthread_mutex_t *spoons, int guests);
int		philo_is_busy(t_philo *philo, int task);
void	print(t_philo *philo, int action);
int		print_error(int error);
void	release_spoons(t_philo *philo);
void	*routine(void *philo);
int		sleep_ph(t_philo *philo);
int		think(t_philo *philo);
int		usec_since(struct timeval ref_time);
int		wrong_args(int argc, char *argv[]);

#endif