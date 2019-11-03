/*
 * Architektury výpočetních systémů (AVS 2019)
 * Projekt c. 1 (ANN)
 * Login: xkrajn02
 */

#include <cstdlib>
#include "neuron.h"
#include <stdio.h>

float evalNeuron(
  size_t inputSize,
  const float* input,
  const float* weight,
  float bias
)
{
  //TODO: Step0 - Fill in the implementation, all the required arguments are passed.
  //              If you don't use them all you are doing something wrong!
  float sum = bias;
  #pragma omp simd reduction(+:sum)
  for (size_t i = 0; i < inputSize; i++){
    sum += input[i] * weight[i];
  }
  return sum < 0 ? 0 : sum;
}
