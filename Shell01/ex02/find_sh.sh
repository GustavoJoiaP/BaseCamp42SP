# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    find_sh.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjoia-pa <gjoia-pa@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/23 13:30:01 by gjoia-pa          #+#    #+#              #
#    Updated: 2021/07/23 13:30:02 by gjoia-pa         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#!/bin/sh
find . -type f -name "*.sh" | sed "s/.*\///" | awk -F. '{print $1}'