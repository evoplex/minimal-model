/**
 * Evoplex <https://evoplex.org>
 * Copyright (C) 2016-present
 */

#include "plugin.h"

namespace evoplex {

bool MinimalModel::init()
{
    return true;
}

bool MinimalModel::algorithmStep()
{
    return false;
}

} // evoplex
REGISTER_PLUGIN(MinimalModel)
#include "plugin.moc"
