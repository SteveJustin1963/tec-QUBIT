#include <stdio.h>

int main() {
int control_qubit = 0; // state of control qubit
int target_qubit = 1; // state of target qubit

 
// apply CNOT gate to qubits
if (control_qubit == 0) {
    // do nothing
}
else { // control_qubit == 1
    // flip state of target qubit
    target_qubit = !target_qubit;
}

printf("Control qubit: %d\n", control_qubit);
printf("Target qubit: %d\n", target_qubit);

return 0;

---
convert to forth 83

: control_qubit 0 ;
: target_qubit 1 ;

: CNOT 
    control_qubit @ 0= IF
        // do nothing
    ELSE
        target_qubit @ NOT target_qubit !
    THEN
;

CNOT

control_qubit @ .
target_qubit @ .

;
---
This line of code flips the state of target_qubit from 0 to 1 or from 1 to 0. 
It does this by using the NOT operator, which is a bitwise NOT operator. 
The NOT operator means to invert the bits of the number that it is being applied to. 
In this case, it is being applied to target_qubit, which is only 1 bit long, 
so the NOT operator will invert the bit, either from 0 to 1 or from 1 to 0.

