/*=============================================================================
    Copyright (c) 2003 Joel de Guzman

    Use, modification and distribution is subject to the Boost Software
    License, Version 1.0. (See accompanying file LICENSE_1_0.txt or copy at
    http://www.boost.org/LICENSE_1_0.txt)
==============================================================================*/
#if !defined(FUSION_ITERATOR_DETAIL_ITERATOR_BASE_HPP)
#define FUSION_ITERATOR_DETAIL_ITERATOR_BASE_HPP

namespace boost { namespace fusion
{
    struct iterator_root {};

    template <typename Iterator>
    struct iterator_base : iterator_root
    {
        Iterator const&
        cast() const
        {
            return static_cast<Iterator const&>(*this);
        }

        Iterator&
        cast()
        {
            return static_cast<Iterator&>(*this);
        }
    };
}}

#endif
