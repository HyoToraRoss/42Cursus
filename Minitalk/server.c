/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:29:45 by martavar          #+#    #+#             */
/*   Updated: 2023/01/15 19:44:23 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h" 

/*
void	signal_handler(int signum)
{
	printf("Received SIGINT!\n", signum);
	exit (0);
}
*/

int	main(void)
{
	pid_t		pid;
	//sigset_t signal_set;
	pid = getpid();
	printf("The process ID is %d\n", pid);
	/*
	struct sigaction {
               void     (*sa_handler)(int);
               void     (*sa_sigaction)(int, siginfo_t *, void *);
               sigset_t   sa_mask;
               int        sa_flags;
               void     (*sa_restorer)(void);
           };
		//Set the signal handler for the SIGINT and SIGTERM signals
	//to the signal_handler function
	signal(SIGINT, signal_handler);
	signal(SIGTERM, signal_handler);
	//Initialize an empty signal set
	sigemptyset(&signal_set);
	//Add SIGINT to the signal_set
	sigaddset(&signal_set, SIGINT);
	while (1)
	{
		//Some work to do
	}
	*/

	return (0);
}
