# ECE401_Project1
Pipelined MIPS Processor

## ToDo
- [x] Draw Diagram of Existing Components
- [x] Update PC
    - [x] May not be starting at the right address?
- [x] Calculate Branch & Jump Addresses
    - [x] Use them correctly
- [x] Register Writes
- [x] Memory Reads & Writes
    - [x] Check and see if stores are done improperly (Hint, they're not...)
- [ ] Forwarding/Bypassing Logic
    - [x] Basic Implementation
    - [x] JALR & JR
    - [x] Handle when it is in the writeback stage during decode
    - [x] Forward from Writeback to ALU
	- [ ] Update Diagram to include this
- [x] get a branch near zero in noio
- [ ] syscall 4003 results in segfault every time ...
- [ ] Project Report
