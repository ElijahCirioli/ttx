#pragma once

#include "di/reflect/prelude.h"

namespace ttx::terminal {
enum class NavigateDirection {
    Left,
    Right,
    Up,
    Down,
};

constexpr auto tag_invoke(di::Tag<di::reflect>, di::InPlaceType<NavigateDirection>) {
    using enum NavigateDirection;
    return di::make_enumerators<"NavigateDirection">(di::enumerator<"Left", Left>, di::enumerator<"Right", Right>,
                                                     di::enumerator<"Up", Up>, di::enumerator<"Down", Down>);
}

enum class NavigateWrapMode {
    Allow,
    Disallow,
};

constexpr auto tag_invoke(di::Tag<di::reflect>, di::InPlaceType<NavigateWrapMode>) {
    using enum NavigateWrapMode;
    return di::make_enumerators<"NavigateWrapMode">(di::enumerator<"Allow", Allow>,
                                                    di::enumerator<"Disallow", Disallow>);
}
}
