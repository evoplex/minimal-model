/**
 * Evoplex <https://evoplex.org>
 * Copyright (C) 2016-present
 */

#ifndef MINIMAL_MODEL_H
#define MINIMAL_MODEL_H

#include <plugininterface.h>

namespace evoplex {
class MinimalModel: public AbstractModel
{
public:
    // Initializes the model.
    // This method is called when the model is created and
    // is mainly used to validate inputs and set the environment.
    // Return true if successful
    bool init() override;

    // [OPTIONAL]
    // It is executed before the algorithmStep() loop
    // The default implementation of this method does nothing.
    // void beforeLoop() override;

    // It is executed in a loop and must contain all the logic to perform ONE step.
    // Return true if algorithm is good for another step or false to stop asap.
    bool algorithmStep() override;

    // [OPTIONAL]
    // It is executed after the algorithmStep() loop ends.
    // The default implementation of this method does nothing.
    // void afterLoop() override;

    // [OPTIONAL]
    // It allows implementing custom outputs which can be plotted or stored
    // in a file through Evoplex. The "inputs" must be defined in the
    // metadata.json file. If an experiment requests some custom output,
    // this method will be called once at each time step, receiving the
    // requested inputs.
    // Values customOutputs(const Values& inputs) const override;
};
} // evoplex
#endif // MINIMAL_MODEL_H
