#include "iostream"
#include "string"
#include <random>
using namespace std;

class CPU
{
public:
    virtual void cpu() = 0;
};

class GPU
{
public:
    virtual void gpu() = 0;
};

class RAM
{
public:
    virtual void ram() = 0;
};

class Computer
{
private:
    CPU *cpu_type;
    GPU *gpu_type;
    RAM *ram_type;

public:
    Computer(CPU *CPUType, GPU *GPUType, RAM *RAMType)
    {
        cpu_type = CPUType;
        gpu_type = GPUType;
        ram_type = RAMType;
    }
    void work()
    {
        cpu_type->cpu();
        gpu_type->gpu();
        ram_type->ram();
    }
    ~Computer()
    {
        if (cpu_type != NULL)
        {
            delete cpu_type;
            cpu_type = NULL;
        }
        if (gpu_type != NULL)
        {
            delete gpu_type;
            gpu_type = NULL;
        }
        if (ram_type != NULL)
        {
            delete ram_type;
            ram_type = NULL;
        }
    }
};

class IntelCPU : public CPU
{
private:
    /* data */
public:
    void cpu()
    {
        cout << "Intel cpu work" << endl;
    }
};

class IntelGPU : public GPU
{
private:
    /* data */
public:
    void gpu()
    {
        cout << "Intel gpu work" << endl;
    }
};

class IntelRAM : public RAM
{
private:
    /* data */
public:
    void ram()
    {
        cout << "Intel ram work" << endl;
    }
};

class ColorfulCPU : public CPU
{
private:
    /* data */
public:
    void cpu()
    {
        cout << "Colorful cpu work" << endl;
    }
};

class ColorfulGPU : public GPU
{
private:
    /* data */
public:
    void gpu()
    {
        cout << "Colorful gpu work" << endl;
    }
};

class ColorfulRAM : public RAM
{
private:
    /* data */
public:
    void ram()
    {
        cout << "Colorful ram work" << endl;
    }
};

void test01()
{
    CPU *intelCpu = new IntelCPU;
    GPU *intelGpu = new IntelGPU;
    RAM *IntelRam = new IntelRAM;

    Computer *c = new Computer(intelCpu, intelGpu, IntelRam);
    c->work();
    delete c;

    CPU *ColorfulCpu = new ColorfulCPU;
    intelGpu = new IntelGPU;
    IntelRam = new IntelRAM;

    c = new Computer(intelCpu, intelGpu, IntelRam);
    c->work();
    delete c;
}

int main()
{
    test01();
    return 0;
}
