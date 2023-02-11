# tec-QUBIT
TEC-1 Quantum computer





## Port to the TEC-1 - quantum random number generator (QRNG).
- https://turbofuture.com/computers/build-quantum-computer
- https://github.com/Spooky-Manufacturing
- https://en.wikipedia.org/wiki/KLM_protocol


This program generates a random bit using a quantum random number generator (QRNG).
The triggerPin is pulsed high for 3 milliseconds, then low. This triggers the quantum circuit, which produces a random output of photons.
The photons are then detected by two photoresistors, hPin and vPin. The photoresistors output a voltage proportional to the number of photons they detect.
The H and V variables store the output of the photoresistors. If H is greater than V, then a 0 is outputted. If V is greater than H, then a 1 is outputted. If H and V are equal, the program runs again until a random bit can be generated.

```
a.c
a.f83
```

### how to build a QC




