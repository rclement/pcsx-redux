/*

MIT License

Copyright (c) 2023 PCSX-Redux authors

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include "psyqo/hardware/cpu.hh"

psyqo::Hardware::CPU::IRQReg<0x0070> psyqo::Hardware::CPU::IReg;
psyqo::Hardware::CPU::IRQReg<0x0074> psyqo::Hardware::CPU::IMask;
psyqo::Hardware::Register<0x00f0> psyqo::Hardware::CPU::DPCR;
psyqo::Hardware::Register<0x00f4> psyqo::Hardware::CPU::DICR;

psyqo::Hardware::Register<0x0000, uint32_t, psyqo::Hardware::WriteQueue::Bypass>
    psyqo::Hardware::CPU::WriteQueueFlusher;