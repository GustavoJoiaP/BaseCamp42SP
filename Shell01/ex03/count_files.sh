# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    count_files.sh                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 13:30:13 by gjoia-pa          #+#    #+#              #
#    Updated: 2021/07/23 13:30:15 by gjoia-pa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#!/bin/sh
find . -type d,f | wc -l