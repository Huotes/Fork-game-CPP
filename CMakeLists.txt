cmake_minimum_required(VERSION 3.12)
project(HangManGame)

# Define a variável SOURCE_DIR para o diretório do código-fonte
set(SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

# Adiciona o executável com o arquivo fonte
add_executable(forkgame ${SOURCE_DIR}/forkgame.cpp)