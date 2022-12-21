/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:29:45 by martavar          #+#    #+#             */
/*   Updated: 2022/12/21 11:35:53 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void sighandler(int signum) {
   printf("Caught signal %d, coming out...\n", signum);
   exit(1);
}

int main () {
   signal(SIGINT, sighandler);

   while(1) {
      printf("Going to sleep for a second...\n");
      sleep(1); 
   }
   return(0);
}