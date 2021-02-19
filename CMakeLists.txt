cmake_minimum_required(VERSION 3.17)
project(lab1_algorithm C)

set(CMAKE_C_STANDARD 99)

add_executable(lab1_algorithm main.c list.h list.c stack.h stack.c queue.h queue.c)

add_executable(listTest listTest.c list.h list.c)

add_executable(stackTest stackTest.c list.h list.c stack.h stack.c)

add_executable(queueTest queueTest.c list.h list.c queue.h queue.c)