# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fimazouz <fimazouz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/01 18:14:56 by firdawssema       #+#    #+#              #
#    Updated: 2024/06/12 10:44:54 by fimazouz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
CLIENT = client
SERVER = server
FT_PRINTF_DIR = ft_printf
FT_PRINTF = $(FT_PRINTF_DIR)/libftprintf.a

all: $(FT_PRINTF) $(CLIENT) $(SERVER)

$(FT_PRINTF):
	make -C $(FT_PRINTF_DIR)

$(CLIENT): client.o $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(CLIENT) client.o $(FT_PRINTF)

$(SERVER): server.o $(FT_PRINTF)
	$(CC) $(CFLAGS) -o $(SERVER) server.o $(FT_PRINTF)

client.o: client.c
	$(CC) $(CFLAGS) -c client.c

server.o: server.c
	$(CC) $(CFLAGS) -c server.c

clean:
	rm -f *.o
	make -C $(FT_PRINTF_DIR) clean

fclean: clean
	rm -f $(CLIENT) $(SERVER)
	make -C $(FT_PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
