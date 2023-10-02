#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "simple_math.hpp"

TEST_CASE("Testing Addition")
{
    CHECK(add(3,5) == 8);
    CHECK(add(2,3) == 10);
}

