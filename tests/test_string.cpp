// #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <seed/string.hpp>

TEST_CASE("trim removes leading and trailing whitespace") {
    SUBCASE("简单断言")
    {
        CHECK(1 + 1 == 2);
        CHECK_FALSE(1 + 1 == 3);
    }

    CHECK(seed::trim("") == "");
    CHECK(seed::trim(" x") == "x");
    CHECK(seed::trim("x ") == "x");

    CHECK(seed::trim("  hello  ") == "hello");
    CHECK(seed::trim(" ") == "");
    CHECK(seed::trim("  \r\n\t\v\f") == "");
    CHECK(seed::trim("x") == "x");
    CHECK(seed::trim(" a b  ") == "a b");
    CHECK(seed::trim("hello") == "hello");
    CHECK(seed::trim("a\t\tb") == "a\t\tb");
}
