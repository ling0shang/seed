
add_executable(seed_tests
    test_version.cpp
    test_string.cpp
)

target_link_libraries(seed_tests PRIVATE
    seed
    doctest::doctest
)

if(MSVC)
    target_compile_options(seed_tests PRIVATE /W4 /WX /utf-8)
else()
    target_compile_options(seed_tests PRIVATE -Wall -Wextra -Wpedantic -Werror)
endif()

add_test(NAME seed_tests COMMAND seed_tests)