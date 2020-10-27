Contains 2 CPUs:
- simple 8bit one coded fully in verilog, with no assembler (tiny instruction set); this was made to get the basics right
    - no logic to load custom program. All preloaded into ROM, cannot flash new stuff into it
    - no pipelined execution
    - all clocked memory
    - not synthesizable (due to `initial` block in ROM)
- ARM7 CPU: CPU in verilog, assembler in Python, linker for assembled files in Python, single data rate, some BRAM, some SRAM
    - [ ] figure out how cheap of an FPGA to get that can handle this

# Resources
- [](https://forums.xilinx.com/t5/General-Technical-Discussion/Difference-between-BRAM-DRAM-and-DMA/td-p/809324)
