// Evoplex <https://evoplex.org>

#include "plugin.h"

namespace evoplex {


bool MinimalModel::algorithmStep()
{
    return false;
}


} // evoplex
REGISTER_PLUGIN(MinimalModel)
#include "plugin.moc"
