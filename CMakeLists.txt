cmake_minimum_required(VERSION 3.17)
project(lab1_algorithm C)

set(CMAKE_C_STANDARD 99)

add_executable(lab1_algorithm src/main.c src/list/list.h src/list/list.c src/stack/stack.h src/stack/stack.c src/queue/queue.h src/queue/queue.c)

add_executable(listTest src/tests/listTest.c src/list/list.h src/list/list.c)

add_executable(stackTest src/tests/stackTest.c src/list/list.h src/list/list.c src/stack/stack.h src/stack/stack.c)

add_executable(queueTest src/tests/queueTest.c src/list/list.h src/list/list.c src/queue/queue.h src/queue/queue.c)

add_executable(labTests src/tests/labTests.c src/list/list.h src/list/list.c src/stack/stack.h src/stack/stack.c src/queue/queue.h src/queue/queue.c)