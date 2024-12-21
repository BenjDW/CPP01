# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 10:10:30 by bde-wits          #+#    #+#              #
#    Updated: 2024/12/21 00:03:56 by bde-wits         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
CXX = c++
CXXFLAGS = -Wall -Wextra -std=c++98

# Nom de l'exécutable final
TARGET = zombie

# Liste des fichiers sources et objets (OBJ est dérivé automatiquement de SRC)
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)  # Transforme les .cpp en .o automatiquement

# Règle principale
all: $(TARGET)

# Création de l'exécutable
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $(OBJ)

# Compilation des fichiers objets
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Nettoyage des fichiers objets et de l'exécutable
clean:
	rm -rf $(TARGET) $(OBJ)

.PHONY: all clean
