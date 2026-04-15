#include <stdio.h>

// 1. Define a structure to hold complex numbers (I and Q components).
// This is crucial for RF DSP in C.
typedef struct {
    float real;
    float imag;
} Complex32;

#define NUM_ELEMENTS 4 // For a 4-element antenna array

// 2. Define the LMS function. 
// We pass pointers (*) to avoid copying large arrays in memory.
void lms_beamformer_update(Complex32 *x_in, Complex32 *weights, Complex32 desired, float mu) {
    
    // 3. Initialize variables to hold our calculated output (y).
    Complex32 y = {0.0f, 0.0f};
    
    // 4. Calculate the dot product: y = weights^H * x_in
    // Note: weights^H means we use the complex conjugate of the weights.
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        // Complex multiplication: (Wr - j*Wi) * (Xr + j*Xi)
        // Real part = (Wr * Xr) - (-Wi * Xi) = (Wr * Xr) + (Wi * Xi)
        y.real += (weights[i].real * x_in[i].real) + (weights[i].imag * x_in[i].imag);
        
        // Imaginary part = (Wr * Xi) + (-Wi * Xr) = (Wr * Xi) - (Wi * Xr)
        y.imag += (weights[i].real * x_in[i].imag) - (weights[i].imag * x_in[i].real);
    }
    
    // 5. Calculate the error: e = desired - y
    Complex32 error;
    error.real = desired.real - y.real;
    error.imag = desired.imag - y.imag;
    
    // 6. Update the weights: w(n+1) = w(n) + mu * e * x_in^*
    // Note: x_in^* is the complex conjugate of the input.
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        // We first calculate the term: (e * x_in^*)
        // Complex mult: (Er + j*Ei) * (Xr - j*Xi)
        float gradient_real = (error.real * x_in[i].real) + (error.imag * x_in[i].imag);
        float gradient_imag = (error.imag * x_in[i].real) - (error.real * x_in[i].imag);
        
        // Now update the original weights using the step size (mu)
        weights[i].real += mu * gradient_real;
        weights[i].imag += mu * gradient_imag;
    }
}

// 7. Write a main function to test the algorithm with dummy data.
int main() {
    // Statically allocate arrays (better than malloc for bare-metal MCU)
    Complex32 antenna_inputs[NUM_ELEMENTS] = {
        {1.0f, 0.5f}, {0.8f, 0.6f}, {0.5f, 0.8f}, {0.2f, 0.9f}
    };
    
    // Initial weights are usually set to zero
    Complex32 beam_weights[NUM_ELEMENTS] = {
        {0.0f, 0.0f}, {0.0f, 0.0f}, {0.0f, 0.0f}, {0.0f, 0.0f}
    };
    
    // The signal we "want" to hear
    Complex32 desired_signal = {1.0f, 0.0f}; 
    
    // The learning rate (step size). If too big, system crashes. If too small, it's too slow.
    float mu = 0.01f; 

    printf("Initial Weight 0: Real=%.4f, Imag=%.4f\n", beam_weights[0].real, beam_weights[0].imag);

    // Run the algorithm once (in reality, this runs in a while(1) loop triggered by DMA)
    lms_beamformer_update(antenna_inputs, beam_weights, desired_signal, mu);
    
    printf("Updated Weight 0: Real=%.4f, Imag=%.4f\n", beam_weights[0].real, beam_weights[0].imag);

    return 0;
}