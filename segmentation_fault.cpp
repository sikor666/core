#include <vector>

constexpr int BIGNUM = 50000;

void fun_error(std::vector<int> & vec)
{
    for (int i = 0; i < BIGNUM; ++i)
    {
        vec[i] = i;
    }
}

int main(int argc, char ** argv)
{
    std::vector<int> vec(10);
    fun_error(vec);

    return 0;
}
