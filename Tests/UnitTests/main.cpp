// Copyright (c) 2021 CubbyTower Team
// Chris Ohk, Minkyu Lee, Minjune Yi
// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest.h>

int main()
{
    doctest::Context context;

    // Run queries, or run tests unless --no-run is specified
    const int res = context.run();

    return res;
}