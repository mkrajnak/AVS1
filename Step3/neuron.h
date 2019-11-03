/*
 * Architektury výpočetních systémů (AVS 2019)
 * Projekt c. 1 (ANN)
 * Login: xkrajn02
 */

/**
 * @brief Returns output of the neuron as product of inputs, sums and bias
 * @param inputSize   - number of inputs the neuron
 * @param neuronCount - number of neurons in the layer
 * @param input       - pointer to neuron input array (identical for all neurons in the layer)
 * @param weights     - pointer to weights for all neurons in the layer
 * @param bias        - bias value of the neuron
 * @param neuronId    - ID of the neuron in layer (position)
 * @return Output of the neuron
 */

// linear: Hodnota proměnné je ve vztahu k číslu iterace
// uniform: Hodnota proměnné je konstantní ve všech iteracích
// #pragma omp declare simd uniform(inputSize) uniform(input) uniform(weight)
// #pragma omp declare simd  linear(weight) linear(bias)
// #pragma omp declare simd uniform(inputSize) uniform(input) linear(weight)
// #pragma omp declare simd 
// #pragma omp declare simd  uniform(inputSize, input) linear(weight:12544)
// #pragma omp declare simd uniform(inputSize) linear(weight)
float evalNeuron(
  size_t inputSize,
  const float* input,
  const float* weight,
  float bias
);
