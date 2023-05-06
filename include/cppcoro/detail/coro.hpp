///////////////////////////////////////////////////////////////////////////////
// Copyright (c) Lewis Baker
// Licenced under MIT license. See LICENSE.txt for details.
///////////////////////////////////////////////////////////////////////////////

#ifndef CPPCORO_CORO_HPP_INCLUDED
#define CPPCORO_CORO_HPP_INCLUDED

#if __has_include(<coroutine>)
#include <coroutine>
namespace coro = std;
#elif __has_include(<experimental/coroutine>)
#include <experimental/coroutine>
namespace coro = std::experimental;
#else
#error No couroutines support
#endif

#endif
