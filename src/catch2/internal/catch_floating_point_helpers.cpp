
//              Copyright Catch2 Authors
// Distributed under the Boost Software License, Version 1.0.
//   (See accompanying file LICENSE.txt or copy at
//        https://www.boost.org/LICENSE_1_0.txt)

// SPDX-License-Identifier: BSL-1.0

#include <catch2/internal/catch_floating_point_helpers.hpp>

#include <cstring>

namespace Catch {
    namespace Detail {

        std::uint32_t convertToBits(float f) {
            static_assert(sizeof(float) == sizeof(std::uint32_t), "Important ULP matcher assumption violated");
            std::uint32_t i;
            std::memcpy(&i, &f, sizeof(f));
            return i;
        }

        std::uint64_t convertToBits(double d) {
            static_assert(sizeof(double) == sizeof(std::uint64_t), "Important ULP matcher assumption violated");
            std::uint64_t i;
            std::memcpy(&i, &d, sizeof(d));
            return i;
        }

    } // end namespace Detail
} // end namespace Catch

