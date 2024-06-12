#include <vector>
#include <Layer.h>
#include "Genome.h"

class NeuralNetwork {
    public:
        NeuralNetwork(Genome genome);
        ~NeuralNetwork();

    private:
        std::vector<Layer> Layers;
};