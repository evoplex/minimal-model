// Evoplex <https://evoplex.org>

#ifndef MINIMAL_MODEL_H
#define MINIMAL_MODEL_H

#include <plugininterface.h>

namespace evoplex {
class MinimalModel: public AbstractModel
{
public:
    /** [OPTIONAL]
     * @brief Initializes the plugin.
     * This method is called when the plugin is created and
     * is mainly used to validate inputs and set the environment.
     * The default implementation does nothing.
     * @return true if successful
     */
    //bool init() override;

    /** [OPTIONAL]
     * @brief It is executed before the algorithmStep() loop.
     * The default implementation of this function does nothing.
     */
    //void beforeLoop() override;

    /** [MANDATORY]
     * @brief It is executed in a loop and must contain all the logic to perform ONE step.
     * @returns true if algorithm is good for another step or false to stop asap.
     */
    bool algorithmStep() override;

    /** [OPTIONAL]
     * @brief It is executed after the algorithmStep() loop ends.
     * The default implementation of this function does nothing.
     */
    //void afterLoop() override;

    /** [OPTIONAL]
     * @brief Allows implementing custom outputs for the model plugin.
     * A "custom output" can be plotted or stored in a file through Evoplex.
     * The \p inputs must be defined in the metadata.json file. If an experiment
     * requests some custom output, this function will be called once at each
     * time step, receiving the requested \p inputs.
     * The default implementation of this function does nothing.
     * @return the Value output for each of the \p inputs
     */
    //Values customOutputs(const Values& inputs) const override;
};
} // evoplex
#endif // MINIMAL_MODEL_H
