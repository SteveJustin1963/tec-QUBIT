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





### how do you program in it?
- https://try.q-ctrl.com/blackopal-app/
- https://qiskit.org/textbook/what-is-quantum.html, https://qiskit.org/textbook/preface.html
- https://www.edx.org/learn/quantum-computing
- https://qcs.rigetti.com/sign-in, https://qcs.rigetti.com/sdk-downloads
- https://cqcl.github.io/tket/pytket/api/index.html
- https://silq.ethz.ch/
- https://www.mathstat.dal.ca/~selinger/quipper/
- https://azure.microsoft.com/en-us/services/quantum/#overview
- https://brilliant.org/courses/quantum-computing/
- 



### Iterate
- combine qbit, pbit and/or [https://github.com/SteveJustin1963/tec-RANDOM] with [https://github.com/SteveJustin1963/tec-STOCH] , and Feigenbaum constants into a new hybrid


### Ref
- https://en.wikipedia.org/wiki/Bra%E2%80%93ket_notation
- https://en.wikipedia.org/wiki/Bloch_sphere#:~:text=In%20quantum%20mechanics%20and%20computing,after%20the%20physicist%20Felix%20Bloch.
- https://en.wikipedia.org/wiki/Quantum_computing#:~:text=The%20study%20of%20quantum%20computing,and%20various%20quantum%20cellular%20automata.
- https://en.wikipedia.org/wiki/Trapped_ion_quantum_computer
- https://en.wikipedia.org/wiki/Rydberg_atom#:~:text=A%20Rydberg%20atom%20is%20an,from%20the%20nucleus%2C%20on%20average.
- https://www.hackster.io/news/turn-your-raspberry-pi-into-a-quantum-computer-with-qrasp-4ccde390a48a?fbclid=IwAR1PTnrLpbiG4ouN9EAxBVFThRH77dHUcE8f4Se-P-7N-zgtRTmiHQ6PaHs
- https://www.sciencealert.com/new-chip-promises-to-bridge-the-gap-between-classical-and-quantum-computing
- https://www.eurekalert.org/pub_releases/2019-09/pu-mq091719.php
- https://qiskit.org/

