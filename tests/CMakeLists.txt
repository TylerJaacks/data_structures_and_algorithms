enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(tests_run src/tests.c src/main.c ../data_structures_and_algorithms/src/data_structures/dynamic_array.c)

target_link_libraries(tests_run gtest gtest_main)
target_link_libraries(tests_run gmock gmock_main)
