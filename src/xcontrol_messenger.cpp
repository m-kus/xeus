/***************************************************************************
* Copyright (c) 2018, Johan Mabille, Sylvain Corlay and Martin Renou       *
*                                                                          *
* Distributed under the terms of the BSD 3-Clause License.                 *
*                                                                          *
* The full license is in the file LICENSE, distributed with this software. *
****************************************************************************/

#include "xeus/xcontrol_messenger.hpp"
#include "xeus/xmiddleware.hpp"

namespace xeus
{
    xcontrol_messenger::~xcontrol_messenger()
    {
    }
    
    nl::json xcontrol_messenger::send_to_shell(const nl::json& message)
    {
        return send_to_shell_impl(message);
    }
}

