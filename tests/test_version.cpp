#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include <seed/version.hpp>

TEST_CASE("version is not empty") {
    SUBCASE("简单断言")
    {
        CHECK(1 + 1 == 2);
        CHECK_FALSE(1 + 1 == 3);
    }
    
    CHECK(!seed::version().empty());
}